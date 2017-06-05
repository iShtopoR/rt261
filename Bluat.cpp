//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Bluat.h"
#include <mysql.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	MYSQL_ROW row;
	int i;
	int i_sverlo;
	StringGrid1->RowCount = 1;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0); //данные к бд
	AnsiString query = "SELECT * FROM sverlo WHERE project_id = 1";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *table_name[] = {"Артикул", "Название", "Стоимость", "Ресурс", "Статус"};
	for(i = 0; i < 5; i++) {
		StringGrid1->Cells[i][0] =  table_name[i];
	}
	for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
		MYSQL_ROW row_sverlo;
		mysql_server_init(0, NULL, NULL);
		MYSQL *db = mysql_init(NULL);
		mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0); //данные к бд
		query = "SELECT * FROM rt_material WHERE m_article = ";
		query = query + StrToInt(row[2]);
		mysql_query(db, query.c_str());
		MYSQL_RES *result_sverlo = mysql_store_result(db);
		if (result_sverlo) {
			for(i_sverlo = 1; (row_sverlo = mysql_fetch_row(result_sverlo)) != 0; i_sverlo++) {
				StringGrid1->RowCount++;
				StringGrid1->Cells[0][i] = row_sverlo[0];
				StringGrid1->Cells[1][i] = row_sverlo[1];
				StringGrid1->Cells[2][i] = row_sverlo[2];
				StringGrid1->Cells[3][i] = row_sverlo[3];
				StringGrid1->Cells[4][i] = row_sverlo[4];
			}
		}else {
			ShowMessage((AnsiString)mysql_error(db));
		}  
	}
	mysql_close(db);
	mysql_server_end();
}
//---------------------------------------------------------------------------
