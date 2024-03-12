//---------------------------------------------------------------------------

#ifndef UnitHistoryMEH
#define UnitHistoryMEH
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
class TFormHistoryME : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *MHME_File;
        TLabel *LHME1;
        TLabel *LHME2;
        TLabel *LHME3;
        TLabel *LHME4;
        TLabel *LHME5;
        TLabel *LHME6;
        TLabel *LHME7;
        TLabel *LHME8;
        TLabel *LHME9;
        TLabel *LHME10;
        TEdit *EditHMERes1;
        TEdit *EditHMERes2;
        TEdit *EditHMERes3;
        TEdit *EditHMERes4;
        TEdit *EditHMERes5;
        TEdit *EditHMERes6;
        TEdit *EditHMERes7;
        TEdit *EditHMERes8;
        TEdit *EditHMERes9;
        TEdit *EditHMERes0;
        TButton *BtnHMEAdd1;
        TButton *BtnHMEAdd2;
        TButton *BtnHMEAdd3;
        TButton *BtnHMEAdd4;
        TButton *BtnHMEAdd5;
        TButton *BtnHMEAdd6;
        TButton *BtnHMEAdd7;
        TButton *BtnHMEAdd8;
        TButton *BtnHMEAdd9;
        TButton *BtnHMEAdd0;
        TButton *BtnHMEDel1;
        TButton *BtnHMEDel2;
        TButton *BtnHMEDel3;
        TButton *BtnHMEDel4;
        TButton *BtnHMEDel5;
        TButton *BtnHMEDel6;
        TButton *BtnHMEDel7;
        TButton *BtnHMEDel8;
        TButton *BtnHMEDel9;
        TButton *BtnHMEDel0;
        TButton *BtnHMEDelAll;
        TButton *BtnHMEAddAll;
        TButton *BtnHMEExit;
        TEdit *EditHMEExp1;
        TEdit *EditHMEExp2;
        TEdit *EditHMEExp3;
        TEdit *EditHMEExp4;
        TEdit *EditHMEExp5;
        TEdit *EditHMEExp6;
        TEdit *EditHMEExp7;
        TEdit *EditHMEExp8;
        TEdit *EditHMEExp9;
        TEdit *EditHMEExp0;
        TMenuItem *MHME_Edit;
        TMenuItem *MHME_Exit;
        TMenuItem *MHME_DeleteAll;
        void __fastcall BtnHMEExitClick(TObject *Sender);
        void __fastcall BtnHMEAdd0Click(TObject *Sender);
        void __fastcall BtnHMEAdd1Click(TObject *Sender);
        void __fastcall BtnHMEAdd2Click(TObject *Sender);
        void __fastcall BtnHMEAdd3Click(TObject *Sender);
        void __fastcall BtnHMEAdd4Click(TObject *Sender);
        void __fastcall BtnHMEAdd5Click(TObject *Sender);
        void __fastcall BtnHMEAdd6Click(TObject *Sender);
        void __fastcall BtnHMEAdd7Click(TObject *Sender);
        void __fastcall BtnHMEAdd8Click(TObject *Sender);
        void __fastcall BtnHMEAdd9Click(TObject *Sender);
        void __fastcall BtnHMEDel0Click(TObject *Sender);
        void __fastcall BtnHMEDel1Click(TObject *Sender);
        void __fastcall BtnHMEDel2Click(TObject *Sender);
        void __fastcall BtnHMEDel3Click(TObject *Sender);
        void __fastcall BtnHMEDel4Click(TObject *Sender);
        void __fastcall BtnHMEDel5Click(TObject *Sender);
        void __fastcall BtnHMEDel6Click(TObject *Sender);
        void __fastcall BtnHMEDel7Click(TObject *Sender);
        void __fastcall BtnHMEDel8Click(TObject *Sender);
        void __fastcall BtnHMEDel9Click(TObject *Sender);
        void __fastcall BtnHMEAddAllClick(TObject *Sender);
        void __fastcall BtnHMEDelAllClick(TObject *Sender);
        void __fastcall MHME_DeleteAllClick(TObject *Sender);
        void __fastcall MHME_ExitClick(TObject *Sender);
private:	class RWS *rwsHistoryME;
public:		// User declarations
        __fastcall TFormHistoryME(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormHistoryME *FormHistoryME;
//---------------------------------------------------------------------------
#endif
