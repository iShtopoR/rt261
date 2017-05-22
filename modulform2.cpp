//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
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

