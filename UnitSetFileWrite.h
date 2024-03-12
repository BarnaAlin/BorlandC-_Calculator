//---------------------------------------------------------------------------

#ifndef UnitSetFileWriteH
#define UnitSetFileWriteH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
#include "UnitMain.h"
//---------------------------------------------------------------------------
class TFormSetFileWrite : public TForm
{
__published:	// IDE-managed Components
        TEdit *EditSetFileWrite;
        TButton *BtnSetFileWrite;
        void __fastcall BtnSetFileWriteClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormSetFileWrite(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSetFileWrite *FormSetFileWrite;
//---------------------------------------------------------------------------
#endif
