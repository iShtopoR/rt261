// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Unit3.pas' rev: 21.00

#ifndef Unit3HPP
#define Unit3HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Unit3
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TForm3;
class PASCALIMPLEMENTATION TForm3 : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Grids::TStringGrid* StringGrid1;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TForm3(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TForm3(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TForm3(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TForm3(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TForm3* Form3;

}	/* namespace Unit3 */
using namespace Unit3;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Unit3HPP
