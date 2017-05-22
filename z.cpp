//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "z.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner): TForm(Owner) {
}
//---------------------------------------------------------------------------
void __fastcall TForm5::enterTheDataClick(TObject *Sender) {
	boardInfo.width = (double)StrToFloat(widthOfBoardEdit->Text);
	boardInfo.length = (double)StrToFloat(lengthOfBoardEdit->Text);
	boardInfo.ID = IDEdit->Text;
	boardInfo.projectCode = projectCodeEdit->Text;
	boardInfo.customer = customerEdit->Text;
	boardInfo.discription = discriptionEdit->Text;

}
//---------------------------------------------------------------------------
void __fastcall TForm5::selectionOfMillClick(TObject *Sender) {
//	FILE *rtfRawFile;
//	rtfRawFile = fopen("test.rtf","r");
//	if (!rtfRawFile) {
//		errorLabel->Caption = "Something wrong!!"
//		return;
//	}

}
//-------s--------------------------------------------------------------------
