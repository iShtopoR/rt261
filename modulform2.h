//---------------------------------------------------------------------------

#ifndef modulform2H
#define modulform2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class Twarehouse : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TEdit *Edit1;
	TEdit *Edit2;
	TComboBox *ComboBox1;
	TLabel *Артикул;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Twarehouse(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Twarehouse *warehouse;
//---------------------------------------------------------------------------
#endif
