//---------------------------------------------------------------------------

#ifndef UnitMainH
#define UnitMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
#include "UnitMoreExps.h"
#include "UnitHistory.h"
#include "ClassRWS.h"
#include "UnitSetFileRead.h"
#include "UnitSetFileWrite.h"
#include "UnitError.h"
//---------------------------------------------------------------------------
extern int ctHistory;
//---------------------------------------------------------------------------
class TFormCalculator : public TForm
{
__published:	// IDE-managed Components
        TButton *BtnC0;
        TButton *BtnCPoint;
        TButton *BtnCMinus;
        TButton *BtnCEqual;
        TButton *BtnC1;
        TButton *BtnC2;
        TButton *BtnC3;
        TButton *BtnCPlus;
        TButton *BtnCMul;
        TButton *BtnC6;
        TButton *BtnCDiv;
        TButton *BtnC9;
        TButton *BtnCExpE;
        TButton *BtnCLn;
        TButton *BtnCExp10;
        TButton *BtnCLg;
        TButton *BtnC8;
        TButton *BtnC7;
        TButton *BtnC5;
        TButton *BtnC4;
        TButton *BtnCAsin;
        TButton *BtnCPow;
        TButton *BtnCPI;
        TButton *BtnCPD;
        TButton *BtnCnrPI;
        TButton *BtnCC;
        TButton *BtnCDel;
        TButton *BtnCCtg;
        TButton *BtnCTg;
        TButton *BtnCCos;
        TButton *BtnCSqrt;
        TButton *BtnCSin;
        TButton *BtnCAtg;
        TButton *BtnCAcos;
        TButton *BtnCActg;
        TEdit *EditCExp;
        TEdit *EditCRes;
        TButton *BtnCExp;
        TButton *BtnCRes;
        TMainMenu *MainMenuC;
        TMenuItem *MC_File;
        TMenuItem *MC_Mode;
        TMenuItem *MC_History;
        TMenuItem *MC_MoreExps;
        TMenuItem *MC_ViewSMode;
        TMenuItem *MC_Delete;
        TCheckBox *CheckBoxCRadian;
        TMenuItem *MC_RadianVsDegrees;
        TMenuItem *MC_Radian;
        TMenuItem *MC_Degrees;
        TMenuItem *MC_Exit;
        TLabel *LabelC_RvsD;
        TLabel *LabelCLastExp;
        TMenuItem *MC_ViewMEMode;
        TMenuItem *N1;
        TMenuItem *MC_DeleteSMode;
        TMenuItem *MC_DeleteMEMode;
        TMenuItem *SetFileRead1;
        TButton *BtnCWriteFile;
        TMenuItem *N2;
        TMenuItem *SetFileWriteTo1;
        TButton *BtnCLog;
        TButton *Button1;
        TMenuItem *MC_Help;
        TMenuItem *MC_Error1;
        TMenuItem *MC_Error2;
        TMenuItem *N3;
        TMenuItem *MC_About;
        void __fastcall BtnC0Click(TObject *Sender);
        void __fastcall BtnC1Click(TObject *Sender);
        void __fastcall BtnC2Click(TObject *Sender);
        void __fastcall BtnC3Click(TObject *Sender);
        void __fastcall BtnC4Click(TObject *Sender);
        void __fastcall BtnC5Click(TObject *Sender);
        void __fastcall BtnC7Click(TObject *Sender);
        void __fastcall BtnC8Click(TObject *Sender);
        void __fastcall BtnC9Click(TObject *Sender);
        void __fastcall BtnCPointClick(TObject *Sender);
        void __fastcall BtnCPlusClick(TObject *Sender);
        void __fastcall BtnCMinusClick(TObject *Sender);
        void __fastcall BtnCMulClick(TObject *Sender);
        void __fastcall BtnCDivClick(TObject *Sender);
        void __fastcall BtnCPowClick(TObject *Sender);
        void __fastcall BtnCSqrtClick(TObject *Sender);
        void __fastcall BtnCPDClick(TObject *Sender);
        void __fastcall BtnCPIClick(TObject *Sender);
        void __fastcall BtnCnrPIClick(TObject *Sender);
        void __fastcall BtnC6Click(TObject *Sender);
        void __fastcall BtnCExpEClick(TObject *Sender);
        void __fastcall BtnCLnClick(TObject *Sender);
        void __fastcall BtnCExp10Click(TObject *Sender);
        void __fastcall BtnCLgClick(TObject *Sender);
        void __fastcall BtnCSinClick(TObject *Sender);
        void __fastcall BtnCCosClick(TObject *Sender);
        void __fastcall BtnCTgClick(TObject *Sender);
        void __fastcall BtnCCtgClick(TObject *Sender);
        void __fastcall BtnCAsinClick(TObject *Sender);
        void __fastcall BtnCAcosClick(TObject *Sender);
        void __fastcall BtnCAtgClick(TObject *Sender);
        void __fastcall BtnCActgClick(TObject *Sender);
        void __fastcall MC_StandardClick(TObject *Sender);
        void __fastcall MC_MoreExpsClick(TObject *Sender);
        void __fastcall MC_ViewSModeClick(TObject *Sender);
        void __fastcall BtnCExpClick(TObject *Sender);
        void __fastcall BtnCResClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall BtnCCClick(TObject *Sender);
        void __fastcall BtnCEqualClick(TObject *Sender);
        void __fastcall MC_RadianClick(TObject *Sender);
        void __fastcall MC_DegreesClick(TObject *Sender);
        void __fastcall MC_DeleteClick(TObject *Sender);
        void __fastcall BtnCDelClick(TObject *Sender);
        void __fastcall MC_ExitClick(TObject *Sender);
        void __fastcall CheckBoxCRadianClick(TObject *Sender);
        void __fastcall MC_DeleteSModeClick(TObject *Sender);
        void __fastcall MC_DeleteMEModeClick(TObject *Sender);
        void __fastcall MC_ViewMEModeClick(TObject *Sender);
        void __fastcall LabelCLastExpClick(TObject *Sender);
        void __fastcall SetFileRead1Click(TObject *Sender);
        void __fastcall BtnCWriteFileClick(TObject *Sender);
        void __fastcall SetFileWriteTo1Click(TObject *Sender);
        void __fastcall BtnCLogClick(TObject *Sender);
        void __fastcall MC_Error1Click(TObject *Sender);
        void __fastcall MC_Error2Click(TObject *Sender);
private:	class RWS *rws;
public:		// User declarations
        __fastcall TFormCalculator(TComponent* Owner);
        void setFileNameRead();
        void setFileNameWrite();


};
//---------------------------------------------------------------------------
extern PACKAGE TFormCalculator *FormCalculator;
//---------------------------------------------------------------------------
#endif
