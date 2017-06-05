//---------------------------------------------------------------------------

#ifndef FrezaH
#define FrezaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrezes : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *OldArt;
	TLabel *OldName;
	TLabel *OldCost;
	TLabel *OldRes;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label6;
	TEdit *NewResFr;
	TEdit *NewNameFr;
	TEdit *NewCostFr;
	TLabel *Measure;
	TButton *ChangeFr;
	TLabel *Label7;
	TEdit *NewArtFr;
	void __fastcall ChangeFrClick(TObject *Sender);
private:	// User declarations
public:
int EditArt;// User declarations
	__fastcall TFrezes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrezes *Frezes;
//---------------------------------------------------------------------------
#endif
