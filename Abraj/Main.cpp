//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
int GetStringVal(AnsiString strText)
{
	int nSum=0;
	for(int i=1;i<=strText.Length();i++)
    {
		nSum += CodeChar(strText[i]);
    }
	return nSum;
}
//---------------------------------------------------------------------------
int CodeChar(char ch)
{
    if(ch=='Ç' || ch=='Ã' || ch=='Å' || ch=='ì' ) return 1;
    if(ch=='Â') return 2;
    if(ch=='È') return 2;
	if(ch=='Ì') return 3;
    if(ch=='Ï') return 4;
	if(ch=='å') return 5;
    if(ch=='æ') return 6;
	if(ch=='Ò') return 7;
    if(ch=='Í') return 8;
	if(ch=='Ø') return 9;
    if(ch=='í') return 10;
	if(ch=='ß') return 20;
    if(ch=='á') return 30;
	if(ch=='ã') return 40;
    if(ch=='ä') return 50;
	if(ch=='Ó') return 60;
    if(ch=='Ú') return 70;
	if(ch=='Ý') return 80;
    if(ch=='Õ') return 90;
	if(ch=='Þ') return 100;
    if(ch=='Ñ') return 200;
	if(ch=='Ô') return 300;
    if(ch=='Ê' || ch=='É') return 400;
    if(ch=='Ë') return 500;
	if(ch=='Î') return 600;
    if(ch=='Ð') return 700;
	if(ch=='Ö') return 800;
    if(ch=='Ù') return 900;
	if(ch=='Û') return 1000;
    else return 0;
}
//---------------------------------------------------------------------------
AnsiString GetHScopeValue(int N)
{
	switch(N)
    {
    	case 1:		return	("Hmal");
		case 2:		return	("Thour");
		case 3:		return	("Jouzaa");
		case 4:		return	("Saratan");
		case 5:		return	("Asad");
		case 6:		return	("Azraa");
		case 7:		return	("Mizan");
		case 8:		return	("Aghrab");
		case 9:		return	("Ghaous");
		case 10:	return	("Jadi");
		case 11: 	return	("Daloo");
		case 0:		return	("Hoot");
	}
	return((AnsiString)"nothing");
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::EditNameChange(TObject *Sender)
{
    strName = EditName->Text;
	strMotherName = EditMotherName->Text;

    nName = GetStringVal(strName);
    nMotherName = GetStringVal(strMotherName);
    nSum = nName+nMotherName;
    nBOURJ = nSum % 12;
    strBOURJ = GetHScopeValue(nBOURJ);

    EditBOURJ->Text = strBOURJ;
    LabelName->Caption = IntToStr(nName); 
    LabelMotherName->Caption = IntToStr(nMotherName); 
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FormCreate(TObject *Sender)
{
	EditNameChange(NULL);
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FormDestroy(TObject *Sender)
{
//
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::Button1Click(TObject *Sender)
{
    strFileName = IncludeTrailingBackslash(ExtractFilePath(Application->ExeName))+FormatFloat("00",nBOURJ)+".mht";
  	ShellExecute(WindowHandle,"open",strFileName.c_str(),"","",SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------
