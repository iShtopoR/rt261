//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
#include <mysql.h>
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Twarehouse *warehouse;
//---------------------------------------------------------------------------
__fastcall Twarehouse::Twarehouse(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Twarehouse::tableupdate()
{
	MYSQL_ROW row;
	int i;
	warehouse->RowCount = 1;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT w_id,w_article,w_endres,w_status FROM rt_warehouse";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *table_name[] = {"ИД", "Артикул", "Оставшийся ресурс", "Статус"};
	for(i = 0; i < 4; i++) {
		warehouse->Cells[i][0] =  table_name[i];
	}
	if (result) {
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			warehouse->RowCount++;
			warehouse->Cells[0][i] =  row[0];
			warehouse->Cells[1][i] =  row[1];
			warehouse->Cells[2][i] =  row[2];
			warehouse->Cells[3][i] =  row[3];
		}
	}else {

	}
	mysql_close(db);
	mysql_server_end();
}
void __fastcall Twarehouse::N2Click(TObject *Sender)
{
	about->Show();
}
//---------------------------------------------------------------------------

void __fastcall Twarehouse::N4Click(TObject *Sender)
{
	articlebase->Show();
}
//---------------------------------------------------------------------------

void __fastcall Twarehouse::FormCreate(TObject *Sender)
{
	tableupdate();
}
//---------------------------------------------------------------------------

void __fastcall Twarehouse::Button2Click(TObject *Sender)
{
MYSQL_ROW row;
	FILE *material_spr;
	int i;
	int coloumn_num = 4;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT * FROM rt_warehouse";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	if (result) {
		material_spr=fopen ("warehouse.csv","w");
		if (material_spr == NULL)	{
			Label1->Caption = "Ошибка открытия файла";
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

