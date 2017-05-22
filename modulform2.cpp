//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
#include <mysql.h>
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
	char *status[] = {"1", "2", "3", "4", "5"};
	char *warehouse_status[] = {"Новое сверло", "Хорошее", "Нормальное", "Плохое", "Сломано"};
	for(i = 0; i < 4; i++) {
		warehouse->Cells[i][0] =  table_name[i];
	}
	if (result) {
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			warehouse->RowCount++;
			warehouse->Cells[0][i] =  row[0];
			warehouse->Cells[1][i] =  row[1];
			warehouse->Cells[2][i] =  row[2];
		   //	Label3->Caption = row[3];
			if (!strcmp(row[3],status[0])) {
			  warehouse->Cells[3][i] = warehouse_status[0];
			}
			if (!strcmp(row[3],status[1])) {
				warehouse->Cells[3][i] = warehouse_status[1];
		   } else
		   if (!strcmp(row[3],status[2])) {
			  warehouse->Cells[3][i] = warehouse_status[2];
			}
		   if (!strcmp(row[3],status[3])) {
				warehouse->Cells[3][i] = warehouse_status[3];
			}
		   if (!strcmp(row[3],status[4])) {
			  warehouse->Cells[3][i] = warehouse_status[4];
			}
		}
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
	FILE *warehouse;
	int i;
	int coloumn_num = 4;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT * FROM rt_warehouse";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	if (result) {
		warehouse=fopen ("warehouse.csv","w");
		if (warehouse == NULL)	{
			Label1->Caption = "Ошибка открытия файла";
			mysql_close(db);
			mysql_server_end();
			return;
		}
		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			for (int col = 0; col < coloumn_num; col++) {
					fprintf (warehouse, "%s", row[col]);
					if (col < (coloumn_num - 1)) {
						fprintf (warehouse, ";");
					}
			}
			fprintf (warehouse, "\n");
		}
		fclose (warehouse);
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

