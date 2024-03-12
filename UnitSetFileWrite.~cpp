//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitSetFileWrite.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormSetFileWrite *FormSetFileWrite;
//---------------------------------------------------------------------------
__fastcall TFormSetFileWrite::TFormSetFileWrite(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormSetFileWrite::BtnSetFileWriteClick(TObject *Sender)
{
        FormCalculator->setFileNameWrite();
        FormMoreExps->setFileNameWriteME();
        FormSetFileWrite->Hide();
}
//---------------------------------------------------------------------------
