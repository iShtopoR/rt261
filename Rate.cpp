//---------------------------------------------------------------------------
//Οΰπρθνγ κσπρΰ εβπξ χεπεη ΦΑ
#include <vcl.h>
#pragma hdrstop

#include "Rate.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdHTTP"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#pragma resource "*.dfm"
TRateForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TRateForm1::TRateForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRateForm1::Course_buttonClick(TObject *Sender){
	try{
		char* Course_filename = "course.xml";
		Course_http->ConnectTimeout = 500;
		Course_http->ReadTimeout = 500;
		Course_xml->LoadFromXML(Course_http->Get("http://cbr.ru/scripts/XML_daily.asp"));
		Course_http->Disconnect();
		Course_xml->Active = true;
		Course_edit->Text = Course_xml->DocumentElement->ChildNodes->GetNode(10)->GetChildValue("Value");
		Course_label_status->Caption = " !";
		Course_xml->Active = false;
		double Course_result = StrToFloat(Course_edit->Text); // to GLOBAL
	}   catch (EIdHTTPProtocolException &E) {
		ShowMessage("    !");
	}   catch (EIdSocketError &E) {
		ShowMessage("   !");
	}
}
