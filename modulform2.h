//---------------------------------------------------------------------------

#ifndef modulform2H
#define modulform2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
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
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
