//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormCalculator *FormCalculator;

int ctHistory=0;
//---------------------------------------------------------------------------

__fastcall TFormCalculator::TFormCalculator(TComponent* Owner)
        : TForm(Owner)
{
        rws= new RWS();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::FormCreate(TObject *Sender)
{
        FormCalculator->Top=170;
        FormCalculator->Left=400;
        FormCalculator->CheckBoxCRadian->Checked=true;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//BUTOANE CALCULATOR
//---------------------------------------------------------------------------


void __fastcall TFormCalculator::BtnC0Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'0';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC1Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'1';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC2Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'2';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC3Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'3';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC4Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'4';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC5Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'5';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC6Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'6';
}
//---------------------------------------------------------------------------


void __fastcall TFormCalculator::BtnC7Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'7';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC8Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'8';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnC9Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'9';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCPointClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'.';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCPlusClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'+';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCMinusClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'-';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCMulClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'*';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCDivClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'/';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCPowClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'^';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCSqrtClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"sqrt(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCPDClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+'(';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCPIClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+')';
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCnrPIClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"PI";
}
//---------------------------------------------------------------------------
//BUTOANE ACTIUNE
//---------------------------------------------------------------------------


void __fastcall TFormCalculator::BtnCExpClick(TObject *Sender)
{
        rws->RW_Expression();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCResClick(TObject *Sender)
{
        rws->SW_Expression();
        rws->History();
        rws->LabelHistory();
}
//---------------------------------------------------------------------------
void __fastcall TFormCalculator::BtnCEqualClick(TObject *Sender)
{
        rws->SW_Expression();
        rws->History();
        rws->LabelHistory();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCCClick(TObject *Sender)
{
        FormCalculator->EditCExp->Clear();
        FormCalculator->EditCRes->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCDelClick(TObject *Sender)
{
        int n=FormCalculator->EditCExp->Text.Length();
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text.Delete(n,1);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//BUTOANE FUNCTII
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCExpEClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"exp(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCLnClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"ln(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCExp10Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"10^";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCLgClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"lg(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCLogClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"log(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCSinClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"sin(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCCosClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"cos(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCTgClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"tg(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCCtgClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"ctg(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCAsinClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"asin(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCAcosClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"acos(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCAtgClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"atg(";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCActgClick(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormCalculator->EditCExp->Text+"actg(";
}
//---------------------------------------------------------------------------
//~ ~ ~ M E N I U ~ ~ ~
//---------------------------------------------------------------------------
// M E N I U ~ F i l e

void __fastcall TFormCalculator::MC_ExitClick(TObject *Sender)
{
        Application->Terminate();
}
//---------------------------------------------------------------------------

// M E N I U ~ M o d e

void __fastcall TFormCalculator::MC_StandardClick(TObject *Sender)
{
        FormMoreExps->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_MoreExpsClick(TObject *Sender)
{
        FormMoreExps->Show();
}
//---------------------------------------------------------------------------

// M E N I U ~ H i s t o r y

void __fastcall TFormCalculator::MC_ViewSModeClick(TObject *Sender)
{
        FormHistory->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_ViewMEModeClick(TObject *Sender)
{
        FormHistoryME->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_DeleteClick(TObject *Sender)
{
        rws->ClearHistory();
        rws->ClearHistoryME();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_DeleteSModeClick(TObject *Sender)
{
        rws->ClearHistory();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_DeleteMEModeClick(TObject *Sender)
{
        rws->ClearHistoryME();
}
//---------------------------------------------------------------------------

// M E N I U ~ Radian Vs Degrees

void __fastcall TFormCalculator::MC_RadianClick(TObject *Sender)
{
        FormCalculator->CheckBoxCRadian->Checked=true;
        FormCalculator->LabelC_RvsD->Caption="Radian";
        FormMoreExps->LabelME_RvsD->Caption="Radian";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_DegreesClick(TObject *Sender)
{
        FormCalculator->CheckBoxCRadian->Checked=false;
        FormCalculator->LabelC_RvsD->Caption="Degrees";
        FormMoreExps->LabelME_RvsD->Caption="Degrees";
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::CheckBoxCRadianClick(TObject *Sender)
{
        if(FormCalculator->CheckBoxCRadian->Checked==true)
        {
                FormCalculator->LabelC_RvsD->Caption="Radian";
                FormMoreExps->LabelME_RvsD->Caption="Radian";
        }
        else
        {
                FormCalculator->LabelC_RvsD->Caption="Degrees";
                FormMoreExps->LabelME_RvsD->Caption="Degrees";
        }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TFormCalculator::LabelCLastExpClick(TObject *Sender)
{       if(FormCalculator->LabelCLastExp->Caption!="")
                FormCalculator->EditCExp->Text=FormCalculator->LabelCLastExp->Caption;
}
//---------------------------------------------------------------------------

void TFormCalculator::setFileNameRead()
{
        rws->setFileNameRead(FormSetFileRead->EditSetFileRead->Text.c_str());
}
//--------------------------------------------------------------------------
void TFormCalculator::setFileNameWrite()
{
        rws->setFileNameWrite(FormSetFileWrite->EditSetFileWrite->Text.c_str());
}
//--------------------------------------------------------------------------

void __fastcall TFormCalculator::SetFileRead1Click(TObject *Sender)
{
        FormSetFileRead->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::BtnCWriteFileClick(TObject *Sender)
{
        if(FormCalculator->EditCExp->Text!="")
                rws->writeToFile();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::SetFileWriteTo1Click(TObject *Sender)
{
        FormSetFileWrite->Show();
}
//---------------------------------------------------------------------------

// M E N I U ~ Radian Vs Degrees

void __fastcall TFormCalculator::MC_Error1Click(TObject *Sender)
{
        FormError->Show();
        rws->error1();
}
//---------------------------------------------------------------------------

void __fastcall TFormCalculator::MC_Error2Click(TObject *Sender)
{
        FormError->Show();
        rws->error2();
}
//---------------------------------------------------------------------------


