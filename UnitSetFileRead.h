//---------------------------------------------------------------------------

#ifndef UnitSetFileReadH
#define UnitSetFileReadH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
#include "UnitMain.h"
//---------------------------------------------------------------------------
class TFormSetFileRead : public TForm
{
__published:	// IDE-managed Components
        TEdit *EditSetFileRead;
        TButton *BtnSetFileRead;
        void __fastcall BtnSetFileReadClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormSetFileRead(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSetFileRead *FormSetFileRead;
//---------------------------------------------------------------------------
#endif
