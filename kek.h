//---------------------------------------------------------------------------

#ifndef kekH
#define kekH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TEdit *lengthOfBoardEdit;
	TEdit *widthOfBoardEdit;
	TLabel *Label1;
	TLabel *Label2;
	TButton *enterTheData;
	TButton *selectionOfMill;
	TLabel *errorLabel;
	TEdit *projectCodeEdit;
	TEdit *customerEdit;
	TEdit *discriptionEdit;
	TEdit *IDEdit;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	void __fastcall enterTheDataClick(TObject *Sender);
	void __fastcall selectionOfMillClick(TObject *Sender);
private:
	typedef struct infoStruct_ {
		double length;
		double width;
		UnicodeString ID;
		UnicodeString projectCode;
		UnicodeString customer;
		UnicodeString discription;
	} infoStructure;
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
	infoStructure boardInfo;
	char **getInformationFromFile(char *nameOfFile);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
