//---------------------------------------------------------------------------

#include <vcl.h>
#include <mysql.h>
#pragma hdrstop

#include "ZakharovSemenyakina.h"
#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdHTTP"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm5 *Form5;

bool TForm5::areEqual(char *stringOne, char *stringTwo) {
	int i = 0;
	if (strlen(stringOne) != strlen(stringTwo)) {
		return false;
	}
	while(stringOne[i] != '\0') {
		if(stringOne[i] != stringTwo[i]) {
			return false;
		}
		i++;
	}
	return true;
}

//---------------------------------------------------------------------------

int TForm5::getProjectID() {
	MYSQL_ROW row;
	int idNumber;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT MAX(pj_id) FROM `rt_projects`";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	if (result) {
		row = mysql_fetch_row(result);
		if(row[0] == NULL) {
			idNumber = 1;
		}
		else {
			idNumber = StrToInt(row[0]);
			idNumber++;
		}
	} else {
		errorLabel->Caption = "Error: " + (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
	return idNumber;
}

//---------------------------------------------------------------------------

__fastcall TForm5::TForm5(TComponent* Owner): TForm(Owner) {
	memoField->Text = "";
	IDLabel->Caption = IntToStr(getProjectID());
}

//---------------------------------------------------------------------------

void __fastcall TForm5::chooseMillButtonClick(TObject *Sender) {
	int counter = 0;
	int *i = new int;
	*i = 0;
	AnsiString queryString = "";
	AnsiString answerList = "";
	MYSQL_ROW row;
	openTextFileDialog->Title = "Открыть файл rtf";
	openTextFileDialog->InitialDir = "C:";
	if(openTextFileDialog->Execute(this->Handle)) {
		QueryString *object = new QueryString;
		AnsiString filePath = openTextFileDialog->FileName;
		FILE *rawFile;
		rawFile = fopen(filePath.c_str(),"r");
		if (rawFile == NULL) {
			errorLabel->Caption = "No file";

		}
		object->loadDataToArray(rawFile);
		object->getDoubleDataArray();
		object->getArrayFromArray();
		mysql_server_init(0, NULL, NULL);
		MYSQL *db = mysql_init(NULL);
		mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
		AnsiString query = "SELECT `m_name` FROM `rt_material`";
		while(object->complexArray[*i] != '\0') {
			mysql_query(db, query.c_str());
			MYSQL_RES *result = mysql_store_result(db);
			if(result) {
				for(; (row = mysql_fetch_row(result)); counter++) {
					if(areEqual(object->complexArray[*i][1], row[0])) {
						queryString = "UPDATE `rt_material` SET `m_resource` = '"+(AnsiString)object->complexArray[*i][3]+"' WHERE `m_name` = '"+(AnsiString)object->complexArray[*i][1]+"'";
						if (mysql_query(db, queryString.c_str())) {
							ShowMessage((AnsiString)mysql_error(db));
						}
						break;
					}
					else {
						memoField->Lines->Add((AnsiString)"Такой фрезы нет: " + object->complexArray[*i][1] + "\n");
						answerList += (AnsiString)"Такой фрезы нет: " + object->complexArray[*i][1] + "\n";
						break;
					}
				}
			}
			else {
				errorLabel->Caption = "Error: " + (AnsiString)mysql_error(db);
			}
			(*i)++;
		}
		if (answerList == "") {
			Label20->Caption = "Все фрезы присутствуют!" ;
		}
		else {
			ShowMessage(answerList);
		}
		fclose(rawFile);
		mysql_close(db);
		mysql_server_end();
		delete object;
	}
	else {
	}
	delete i;
}

//---------------------------------------------------------------------------

void __fastcall TForm5::enterDataButtonClick(TObject *Sender) {
	MYSQL_ROW row;
	int idNumber;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);

	AnsiString query = "INSERT INTO `rt_projects` (pj_id, pj_code, pj_client, pj_length, pj_width, pj_dscpr) VALUES ('"+IDLabel->Caption+"','"+projectCodeEdit->Text+"','"+projectConsumerEdit->Text+"','"+boardLengthEdit->Text+"','"+boardWidthEdit->Text+"','"+discriptionEdit->Text+"')";
	mysql_query(db,"SET NAMES 'utf8'");
	mysql_query(db,"SET CHARACTER SET 'utf8'");
	mysql_query(db,"SET SESSION collation_connection = 'utf8_general_ci'");
	if (projectConsumerEdit->Text == "" || boardWidthEdit->Text == "" || projectCodeEdit->Text == "") {
		ShowMessage("Заполните все поля!");
		return;
	}
	if (mysql_query(db, query.c_str())) {
		errorLabel->Caption = "Error: " + (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
	memoField->Lines->Add("Созданный проект");
	memoField->Lines->Add("ID проекта: " + IDLabel->Caption);
	memoField->Lines->Add("Код проекта: " + projectCodeEdit->Text);
	memoField->Lines->Add("Заказчик: " + projectConsumerEdit->Text);
	memoField->Lines->Add("Длина: " + boardLengthEdit->Text);
	memoField->Lines->Add("Ширина: " + boardWidthEdit->Text);
	memoField->Lines->Add("описание: " + discriptionEdit->Text);

	IDLabel->Caption = IntToStr(getProjectID());
	projectCodeEdit->Text = "";
	projectConsumerEdit->Text = "";
	boardLengthEdit->Text = "";
	boardWidthEdit->Text = "";
	discriptionEdit->Text = "";

}

//---------------------------------------------------------------------------

void __fastcall TForm5::getRateButtonClick(TObject *Sender) {
	if (rateEdit->Text == "") {
    	try {
			rateHTTP->ConnectTimeout = 500;
			rateHTTP->ReadTimeout = 500;
			rateXML->LoadFromXML(rateHTTP->Get("http://cbr.ru/scripts/XML_daily.asp"));
			rateHTTP->Disconnect();
			rateXML->Active = true;
			rateEdit->Text = rateXML->DocumentElement->ChildNodes->GetNode(10)->GetChildValue("Value");
			rateXML->Active = false;
			rateResult = StrToFloat(rateEdit->Text);
		} catch (EIdHTTPProtocolException &E) {
			ShowMessage("Не удается подключится к центробанку!");
		} catch (EIdSocketError &E) {
			ShowMessage("Нет подключения к интернету!");
		}
	}
	else {
		rateResult = StrToFloat(rateEdit->Text);
	}

}

//---------------------------------------------------------------------------


