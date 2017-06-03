//---------------------------------------------------------------------------

#ifndef Sverla_window_addcppH
#define Sverla_window_addcppH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <mysql.h>
//---------------------------------------------------------------------------
class TSverla_window_add : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *pj_edit_grid;
	TEdit *t3_edit_code;
	TEdit *t3_edit_name;
	TEdit *t3_edit_l;
	TEdit *t3_edit_dscr;
	TEdit *t3_edit_w;
	TLabel *Код;
	TLabel *клиент;
	TLabel *длина;
	TLabel *шир;
	TLabel *прим;
	TButton *t3_butt_save;
	TADOQuery *ADOQuery1;
	TLabel *Label_error;
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSverla_window_add(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSverla_window_add *Sverla_window_add;
//---------------------------------------------------------------------------
#endif
