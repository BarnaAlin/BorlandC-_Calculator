//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitHistoryME.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormHistoryME *FormHistoryME;
//---------------------------------------------------------------------------
__fastcall TFormHistoryME::TFormHistoryME(TComponent* Owner)
        : TForm(Owner)
{
        rwsHistoryME= new RWS();
}
//---------------------------------------------------------------------------
void __fastcall TFormHistoryME::BtnHMEExitClick(TObject *Sender)
{
        FormHistoryME->Hide();        
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// ADD
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd0Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp0->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd1Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp1->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd2Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp2->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd3Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp3->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd4Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp4->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd5Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp5->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd6Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp6->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd7Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp7->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd8Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp8->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAdd9Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistoryME->EditHMEExp9->Text;
        FormHistoryME->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------
//Delete
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel0Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp0->Clear();
        FormHistoryME->EditHMERes0->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel1Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp1->Clear();
        FormHistoryME->EditHMERes1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel2Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp2->Clear();
        FormHistoryME->EditHMERes2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel3Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp3->Clear();
        FormHistoryME->EditHMERes3->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel4Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp4->Clear();
        FormHistoryME->EditHMERes4->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel5Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp5->Clear();
        FormHistoryME->EditHMERes5->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel6Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp6->Clear();
        FormHistoryME->EditHMERes6->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel7Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp7->Clear();
        FormHistoryME->EditHMERes7->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel8Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp8->Clear();
        FormHistoryME->EditHMERes8->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDel9Click(TObject *Sender)
{
        FormHistoryME->EditHMEExp9->Clear();
        FormHistoryME->EditHMERes9->Clear();
}
//---------------------------------------------------------------------------
// Buttons ADD / Delete ALL
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEAddAllClick(TObject *Sender)
{
        FormMoreExps->EditMEExp0->Text=FormHistoryME->EditHMEExp0->Text;
        FormMoreExps->EditMEExp1->Text=FormHistoryME->EditHMEExp1->Text;
        FormMoreExps->EditMEExp2->Text=FormHistoryME->EditHMEExp2->Text;
        FormMoreExps->EditMEExp3->Text=FormHistoryME->EditHMEExp3->Text;
        FormMoreExps->EditMEExp4->Text=FormHistoryME->EditHMEExp4->Text;
        FormMoreExps->EditMEExp5->Text=FormHistoryME->EditHMEExp5->Text;
        FormMoreExps->EditMEExp6->Text=FormHistoryME->EditHMEExp6->Text;
        FormMoreExps->EditMEExp7->Text=FormHistoryME->EditHMEExp7->Text;
        FormMoreExps->EditMEExp8->Text=FormHistoryME->EditHMEExp8->Text;
        FormMoreExps->EditMEExp9->Text=FormHistoryME->EditHMEExp9->Text;
        FormMoreExps->Show();
        FormHistoryME->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::BtnHMEDelAllClick(TObject *Sender)
{
        rwsHistoryME->ClearHistoryME();
}
//---------------------------------------------------------------------------
// M E N I U 
//---------------------------------------------------------------------------
void __fastcall TFormHistoryME::MHME_DeleteAllClick(TObject *Sender)
{
        rwsHistoryME->ClearHistoryME();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistoryME::MHME_ExitClick(TObject *Sender)
{
        FormHistoryME->Hide();        
}
//---------------------------------------------------------------------------

