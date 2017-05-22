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
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *ArtOfEkz;
	TLabel *NameOfEkz;
	TLabel *ResOfEkz;
	TLabel *RestResEkz;
	TLabel *EkzState;
	TEdit *EkzIdent;
	TButton *FindEkz;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TEdit *ChangeOfRestResEkz;
	TButton *ChangeEkz;
	TPanel *Panel1;
	TLabel *MeasureRest;
	TComboBox *NewState;
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
