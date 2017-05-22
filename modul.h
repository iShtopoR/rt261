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
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *article;
	TEdit *name;
	TEdit *cost;
	TEdit *res;
	TComboBox *sunit;
	TStringGrid *StringGrid1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label5;
	TLabel *Label4;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
