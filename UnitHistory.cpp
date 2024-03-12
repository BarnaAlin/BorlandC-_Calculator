//---------------------------------------------------------------------------
 
#include <vcl.h>
#pragma hdrstop

#include "UnitHistory.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormHistory *FormHistory;
//---------------------------------------------------------------------------
__fastcall TFormHistory::TFormHistory(TComponent* Owner)
        : TForm(Owner)
{
        rwsHistory= new RWS();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::FormCreate(TObject *Sender)
{
        FormHistory->Top=200;
        FormHistory->Left=270;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Add
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd0Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp0->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd1Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp1->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd2Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp2->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd3Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp3->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd4Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp4->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd5Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp5->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd6Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp6->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd7Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp7->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd8Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp8->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAdd9Click(TObject *Sender)
{
        FormCalculator->EditCExp->Text=FormHistory->EditHExp9->Text;
        FormHistory->Hide();
        FormCalculator->Show();
}
//---------------------------------------------------------------------------
// Delete
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel0Click(TObject *Sender)
{
        FormHistory->EditHExp0->Clear();
        FormHistory->EditHRes0->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel1Click(TObject *Sender)
{
        FormHistory->EditHExp1->Clear();
        FormHistory->EditHRes1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel2Click(TObject *Sender)
{
        FormHistory->EditHExp2->Clear();
        FormHistory->EditHRes2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel3Click(TObject *Sender)
{
        FormHistory->EditHExp3->Clear();
        FormHistory->EditHRes3->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel4Click(TObject *Sender)
{
        FormHistory->EditHExp4->Clear();
        FormHistory->EditHRes4->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel5Click(TObject *Sender)
{
        FormHistory->EditHExp5->Clear();
        FormHistory->EditHRes5->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel6Click(TObject *Sender)
{
        FormHistory->EditHExp6->Clear();
        FormHistory->EditHRes6->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel7Click(TObject *Sender)
{
        FormHistory->EditHExp7->Clear();
        FormHistory->EditHRes7->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel8Click(TObject *Sender)
{
        FormHistory->EditHExp8->Clear();
        FormHistory->EditHRes8->Clear();
        if(FormHistory->EditHExp9->Text!="")
        {
                FormHistory->EditHExp8->Text=FormHistory->EditHExp9->Text;
                FormHistory->EditHRes8->Text=FormHistory->EditHRes9->Text;

                FormHistory->EditHExp9->Clear();
                FormHistory->EditHRes9->Clear();
                ctHistory=9;
        }
        else ctHistory=8;
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDel9Click(TObject *Sender)
{
        FormHistory->EditHExp9->Clear();
        FormHistory->EditHRes9->Clear();
        ctHistory=9;
}
//---------------------------------------------------------------------------
// Add / Delete All
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHDelAllClick(TObject *Sender)
{
        rwsHistory->ClearHistory();
        ctHistory=0;
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::BtnHAddAllClick(TObject *Sender)
{
        FormMoreExps->EditMEExp0->Text=FormHistory->EditHExp0->Text;
        FormMoreExps->EditMEExp1->Text=FormHistory->EditHExp1->Text;
        FormMoreExps->EditMEExp2->Text=FormHistory->EditHExp2->Text;
        FormMoreExps->EditMEExp3->Text=FormHistory->EditHExp3->Text;
        FormMoreExps->EditMEExp4->Text=FormHistory->EditHExp4->Text;
        FormMoreExps->EditMEExp5->Text=FormHistory->EditHExp5->Text;
        FormMoreExps->EditMEExp6->Text=FormHistory->EditHExp6->Text;
        FormMoreExps->EditMEExp7->Text=FormHistory->EditHExp7->Text;
        FormMoreExps->EditMEExp8->Text=FormHistory->EditHExp8->Text;
        FormMoreExps->EditMEExp9->Text=FormHistory->EditHExp9->Text;
        FormMoreExps->Show();
        FormHistory->Hide();
}
//---------------------------------------------------------------------------
// E X I T
//---------------------------------------------------------------------------
void __fastcall TFormHistory::BtnHExitClick(TObject *Sender)
{
        FormHistory->Hide();
}
//---------------------------------------------------------------------------
// ~ ~ ~ M E N I U ~ ~ ~
//---------------------------------------------------------------------------
void __fastcall TFormHistory::MH_DeleteAllClick(TObject *Sender)
{
        rwsHistory->ClearHistory();
}
//---------------------------------------------------------------------------

void __fastcall TFormHistory::MH_ExitClick(TObject *Sender)
{
        FormHistory->Hide();
}
//---------------------------------------------------------------------------


