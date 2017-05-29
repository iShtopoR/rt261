//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Edit_proj_windows.h"
#include "Sverla_window_addcpp.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TProj_editor_w *Proj_editor_w;
//---------------------------------------------------------------------------
__fastcall TProj_editor_w::TProj_editor_w(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TProj_editor_w::But_ed_projClick(TObject *Sender)
{
	//Sverla_window_add->Show();

}
//---------------------------------------------------------------------------

void __fastcall TProj_editor_w::FormCreate(TObject *Sender)
{
	mysql_server_init(0, NULL, NULL);
	int i, k;
	proj_grid->RowCount = 1;
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru","rt_2018","rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT pj_id, pj_code, pj_client, pj_length, pj_width   FROM rt_projects";
	mysql_query(db, query.c_str());    //ansi string v char
	MYSQL_RES *result = mysql_store_result(db);
	MYSQL_ROW row ;
	char *table_name[]  = {"ID", "Код проекта", "Клиент", "Длина", "Ширина"};
	for (i = 0; i < 5; i++) {
		proj_grid->Cells[i][0] = table_name[i];
	}
	if (result) {
		for (i=1; (row = mysql_fetch_row(result))!= 0; i++) {
			for (k=0;k<=5; k++)  {   //пока есть
			proj_grid->RowCount++;
			proj_grid->Cells[k][i] = row[k];
			}
		 }
	} else 	{
		Label_error->Caption = "Error: "+ (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

