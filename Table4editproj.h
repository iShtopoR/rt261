//---------------------------------------------------------------------------

#ifndef Table4editprojH
#define Table4editprojH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Grids.hpp>
#include "Mysql.h"


//---------------------------------------------------------------------------
class TEdit_proj_instrums : public TForm
{
__published:	// IDE-managed Components
	TLabel *Код;
	TLabel *клиент;
	TLabel *длина;
	TLabel *шир;
	TLabel *прим;
	TLabel *Label_error;
	TStringGrid *edit_proj_grid;
	TEdit *t3_edit_code;
	TEdit *t3_edit_name;
	TEdit *t3_edit_l;
	TEdit *t3_edit_dscr;
	TEdit *t3_edit_w;
	TButton *t4_butt_save;
	TADOQuery *ADOQuery1;
	TStringGrid *edit_proj_ekz;
	TLabel *dostupnie;
	TLabel *Proektnie;
	TButton *t4add_butt;
	TLabel *Label6;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall  Grid1Form();
	void __fastcall t4add_buttClick(TObject *Sender);
	void __fastcall	GridUpdateForm();
	void __fastcall edit_proj_ekzMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);

private:	// User declarations
public:
   /*	int row_id;
	int col_id;
	char* contain_t2;
	char* chosen_col;     */
		// User declarations
	__fastcall TEdit_proj_instrums(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEdit_proj_instrums *Edit_proj_instrums;

//---------------------------------------------------------------------------
#endif
