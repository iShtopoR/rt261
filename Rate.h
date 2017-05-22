//---------------------------------------------------------------------------

#ifndef RateH
#define RateH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "IdBaseComponent.hpp"
#include "IdComponent.hpp"
#include "IdHTTP.hpp"
#include "IdTCPClient.hpp"
#include "IdTCPConnection.hpp"
#include <msxmldom.hpp>
#include <XMLDoc.hpp>
#include <xmldom.hpp>
#include <XMLIntf.hpp>
//---------------------------------------------------------------------------
class TRateForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Course_label;
	TEdit *Course_edit;
	TButton *Course_button;
	TXMLDocument *Course_xml;
	TIdHTTP *Course_http;
	TLabel *Course_label_status;
	void __fastcall Course_buttonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRateForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRateForm1 *RateForm1;
//---------------------------------------------------------------------------
#endif
