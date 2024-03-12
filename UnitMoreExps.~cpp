//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMoreExps.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMoreExps *FormMoreExps;
//---------------------------------------------------------------------------
__fastcall TFormMoreExps::TFormMoreExps(TComponent* Owner)
        : TForm(Owner)
{
        rwsMoreExps=new RWS();
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void __fastcall TFormMoreExps::BtnMEExpsClick(TObject *Sender)
{
     rwsMoreExps->RW_MoreExps();
}
//---------------------------------------------------------------------------
void __fastcall TFormMoreExps::BtnMEResClick(TObject *Sender)
{
        rwsMoreExps->SW_MoreExps();
        rwsMoreExps->HistoryME();
}
//---------------------------------------------------------------------------
void __fastcall TFormMoreExps::BtnMECleanClick(TObject *Sender)
{
        rwsMoreExps->ClearME_Exps();
        rwsMoreExps->ClearME_Res();
}
//---------------------------------------------------------------------------
void __fastcall TFormMoreExps::BtnMEExitClick(TObject *Sender)
{
        FormMoreExps->Hide();
        FormCalculator->Show();
        FormHistoryME->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFormMoreExps::FormCreate(TObject *Sender)
{
        FormMoreExps->Top=200;
        FormMoreExps->Left=350;
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
// M E N I U
//---------------------------------------------------------------------------
// M E N I U ~ F i l e


// M E N I U ~ M o d e

void __fastcall TFormMoreExps::MME_StandardClick(TObject *Sender)
{
        FormCalculator->Show();
        FormMoreExps->Hide();
        FormHistoryME->Hide();
}
//---------------------------------------------------------------------------

// M E N I U ~ H i s t o r y

void __fastcall TFormMoreExps::MME_ViewClick(TObject *Sender)
{
        FormHistoryME->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormMoreExps::MME_DeleteClick(TObject *Sender)
{
        rwsMoreExps->ClearHistoryME();
}
//---------------------------------------------------------------------------

// M E N I U ~ Radian Vs Degrees

void __fastcall TFormMoreExps::MME_RadianClick(TObject *Sender)
{
        FormCalculator->CheckBoxCRadian->Checked=true;
        FormCalculator->LabelC_RvsD->Caption="Radian";
        FormMoreExps->LabelME_RvsD->Caption="Radian";
}
//---------------------------------------------------------------------------

void __fastcall TFormMoreExps::MME_DegreesClick(TObject *Sender)
{
        FormCalculator->CheckBoxCRadian->Checked=false;
        FormCalculator->LabelC_RvsD->Caption="Degrees";
        FormMoreExps->LabelME_RvsD->Caption="Degrees";
}
//---------------------------------------------------------------------------




void __fastcall TFormMoreExps::MME_ExitClick(TObject *Sender)
{
        FormMoreExps->Hide();
        FormHistoryME->Hide();
}
//---------------------------------------------------------------------------


void TFormMoreExps::setFileNameReadME()
{
        rwsMoreExps->setFileNameRead(FormSetFileRead->EditSetFileRead->Text.c_str());
}
//---------------------------------------------------------------------------
void TFormMoreExps::setFileNameWriteME()
{
        rwsMoreExps->setFileNameWrite(FormSetFileWrite->EditSetFileWrite->Text.c_str());
}
//---------------------------------------------------------------------------
void __fastcall TFormMoreExps::Button1Click(TObject *Sender)
{
        rwsMoreExps->writeToFileME();
}
//---------------------------------------------------------------------------

void __fastcall TFormMoreExps::SetFileReadFrom1Click(TObject *Sender)
{
        FormSetFileRead->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormMoreExps::SetFileWriteTo1Click(TObject *Sender)
{
        FormSetFileWrite->Show();
}
//---------------------------------------------------------------------------

