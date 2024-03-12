//---------------------------------------------------------------------------
 
#ifndef UnitHistoryH
#define UnitHistoryH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
#include "UnitMain.h"
#include "ClassRWS.h"
#include "UnitMoreExps.h"
//---------------------------------------------------------------------------
class TFormHistory : public TForm
{
__published:	// IDE-managed Components
        TEdit *EditHExp1;
        TEdit *EditHExp2;
        TEdit *EditHExp3;
        TEdit *EditHExp4;
        TEdit *EditHExp5;
        TEdit *EditHExp6;
        TEdit *EditHExp7;
        TEdit *EditHExp8;
        TEdit *EditHExp9;
        TEdit *EditHExp0;
        TLabel *LH1;
        TEdit *EditHRes1;
        TEdit *EditHRes2;
        TEdit *EditHRes3;
        TEdit *EditHRes4;
        TEdit *EditHRes5;
        TEdit *EditHRes6;
        TEdit *EditHRes7;
        TEdit *EditHRes8;
        TEdit *EditHRes9;
        TEdit *EditHRes0;
        TButton *BtnHAdd1;
        TButton *BtnHAdd2;
        TButton *BtnHAdd3;
        TButton *BtnHAdd4;
        TButton *BtnHAdd5;
        TButton *BtnHAdd6;
        TButton *BtnHAdd7;
        TButton *BtnHAdd8;
        TButton *BtnHAdd9;
        TButton *BtnHAdd0;
        TButton *BtnHDel1;
        TButton *BtnHDel2;
        TButton *BtnHDel3;
        TButton *BtnHDel4;
        TButton *BtnHDel5;
        TButton *BtnHDel6;
        TButton *BtnHDel7;
        TButton *BtnHDel8;
        TButton *BtnHDel9;
        TButton *BtnHDel0;
        TLabel *LH2;
        TLabel *LH3;
        TLabel *LH4;
        TLabel *LH5;
        TLabel *LH6;
        TLabel *LH7;
        TLabel *LH8;
        TLabel *LH9;
        TLabel *LH10;
        TButton *BtnHDelAll;
        TButton *BtnHAddAll;
        TButton *BtnHExit;
        TMainMenu *MainMenuH;
        TMenuItem *MH_File;
        TMenuItem *MH_Edit;
        TMenuItem *MH_DeleteAll;
        TMenuItem *MH_Exit;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall BtnHAdd0Click(TObject *Sender);
        void __fastcall BtnHAdd1Click(TObject *Sender);
        void __fastcall BtnHAdd2Click(TObject *Sender);
        void __fastcall BtnHAdd3Click(TObject *Sender);
        void __fastcall BtnHAdd4Click(TObject *Sender);
        void __fastcall BtnHAdd5Click(TObject *Sender);
        void __fastcall BtnHAdd6Click(TObject *Sender);
        void __fastcall BtnHAdd7Click(TObject *Sender);
        void __fastcall BtnHAdd8Click(TObject *Sender);
        void __fastcall BtnHAdd9Click(TObject *Sender);
        void __fastcall BtnHDel0Click(TObject *Sender);
        void __fastcall BtnHDel1Click(TObject *Sender);
        void __fastcall BtnHDel2Click(TObject *Sender);
        void __fastcall BtnHDel3Click(TObject *Sender);
        void __fastcall BtnHDel4Click(TObject *Sender);
        void __fastcall BtnHDel5Click(TObject *Sender);
        void __fastcall BtnHDel6Click(TObject *Sender);
        void __fastcall BtnHDel7Click(TObject *Sender);
        void __fastcall BtnHDel8Click(TObject *Sender);
        void __fastcall BtnHDel9Click(TObject *Sender);
        void __fastcall BtnHDelAllClick(TObject *Sender);
        void __fastcall BtnHAddAllClick(TObject *Sender);
        void __fastcall BtnHExitClick(TObject *Sender);
        void __fastcall MH_DeleteAllClick(TObject *Sender);
        void __fastcall MH_ExitClick(TObject *Sender);
private:	class RWS *rwsHistory;
public:		// User declarations
        __fastcall TFormHistory(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormHistory *FormHistory;
//---------------------------------------------------------------------------
#endif
