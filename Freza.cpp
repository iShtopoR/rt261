//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Freza.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::NewArtFrChange(TObject *Sender)
{
	double Article;
	Article = StrToFloat(NewArtFr->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::NewNameFrChange(TObject *Sender)
{
	char NameFr[70];
	*NameFr = StrToFloat(NewNameFr ->Text);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::NewCostFrChange(TObject *Sender)
{
	float CostFr;
	CostFr = StrToFloat(NewCostFr->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::NewResFrChange(TObject *Sender)
{
	float ResourceFr;
	ResourceFr = StrToFloat(NewResFr->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FrIdentChange(TObject *Sender)
{
	float IdentifFr;
	IdentifFr = StrToFloat(FrIdent->Text);
}
//---------------------------------------------------------------------------

