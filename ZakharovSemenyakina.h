//---------------------------------------------------------------------------

#ifndef ZakharovSemenyakinaH
#define ZakharovSemenyakinaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "querystring.h"
#include <DB.hpp>
#include <Grids.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
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
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TEdit *projectCodeEdit;
	TEdit *projectConsumerEdit;
	TEdit *boardLengthEdit;
	TEdit *boardWidthEdit;
	TEdit *rateEdit;
	TButton *getRateButton;
	TButton *enterDataButton;
	TButton *chooseMillButton;
	TLabel *errorLabel;
	TOpenTextFileDialog *openTextFileDialog;
	TXMLDocument *rateXML;
	TIdHTTP *rateHTTP;
	TLabel *IDLabel;
	TEdit *discriptionEdit;
	TLabel *Label20;
	TMemo *memoField;
	void __fastcall chooseMillButtonClick(TObject *Sender);
	void __fastcall enterDataButtonClick(TObject *Sender);
	void __fastcall getRateButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
	bool areEqual(char *stringOne, char *stringTwo);
	int getProjectID();
	double rateResult;

};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
