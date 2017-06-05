//---------------------------------------------------------------------------
#ifndef Edit_proj_windowsH
#define Edit_proj_windowsH
//---------------------------------------------------------------------------
#include <mysql.h>
#include "modul.h"
#include <Classes.hpp>
#include <Controls.hpp>
#include <Grids.hpp>
#include <StdCtrls.hpp>


//---------------------------------------------------------------------------
class TProj_editor_w : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *proj_grid;
	TButton *pj_save_but;
	TLabel *Label_error;
	TButton *Edit_instrums_but;
	TEdit *Add_inf;
	TLabel *name;
	TButton *eval_proj_butt;
	TLabel *Label8;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Proj_Grid_Update();
	void __fastcall pj_save_butClick(TObject *Sender);
	void __fastcall Edit_instrums_butClick(TObject *Sender);
	void __fastcall proj_gridMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall eval_proj_buttClick(TObject *Sender);
	void __fastcall FormClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	int row_id;
	int col_id;
	char contain[80];
	char check_tab[3];
	char chosen_col[12]; //имя изменяемого стоблца
	__fastcall TProj_editor_w(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TProj_editor_w *Proj_editor_w;

//---------------------------------------------------------------------------
#endif
