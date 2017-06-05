//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ekzemp.h"
#include "modulform2.h"
#include "modul.h"
#include "Freza.h"
#include <mysql.h>
#include <stdlib.h>
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEkzempForm *EkzempForm;

//---------------------------------------------------------------------------
__fastcall TEkzempForm::TEkzempForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TEkzempForm::ChangeEkzClick(TObject *Sender)
{
	RestRes = StrToInt(ChangeOfRestResEkz->Text);
	State2 = NewState->Text;
	warehouse->warehouse->Cells[2][warehouse->ChoseIdentif] = RestRes;
	warehouse->warehouse->Cells[3][warehouse->ChoseIdentif] = State2;
	int status_id_new = 0;
	if(State2 == "Новое сверло"){
		 status_id_new = 1;
	}
	if(State2 == "Хорошее качество реза"){
		 status_id_new = 2;
	}
	if(State2 == "Нормальное качество реза"){
		 status_id_new = 3;
	}
	if(State2 == "Плохое качество реза"){
		 status_id_new = 4;
	}
	if(State2 == "Фреза сломана"){
		 status_id_new = 5;
	}
	mysql_server_init(0, NULL, NULL);
	MYSQL* db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "";
	query = query + "UPDATE rt_warehouse SET w_endres = " + StrToInt(RestRes) + ", w_status = " + StrToInt(status_id_new) + " WHERE w_id = " + StrToInt(warehouse->ChoseIdentif);
	mysql_query(db, query.c_str());
	Close();
}
//---------------------------------------------------------------------------


