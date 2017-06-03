//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "T4addtrack.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TT4addtrack1 *T4addtrack1;
//---------------------------------------------------------------------------
__fastcall TT4addtrack1::TT4addtrack1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TT4addtrack1::addtrack_butClick(TObject *Sender)
{
   /*//	track_edit->Text;
	char str[9], *p=str;
	bool isd=true;
	strcpy(str, AnsiString(track_edit->Text).c_str());
	while(*p)
	   if(!isdigit(*p++))
	  {
		 isd=false;
		 Label2->Caption = "¬ведите число!";
	  }
	if(isd){
		T4addtrack1->t4_tck=atoi(str);
		Edit_proj_instrums->Grid1Form();
		track_edit->Clear();
		T4addtrack1->Close();
	}
	 //Label2->Caption = IntToStr(T4addtrack1->digit);

           */
}
//---------------------------------------------------------------------------
