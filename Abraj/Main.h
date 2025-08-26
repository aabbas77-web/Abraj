//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TEdit *EditName;
	TLabel *Label2;
	TEdit *EditMotherName;
	TLabel *Label3;
	TEdit *EditBOURJ;
	TButton *Button1;
	TLabel *LabelName;
	TLabel *LabelMotherName;
	void __fastcall EditNameChange(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
	AnsiString strName,strMotherName,strBOURJ;
    int nSum,nBOURJ,nName,nMotherName;
    AnsiString strFileName;
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
int GetStringVal(AnsiString strText);
int CodeChar(char ch);
AnsiString GetHScopeValue(int N);
//---------------------------------------------------------------------------
#endif
