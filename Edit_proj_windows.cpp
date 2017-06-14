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
		} else
		if (Proj_editor_w->col_id == 5) {
			char* copy5= "pj_dscpr";
			strcpy(Proj_editor_w->chosen_col, copy5);
		} else {
			Label_error->Caption = "Выберите корректный столбец!";
		}
	if (Proj_editor_w->row_id == 0) {
		Label_error->Caption = "Выберите корректный столбец!";
	}
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
	strcpy(check_tab,AnsiString(proj_grid->Cells[2][2]).c_str());
	if (check_tab == NULL) {
	   Label_error->Caption = "Таблица пустая!";
	}
	mysql_server_init(0, NULL, NULL);
	int i, k;
	proj_grid->RowCount = 1;
	MYSQL *db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru","rt_2018","rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT pj_id, pj_code, pj_client, pj_length, pj_width, pj_dscpr, pj_rate   FROM rt_projects";
	mysql_query(db, query.c_str());    //ansi string v char
	MYSQL_RES *result = mysql_store_result(db);
	MYSQL_ROW row ;
	char *table_name[]  = {"ID", "Код проекта", "Клиент", "Длина", "Ширина", "Примеч.", "Стоимость"};
	for (i = 0; i < 7; i++) {
		proj_grid->Cells[i][0] = table_name[i];
	}
	if (result) {
	   //	strcpy(Edit_proj_instrums->contain_t2[1], IntToStr(result));
		for (i=1; (row = mysql_fetch_row(result))!= 0; i++) {
			for (k=0;k<=7; k++)  {
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
    Edit_proj_instrums->Grid1Form();
	Edit_proj_instrums->ShowModal();

}
//---------------------------------------------------------------------------
void __fastcall TProj_editor_w::proj_gridMouseDown(TObject *Sender, TMouseButton Button,     //координаты
		  TShiftState Shift, int X, int Y)
{   Proj_editor_w->pj_save_but->Enabled=1;
	Proj_editor_w->eval_proj_butt->Enabled=1;
	Proj_editor_w->Edit_instrums_but->Enabled=1;
	int  ACol,ARow;

	proj_grid->MouseToCell(X, Y, ACol, ARow);
	proj_grid->Col=ACol;
	proj_grid->Row=ARow;
	row_id = StrToInt(proj_grid->Row);
	col_id = StrToInt(proj_grid->Col);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TProj_editor_w::eval_proj_buttClick(TObject *Sender)
{

	MYSQL_ROW row;
	MYSQL_ROW row_materials;
	MYSQL_ROW row_materials_pox;
	int i;
	int i_materials;
	int i_materials_pox;
	// получаем стоимость сверла Стоимость / Ресурс * Время
	// Время работы берем из таблицы заказа
	// Общая формула: ( ( ( СтоимостьИнструмента m_cost/ Ресурс m_res ) * Время ) + ... + ... + ... ) * Курс
	double totalPrice = 0; // Итоговая стоимость
	double SverloPrice = 0; //TODO стоимость минуты сверла
	double RabotaPrice = 0; //TODO стоимость минуты работы
	double RatePrice = 63; //TODO Курс евро
	mysql_server_init(0, NULL, NULL);
	MYSQL* db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "SELECT * FROM rt_projects WHERE pj_id = " +String(Proj_editor_w->row_id)+"";
	mysql_query(db, query.c_str());
	MYSQL_RES* result = mysql_store_result(db);
	for(i = 1; (row = mysql_fetch_row(result)) != 0; i++) {
		Label8->Caption = row[0];
		AnsiString query_request_materials = "SELECT * FROM rt_proj_tool WHERE tl_id = "+Label8->Caption;
		mysql_query(db, query_request_materials.c_str());
		MYSQL_RES* result_materials = mysql_store_result(db);
		for(i_materials = 1; (row_materials = mysql_fetch_row(result_materials)) != 0; i++) {
			Label8->Caption = row_materials[1];
			AnsiString query_request_materials_pox = "SELECT * FROM rt_material WHERE m_article = "+Label8->Caption;
			mysql_query(db, query_request_materials_pox.c_str());
			MYSQL_RES* result_materials_pox = mysql_store_result(db);
			for(i_materials_pox = 1; (row_materials_pox = mysql_fetch_row(result_materials_pox)) != 0; i++) {
				totalPrice = totalPrice + (StrToFloat(row_materials_pox[2]) / StrToFloat(row_materials_pox[3]) * StrToFloat(row_materials[2]));
			}
		}
   }
	totalPrice = totalPrice * RatePrice;
	float sadas = 0;
	sadas = StrToFloat(totalPrice);
	AnsiString upd = "UPDATE rt_projects SET pj_rate = '"+FloatToStr(sadas)+"' WHERE pj_id = "+String(Proj_editor_w->row_id)+"";
	int query_result = mysql_query(db, upd.c_str());
	if (query_result) {
		Label_error->Caption = "Error: "+ (AnsiString)mysql_error(db);
	}
	ShowMessage(FormatFloat("0.00",sadas));
	Proj_editor_w->Proj_Grid_Update();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TProj_editor_w::FormClick(TObject *Sender)
{
 	Proj_editor_w->pj_save_but->Enabled=0;
	Proj_editor_w->eval_proj_butt->Enabled=0;
	Proj_editor_w->Edit_instrums_but->Enabled=0;
}
//---------------------------------------------------------------------------

