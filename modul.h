//---------------------------------------------------------------------------

#ifndef modulH
#define modulH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class Tarticlebase : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *article;
	TEdit *name;
	TEdit *cost;
	TEdit *res;
	TComboBox *sunit;
	TStringGrid *material;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label5;
	TLabel *Label4;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TLabel *Label6;
	TButton *Button5;
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall tableupdate();
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tarticlebase(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tarticlebase *articlebase;
//---------------------------------------------------------------------------
#endif
