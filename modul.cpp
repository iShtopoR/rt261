//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "modul.h"
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


