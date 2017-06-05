//---------------------------------------------------------------------------

#ifndef Table4editprojH
#define Table4editprojH
//---------------------------------------------------------------------------
//#include <System.Classes.hpp>
//#include <Vcl.Controls.hpp>
//#include <Vcl.StdCtrls.hpp>
//#include <Vcl.Forms.hpp>
//#include <Data.DB.hpp>
//#include <Data.Win.ADODB.hpp>
//#include <Vcl.Grids.hpp>
#include "Edit_proj_windows.h"
#include <ADODB.hpp>
#include <Classes.hpp>
#include <Controls.hpp>
#include <DB.hpp>
#include <Grids.hpp>
#include <StdCtrls.hpp>


//---------------------------------------------------------------------------
class TEdit_proj_instrums : public TForm
{
__published:	// IDE-managed Components
//	TStringGrid *edit_proj_grid;
	TButton *t4_butt_del;
//	TADOQuery *ADOQuery1;
//	TStringGrid *edit_proj_ekz;
	TLabel *dostupnie;
	TLabel *Proektnie;
	TButton *t4add_butt;
	TLabel *Label_error;
	TLabel *delbu;
	TLabel *dobavit;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Grid1Form();
	void __fastcall t4add_buttClick(TObject *Sender);
	void __fastcall	GridUpdateForm();
	void __fastcall edit_proj_ekzMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall t4_butt_delClick(TObject *Sender);
	void __fastcall edit_proj_gridMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);



private:	// User declarations
public:
	char col_artic[18];    //артикул  инструмента
	char col_del_artic[18]; //артикул удаляемого инструмента
	char col_name[18];     //название инструмента
	int row_clean_id; //для очистки таблицы после удаления инструмента
		// User declarations
	__fastcall TEdit_proj_instrums(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEdit_proj_instrums *Edit_proj_instrums;

//---------------------------------------------------------------------------
#endif
