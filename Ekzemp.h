//---------------------------------------------------------------------------

#ifndef EkzempH
#define EkzempH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TEkzempForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *ArtOfEkz;
	TLabel *RestResEkz;
	TLabel *EkzState;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TEdit *ChangeOfRestResEkz;
	TButton *ChangeEkz;
	TPanel *Panel1;
	TComboBox *NewState;
	TLabel *IdentifEnt;
	TLabel *IdentifEkzemp;
	void __fastcall ChangeEkzClick(TObject *Sender);
private:	// User declarations
public:
	int RestRes;

	AnsiString State2;
	char State1[40];// User declarations
	__fastcall TEkzempForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEkzempForm *EkzempForm;
//---------------------------------------------------------------------------
#endif
