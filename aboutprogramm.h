//---------------------------------------------------------------------------

#ifndef aboutprogrammH
#define aboutprogrammH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class Tabout : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
private:	// User declarations
public:		// User declarations
	__fastcall Tabout(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tabout *about;
//---------------------------------------------------------------------------
#endif
