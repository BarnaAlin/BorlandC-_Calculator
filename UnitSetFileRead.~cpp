//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitSetFileRead.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormSetFileRead *FormSetFileRead;
//---------------------------------------------------------------------------
__fastcall TFormSetFileRead::TFormSetFileRead(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormSetFileRead::BtnSetFileReadClick(TObject *Sender)
{
        FormCalculator->setFileNameRead();
        FormMoreExps->setFileNameReadME();
        FormSetFileRead->Hide();
}
//---------------------------------------------------------------------------
