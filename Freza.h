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
	TEdit *FrIdent;
	TButton *FindOldFr;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label6;
	TEdit *NewResFr;
	TEdit *NewArtFr;
	TEdit *NewNameFr;
	TEdit *NewCostFr;
	TLabel *Measure;
	TButton *ChangeFr;
	void __fastcall NewArtFrChange(TObject *Sender);
	void __fastcall NewNameFrChange(TObject *Sender);
	void __fastcall NewCostFrChange(TObject *Sender);
	void __fastcall NewResFrChange(TObject *Sender);
	void __fastcall FrIdentChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrezes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrezes *Frezes;
//---------------------------------------------------------------------------
#endif
