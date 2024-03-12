//---------------------------------------------------------------------------
 
#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("UnitMain.cpp", FormCalculator);
USEFORM("UnitHistory.cpp", FormHistory);
USEFORM("UnitMoreExps.cpp", FormMoreExps);
USEFORM("UnitError.cpp", FormError);
USEFORM("UnitHistoryME.cpp", FormHistoryME);
USEFORM("UnitSetFileRead.cpp", FormSetFileRead);
USEFORM("UnitSetFileWrite.cpp", FormSetFileWrite);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TFormCalculator), &FormCalculator);
                 Application->CreateForm(__classid(TFormHistory), &FormHistory);
                 Application->CreateForm(__classid(TFormMoreExps), &FormMoreExps);
                 Application->CreateForm(__classid(TFormError), &FormError);
                 Application->CreateForm(__classid(TFormHistoryME), &FormHistoryME);
                 Application->CreateForm(__classid(TFormSetFileRead), &FormSetFileRead);
                 Application->CreateForm(__classid(TFormSetFileWrite), &FormSetFileWrite);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
