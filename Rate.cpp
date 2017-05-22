//---------------------------------------------------------------------------

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
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Course_buttonClick(TObject *Sender){
	try{
		char* Course_filename = "course.xml";
		Course_http->ConnectTimeout = 500;
		Course_http->ReadTimeout = 500;
		Course_xml->LoadFromXML(Course_http->Get("http://cbr.ru/scripts/XML_daily.asp"));
		Course_http->Disconnect();
		Course_xml->Active = true;
		Course_edit->Text = Course_xml->DocumentElement->ChildNodes->GetNode(10)->GetChildValue("Value");
		Course_label_status->Caption = "Курс загружен!";
		Course_xml->Active = false;
		double Course_result = StrToFloat(Course_edit->Text); // to GLOBAL
	}   catch (EIdHTTPProtocolException &E) {
		ShowMessage("Не удается подключится к центробанку!");
	}   catch (EIdSocketError &E) {
		ShowMessage("Нет подключения к интернету!");
	}
}
