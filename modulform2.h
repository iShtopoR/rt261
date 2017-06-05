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
	TEdit *article;
	TEdit *ores;
	TComboBox *wstatus;
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
	TLabel *Label3;
	TLabel *Label4;
	TStringGrid *warehouse;
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall tableupdate();
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall warehouseSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);


private:	// User declarations
public:		// User declarations
	float ChoseIdentif;// User declarations
	__fastcall Twarehouse(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Twarehouse *warehouse;
//---------------------------------------------------------------------------
#endif
