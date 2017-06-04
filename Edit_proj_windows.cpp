//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Edit_proj_windows.h"
#include "Table4editproj.h"
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

void __fastcall TProj_editor_w::pj_save_butClick(TObject *Sender)
{
	//Label_error->Caption = 	proj_grid->Col;

	if (Proj_editor_w->col_id == 1) {         //условие выбора столбца в бд, в который будут
			char* copy1= "pj_code";            //вноситься изменения на основании выбранного столбца
			  strcpy (Proj_editor_w->chosen_col, copy1); //в таблице. Не знаю, как реализовать
		} else
		if (Proj_editor_w->col_id == 2) {
			char* copy2= "pj_client";
			strcpy(Proj_editor_w->chosen_col, copy2);
		} else
		if (Proj_editor_w->col_id == 3) {
			char* copy3= "pj_length";
			strcpy(Proj_editor_w->chosen_col, copy3);
		} else
		if (Proj_editor_w->col_id == 4) {
			char* copy4= "pj_width";
			strcpy(Proj_editor_w->chosen_col, copy4);
		} else {
			Label_error->Caption = "Выберите корректный столбец!";
		}
	if (Proj_editor_w->row_id== 0) {
		Label_error->Caption = "Выберите корректный столбец!";
	}
		 //String(Proj_editor_w->contain)   +String(Proj_editor_w->chosen_col)+
	mysql_server_init(0, NULL, NULL);
	MYSQL* db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru","rt_2018","rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "UPDATE rt_projects SET "+String(Proj_editor_w->chosen_col)+" = '"+String(Add_inf->Text)+"' WHERE pj_id = "+IntToStr(Proj_editor_w->row_id)+"";
	int query_result = mysql_query(db, query.c_str());
	if (query_result) {
		Label_error->Caption = "Error: "+ (AnsiString)mysql_error(db);
	}
	mysql_close(db);
	mysql_server_end();
	Add_inf->Clear();
	Proj_editor_w->Proj_Grid_Update();
}
//---------------------------------------------------------------------------

void __fastcall TProj_editor_w::FormCreate(TObject *Sender)
{
   Proj_editor_w->Proj_Grid_Update();

}
//---------------------------------------------------------------------------
void __fastcall TProj_editor_w::Proj_Grid_Update()
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
	   //	strcpy(Edit_proj_instrums->contain_t2[1], IntToStr(result));
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
void __fastcall TProj_editor_w::Edit_instrums_butClick(TObject *Sender)
{
	Edit_proj_instrums->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TProj_editor_w::proj_gridMouseDown(TObject *Sender, TMouseButton Button,     //координаты
		  TShiftState Shift, int X, int Y)
{   Proj_editor_w->pj_save_but->Enabled=1;
	Proj_editor_w->Edit_instrums_but->Enabled=1;
	int  ACol,ARow;

	proj_grid->MouseToCell(X, Y, ACol, ARow);
	proj_grid->Col=ACol;
	proj_grid->Row=ARow;
	Proj_editor_w->row_id = StrToInt(proj_grid->Row);
	Proj_editor_w->col_id = StrToInt(proj_grid->Col);
	Label2->Caption = Proj_editor_w->chosen_col;
	Label1->Caption= IntToStr(Proj_editor_w->row_id);
}
//---------------------------------------------------------------------------
void __fastcall TProj_editor_w::proj_gridSelectCell(TObject *Sender, int ACol, int ARow,
		  bool &CanSelect)
{

   //	Label_error->Caption = 	IntToStr(proj_grid->Row);                                 //Proj_editor_w->row_id
	//strcpy(Proj_editor_w->contain, AnsiString(proj_grid->Cells[ACol][ARow]).c_str());  получение значения из выбранной ячейки
	//	char* col_name[] = {"pj_code", "pj_client", "pj_length", "pj_width"};
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

