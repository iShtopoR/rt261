//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
#include <mysql.h>
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
			material->Cells[4][i] =  row[4];
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


void __fastcall Tarticlebase::Button6Click(TObject *Sender)
{
	// получаем стоимость сверла Стоимость / Ресурс * Время
	// Время работы берем из таблицы заказа
	// Общая формула:  ( ( ( СтоимостьИнструмента / Ресурс ) * Время ) +  ... + ... + ... ) * Курс
   double totalPrice = 0; // Итоговая стоимость
   double SverloPrice = 0; //TODO стоимость минуты сверла
   double RabotaPrice = 0; //TODO стоимость минуты работы
   double RatePrice = 0; //TODO Курс евро

}
//---------------------------------------------------------------------------

