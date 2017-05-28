//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop
#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
#include <mysql.h>
#include <stdlib.h>
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
void __fastcall Tarticlebase::tableupdate()
{
	MYSQL_ROW row;
	int i;
	material->RowCount = 1;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT m_article,m_name,m_cost,m_resource,m_unit FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	char *table_name[] = {"Артикул", "Имя", "Стоимость", "Ресурс", "Измерение"};
	char *status[] = {"1", "2", "3", "4"};
	char *unit_status[] = {"мм", "см", "м", "отв"};
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
	warehouse->Show();
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
			Label7->Caption = "Ошибка открытия файла";
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
		FILE *articlecost;
		char *art;
		char *cost;

	MYSQL_ROW row;
	int i;
	mysql_server_init(0, NULL, NULL);
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT m_article FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES *result = mysql_store_result(db);
	if (result) {
		articlecost=fopen ("warehouse.csv","r");
		if (articlecost == NULL)	{
			Label7->Caption = "Ошибка открытия файла";
			mysql_close(db);
			mysql_server_end();
			return;
		}
	for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			while(fscanf(articlecost, "%s;%s\n", art, cost) != EOF) {
				if (!strcmp(row[1],art)) {
				  	query = "INSERT INTO rt_material (m_article,m_name,m_cost,m_resource,m_unit) VALUES ("+ article->Text +","
		"
				}
		}
	}
	}else {
		Label7->Caption="Error:" + (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
	fclose(articlecost);
}


//---------------------------------------------------------------------------



void __fastcall Tarticlebase::Button1Click(TObject *Sender)
{
	mysql_server_init(0, NULL, NULL);
	MYSQL* db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT m_article,m_name,m_cost,m_resource,m_unit FROM rt_material";
	mysql_query(db, query.c_str());
	MYSQL_RES* result = mysql_store_result(db);
	if (!result) {
		Label1->Caption="Error:" + (AnsiString)mysql_error(db);
	}
	if (article->Text == "" || article->Text == " ") {
	   article->Text = "Введите значение";
	   mysql_close(db);
	   mysql_server_end();
	} else {
		query = "INSERT INTO rt_material (m_article,m_name,m_cost,m_resource,m_unit) VALUES ("+ article->Text +","
		"'"+ name->Text +"',"+ cost->Text +","+ res->Text +","+ sunit->ItemIndex+1 +")";
		int query_result = mysql_query(db, query.c_str());
		if (query_result) {
			  Label7->Caption = "Error" + (AnsiString)mysql_error(db);
		}
		mysql_close(db);
		mysql_server_end();
		tableupdate();
	}


}
//---------------------------------------------------------------------------


