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
//---------------------------------------------------------------------------
class TProj_editor_w : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *proj_grid;
	TButton *Button3;
	TButton *But_ed_proj;
	TADOQuery *ADOQuery1;
	TLabel *Label_error;
	TButton *Butt_instruments;
	void __fastcall But_ed_projClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);



private:	// User declarations
public:		// User declarations
	__fastcall TProj_editor_w(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TProj_editor_w *Proj_editor_w;
//---------------------------------------------------------------------------
#endif
