//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "log.h"
#include <mysql.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
MYSQL_ROW row;
	int i;
	StringGrid1->RowCount = 1;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0); //данные к бд
	AnsiString query = "SELECT * FROM sverlo_log ORDER BY id DESC";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *table_name[] = {"ID", "ИД метериала", "Старый статус", "Новый статус"};
	for(i = 0; i < 4; i++) {
		StringGrid1->Cells[i][0] =  table_name[i];
	}
	if (result) {
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			StringGrid1->RowCount++;
			StringGrid1->Cells[0][i] =  row[0];
			StringGrid1->Cells[1][i] =  row[1];
			StringGrid1->Cells[2][i] =  row[2];
			StringGrid1->Cells[3][i] =  row[3];	
		}
	}else {
		ShowMessage((AnsiString)mysql_error(db));
	}
	mysql_close(db);
	mysql_server_end();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
MYSQL_ROW row;
	int i;
	StringGrid1->RowCount = 1;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0); //данные к бд
	AnsiString query = "SELECT * FROM sverlo_log ORDER BY id DESC";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *table_name[] = {"ID", "ИД метериала", "Старый статус", "Новый статус"};
	for(i = 0; i < 4; i++) {
		StringGrid1->Cells[i][0] =  table_name[i];
	}
	if (result) {
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			StringGrid1->RowCount++;
			StringGrid1->Cells[0][i] =  row[0];
			StringGrid1->Cells[1][i] =  row[1];
			StringGrid1->Cells[2][i] =  row[2];
			StringGrid1->Cells[3][i] =  row[3];	
		}
	}else {
		ShowMessage((AnsiString)mysql_error(db));
	}
	mysql_close(db);
	mysql_server_end();
}
//---------------------------------------------------------------------------
