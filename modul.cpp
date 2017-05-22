//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
<<<<<<< .mine#include "About.h"
=======>>>>>>> .theirs#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
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




<<<<<<< .mine
void __fastcall TForm5::About1Click(TObject *Sender)
{
	AboutForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button5Click(TObject *Sender)
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

=======void __fastcall Tarticlebase::N4Click(TObject *Sender)
{
	warehouse->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::N2Click(TObject *Sender)
{
	about->Show();
}
//---------------------------------------------------------------------------


>>>>>>> .theirs