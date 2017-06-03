//---------------------------------------------------------------------------

#ifndef T4addtrackH
#define T4addtrackH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Table4editproj.h"
//---------------------------------------------------------------------------
class TT4addtrack1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *track_edit;
	TButton *addtrack_but;
	TLabel *Label2;
	void __fastcall addtrack_butClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
   //	int t4_tck;
	__fastcall TT4addtrack1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TT4addtrack1 *T4addtrack1;
//---------------------------------------------------------------------------
#endif
