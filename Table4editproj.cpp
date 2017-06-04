//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Table4editproj.h"
#include "T4addtrack.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEdit_proj_instrums *Edit_proj_instrums;

//---------------------------------------------------------------------------
__fastcall TEdit_proj_instrums::TEdit_proj_instrums(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEdit_proj_instrums::FormCreate(TObject *Sender)
{

   //	Label6->Caption = IntToStr(row_id);
	MYSQL_ROW row;
	int i;
	edit_proj_ekz->RowCount = 1;
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
		edit_proj_ekz->Cells[i][0] =  table_name[i];
	}
	if (result) {

		for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
			edit_proj_ekz->RowCount++;
			edit_proj_ekz->Cells[0][i] =  row[0];
			edit_proj_ekz->Cells[1][i] =  row[1];
			edit_proj_ekz->Cells[2][i] =  row[2];
			edit_proj_ekz->Cells[3][i] =  row[3];
			if (row[4] == NULL) {
			   edit_proj_ekz->Cells[4][i] = "";
			}
			if (!strcmp(row[4],status[0])) {
			 edit_proj_ekz->Cells[4][i] = unit_status[0];
			}
			if (!strcmp(row[4],status[1])) {
				edit_proj_ekz->Cells[4][i] = unit_status[1];
		   } else
		   if (!strcmp(row[4],status[2])) {
			  edit_proj_ekz->Cells[4][i] = unit_status[2];
			}
		   if (!strcmp(row[4],status[3])) {
				edit_proj_ekz->Cells[4][i] = unit_status[3];
			}
		}
	}else {
		Label_error->Caption="Error:" + (AnsiString)mysql_error(db);
	}
   //	Label6->Caption=Edit_proj_instrums->contain_t2[1];
	mysql_close(db);
	mysql_server_end();
	Grid1Form();
}
//--------------------------------------------------------------------------- Доработать сортировку инструментов
void __fastcall TEdit_proj_instrums::Grid1Form()
{
   //	Label_error->Caption = IntToStr(Proj_editor_w->row_id);
	mysql_server_init(0, NULL, NULL);
	int i, k;
	edit_proj_grid->RowCount = 1;                                             //дописать проверку на 0 строку
	MYSQL *db = mysql_init(NULL);                                                          //IntToStr(Proj_editor_w->t4_id)
	mysql_real_connect(db, "zaoios.ru","rt_2018","rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT tl_id, tl_artic, tl_outgo, tl_info FROM rt_proj_tool WHERE tl_id = 1";//"+String(Proj_editor_w->proj_grid->Row)+"";
	mysql_query(db, query.c_str());    //ansi string v char
	MYSQL_RES *result = mysql_store_result(db);
	MYSQL_ROW row ;
	char *table_name[]  = {"ID проекта", "Артикул", "Расход", "Прим."};
	for (i = 0; i < 4; i++) {
		edit_proj_grid->Cells[i][0] = table_name[i];
	}
	if (result) {
		for (i=1; (row = mysql_fetch_row(result))!= 0; i++) {
			for (k=0;k<=4; k++)  {   //пока есть
			edit_proj_grid->RowCount++;
			edit_proj_grid->Cells[k][i] = row[k];
			}
		 }
	} else 	{
		Label_error->Caption = "Error: "+ (AnsiString)mysql_error(db);
	}
   mysql_close(db);
   mysql_server_end();
}
//---------------------------------------------------------------------------
void __fastcall TEdit_proj_instrums::GridUpdateForm()
{
	mysql_server_init(0, NULL, NULL);                                       //дописать выбор id
	MYSQL *db = mysql_init(NULL);                                                          //IntToStr(Proj_editor_w->t4_id)
	mysql_real_connect(db, "zaoios.ru","rt_2018","rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "INSERT INTO rt_proj_tool (tl_id, tl_artic,tl_outgo,tl_info) VALUES (1,"
		""+ String(Edit_proj_instrums->col_artic) +","+ T4addtrack1->t4_tck +",'"+ String(Edit_proj_instrums->col_name) +"')";
		int query_result = mysql_query(db, query.c_str());
		if (query_result) {
			  Label_error->Caption = "Error" + (AnsiString)mysql_error(db);
		}
		mysql_close(db);
		mysql_server_end();  /**/
}
//---------------------------------------------------------------------------

void __fastcall TEdit_proj_instrums::t4add_buttClick(TObject *Sender)
{
	T4addtrack1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TEdit_proj_instrums::edit_proj_ekzMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
	Edit_proj_instrums->t4add_butt->Enabled=1;
	int  ACol,ARow;
	edit_proj_ekz->MouseToCell(X, Y, ACol, ARow);
	edit_proj_ekz->Col=ACol;
	edit_proj_ekz->Row=ARow;                    //AnsiString .c_str()
	strcpy(Edit_proj_instrums->col_artic, AnsiString(edit_proj_ekz->Cells[0][edit_proj_ekz->Row]).c_str());
	strcpy(Edit_proj_instrums->col_name, AnsiString(edit_proj_ekz->Cells[1][edit_proj_ekz->Row]).c_str());


   //	l2->Caption = Edit_proj_instrums->col_name;
   //	Edit_proj_instrums->row_id = StrToInt(edit_proj_ekz->Row);
   //	Edit_proj_instrums->col_id = StrToInt(edit_proj_ekz->Col);

}
//---------------------------------------------------------------------------



void __fastcall TEdit_proj_instrums::t4_butt_delClick(TObject *Sender)
{
   mysql_server_init(0, NULL, NULL);                                       //дописать выбор id
   MYSQL *db = mysql_init(NULL);                                                          //IntToStr(Proj_editor_w->t4_id)
   mysql_real_connect(db, "zaoios.ru","rt_2018","rt2_2018", "rt_rescalc", 0, NULL, 0);
   AnsiString query = "DELETE FROM  rt_proj_tool WHERE tl_artic = '"+String(Edit_proj_instrums->col_del_artic)+"'";
   int query_result = mysql_query(db, query.c_str());
   if (query_result) {
	  Label_error->Caption = "Error" + (AnsiString)mysql_error(db);
	  }
   mysql_close(db);
   mysql_server_end();  /**/
   Edit_proj_instrums->edit_proj_grid->Rows[Edit_proj_instrums->row_clean_id]->Clear();
   Edit_proj_instrums->Grid1Form();
}
//---------------------------------------------------------------------------

void __fastcall TEdit_proj_instrums::edit_proj_gridMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
	Edit_proj_instrums->t4_butt_del->Enabled = 1;
	int  ACol,ARow;
	edit_proj_grid->MouseToCell(X, Y, ACol, ARow);
	edit_proj_grid->Col=ACol;
	edit_proj_grid->Row=ARow;
	Edit_proj_instrums->row_clean_id=edit_proj_grid->Row;                 //AnsiString .c_str()
	strcpy(Edit_proj_instrums->col_del_artic, AnsiString(edit_proj_grid->Cells[1][edit_proj_grid->Row]).c_str());
	//strcpy(Edit_proj_instrums->col_name, AnsiString(edit_proj_ekz->Cells[1][edit_proj_ekz->Row]).c_str());
	//l1->Caption = 	edit_proj_ekz->Row;

}
//---------------------------------------------------------------------------

