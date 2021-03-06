//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop
#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
#include "Ekzemp.h"
#include "Freza.h"
#include "querystring.h"
#include "Edit_proj_windows.h"
#include <mysql.h>
#include <stdlib.h>
#include "ZakharovSemenyakina.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tarticlebase *articlebase;
//---------------------------------------------------------------------------
__fastcall Tarticlebase::Tarticlebase(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::tableupdate()   //������� ���������� �������
{
	MYSQL_ROW row;
	int i;
	material->RowCount = 1;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0); //������ � ��
	AnsiString query = "SELECT m_article,m_name,m_cost,m_resource,m_unit FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *table_name[] = {"�������", "���", "���������", "������", "���������"};
	char *status[] = {"1", "2", "3", "4"};
	char *unit_status[] = {"��", "��", "�", "���"};
	for(i = 0; i < 5; i++) {
		material->Cells[i][0] =  table_name[i];
	}
	if (result) {
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			material->RowCount++;
			material->Cells[0][i] =  row[0];
			material->Cells[1][i] =  row[1];
			material->Cells[2][i] =  row[2];
			material->Cells[3][i] =  row[3];
			if (row[4] == NULL) {
			   material->Cells[4][i] = "";
            }
			if (!strcmp(row[4],status[0])) {
			  material->Cells[4][i] = unit_status[0];
			}
			if (!strcmp(row[4],status[1])) {
				material->Cells[4][i] = unit_status[1];
		   } else
		   if (!strcmp(row[4],status[2])) {
			  material->Cells[4][i] = unit_status[2];
			}
		   if (!strcmp(row[4],status[3])) {
				material->Cells[4][i] = unit_status[3];
			}
		}
	}else {
		Label6->Caption="Error:" + (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
}

void __fastcall Tarticlebase::N4Click(TObject *Sender)
{
	warehouse->articlebox->Clear();
	warehouse->tableupdate1();
	warehouse->Show();
	articlebase->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::N2Click(TObject *Sender)
{
	about->Show();
}
//---------------------------------------------------------------------------


void __fastcall Tarticlebase::FormCreate(TObject *Sender)
{
	tableupdate();
}
//---------------------------------------------------------------------------


void __fastcall Tarticlebase::Button3Click(TObject *Sender)
{
MYSQL_ROW row;
	FILE *material_spr;
	int i;
	int coloumn_num = 5;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT * FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	if (result) {
		material_spr=fopen ("material_spr.csv","w");
		if (material_spr == NULL)	{
			Label7->Caption = "������ �������� �����";
			mysql_close(db);
			mysql_server_end();
			return;
		}
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			for (int col = 0; col < coloumn_num; col++) {
					fprintf (material_spr, "%s", row[col]);
					if (col < (coloumn_num - 1)) {
						fprintf (material_spr, ";");
					}
			}
			fprintf (material_spr, "\n");
		}
		fclose (material_spr);
	if (result) {
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			for (int col = 0; col < coloumn_num; col++) {

			}

		}
	}else {
		Label1->Caption="Error:" + (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
}
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::Button2Click(TObject *Sender)
{
		FILE *rawFile;
		FILE *insertlog;
		int art;
		int cost;
		int insflag;
		int a = 0;
    	AnsiString queryString = "";
		AnsiString answerList = "";
		OpenTextFileDialog->Title = "������� ���� csv";
		OpenTextFileDialog->InitialDir = "C:";
		if(OpenTextFileDialog->Execute(this->Handle)) {
			QueryString *object = new QueryString;
			AnsiString filePath = OpenTextFileDialog->FileName;
			rawFile = fopen(filePath.c_str(),"r");
			if (rawFile == NULL || rawFile == "") {
				ShowMessage("No file");

			}
		}
	MYSQL_ROW row;
	int i;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT m_article FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *art1, qr=0;
	if (result) {
		insertlog=fopen ("cost.log","w");
		if (insertlog == NULL)	{
			ShowMessage("������ �������� �����");
			mysql_close(db);
			mysql_server_end();
			return;
		}
		while(fscanf(rawFile, "%d;%d\n", &art, &cost) != EOF) {
			query = "UPDATE rt_material SET m_cost = ";
			query= query+cost +" WHERE m_article = "+ art;
			qr=mysql_query(db, query.c_str());
			a = mysql_affected_rows(db);
			if (a != 1) {
				fprintf (insertlog, "%d\n", art);
			}
		}
			while(fscanf(rawFile, "%d;%d\n", &art, &cost) != EOF) {
			   AnsiString select1 = "SELECT * FROM rt_material WHERE m_article = ";
			   select1 = select1+ art;
			   mysql_query(db, select1.c_str());
			   MYSQL_RES *result1 = mysql_store_result(db);

			}

	}else {
		ShowMessage("Error:" + (AnsiString)mysql_error(db));
		mysql_close(db);
		mysql_server_end();
	}
	ShowMessage("������������� �������� �������� � cost.log");
	mysql_close(db);
	mysql_server_end();
	tableupdate();
	fclose(rawFile);
	fclose(insertlog);

}



//---------------------------------------------------------------------------



void __fastcall Tarticlebase::Button1Click(TObject *Sender){
	mysql_server_init(0, NULL, NULL);
	MYSQL* db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT m_article,m_name,m_cost,m_resource,m_unit FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES* result = mysql_store_result(db);
	if (!result) {
		Label1->Caption="Error:" + (AnsiString)mysql_error(db);
	}
	if (article->Text == "" || article->Text == " " || name->Text == "" || name->Text == " " || cost->Text =="" || cost->Text == " "|| res->Text =="" || res->Text == " ") {
	   ShowMessage("��������� ��� ���� ����� �����");
	   mysql_close(db);
	   mysql_server_end();
	} else {
		query = "INSERT INTO rt_material (m_article,m_name,m_cost,m_resource,m_unit) VALUES ('"+ article->Text +"',"
		"'"+ name->Text +"',"+ cost->Text +","+ res->Text +","+ (sunit->ItemIndex+1) +")";
		int query_result = mysql_query(db, query.c_str());
		if (query_result) {
			  Label7->Caption = "Error" + (AnsiString)mysql_error(db);
		}
		mysql_close(db);
		mysql_server_end();
		tableupdate();
		warehouse->articlebox->Clear();
		warehouse->tableupdate1();
	}


}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall Tarticlebase::materialSelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	if (ARow == 0) {

	} else  {
		if (ACol = 1) {
			 Frezes->Measure->Caption = material->Cells[ACol+3][ARow];
			 Frezes->OldRes->Caption = material->Cells[ACol+2][ARow];
			 Frezes->OldCost->Caption = material->Cells[ACol+1][ARow];
			 Frezes->OldArt->Caption = material->Cells[ACol-1][ARow];
			 Frezes->OldName->Caption = material->Cells[ACol][ARow];

			 Frezes->NewArtFr->Text = material->Cells[ACol-1][ARow];
			 Frezes->NewNameFr->Text = material->Cells[ACol][ARow];
			 Frezes->NewCostFr->Text = material->Cells[ACol+1][ARow];
			 Frezes->NewResFr->Text = material->Cells[ACol+2][ARow];
		 }
	}
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::Button4Click(TObject *Sender)
{
	Frezes->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::N6Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------


void __fastcall Tarticlebase::N7Click(TObject *Sender)
{
	Proj_editor_w->Show();
}
//---------------------------------------------------------------------------

