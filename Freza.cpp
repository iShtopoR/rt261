//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Freza.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrezes *Frezes;
//---------------------------------------------------------------------------
__fastcall TFrezes::TFrezes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrezes::NewArtFrChange(TObject *Sender)
{
	double Article;
	Article = StrToFloat(NewArtFr->Text);
}
//---------------------------------------------------------------------------

void __fastcall TFrezes::NewNameFrChange(TObject *Sender)
{
	char NameFr[70];
	*NameFr = StrToFloat(NewNameFr ->Text);

}
//---------------------------------------------------------------------------

void __fastcall TFrezes::NewCostFrChange(TObject *Sender)
{
	float CostFr;
	CostFr = StrToFloat(NewCostFr->Text);
}
//---------------------------------------------------------------------------

void __fastcall TFrezes::NewResFrChange(TObject *Sender)
{
	float ResourceFr;
	ResourceFr = StrToFloat(NewResFr->Text);
}
//---------------------------------------------------------------------------

void __fastcall TFrezes::FrIdentChange(TObject *Sender)
{
	float IdentifFr;
	IdentifFr = StrToFloat(FrIdent->Text);
}
//---------------------------------------------------------------------------

