//---------------------------------------------------------------------------
#ifndef Edit_proj_windowsH
#define Edit_proj_windowsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <mysql.h>
#include "Edit_proj_windows.h"
//---------------------------------------------------------------------------
class TProj_editor_w : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *proj_grid;
	TButton *pj_save_but;
	TADOQuery *ADOQuery1;
	TLabel *Label_error;
	TButton *Edit_instrums_but;
	TEdit *Add_inf;
	TLabel *Label1;
	TLabel *for_edit;
	TLabel *Label2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall pj_save_butClick(TObject *Sender);
	void __fastcall Edit_instrums_butClick(TObject *Sender);
	void __fastcall proj_gridMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall proj_gridSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);


private:	// User declarations
public:		// User declarations
	int row_id;
	int col_id;
	char contain[80];
	char* chosen_col; //имя изменяемого стоблца
	__fastcall TProj_editor_w(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TProj_editor_w *Proj_editor_w;

//---------------------------------------------------------------------------
#endif
