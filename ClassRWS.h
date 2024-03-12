//----------------------------------------------------------------------------
#ifndef ClassRWSH
#define ClassRWSH
//----------------------------------------------------------------------------
#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<cstring>
 
using namespace std;

#include "ClassExpression.h"
#include "ClassFile.h"
#include "UnitMoreExps.h"
#include "UnitMain.h"
#include "UnitHistory.h"

//----------------------------------------------------------------------------

class RWS;

class RWS:public CFILE
{
public:
        EXPRESSION expression;

        RWS();
	RWS(string fileName);

	void RW_Expression();
	void RW_MoreExps();

        void SW_Expression();
	void SW_MoreExps();

        void History();
        void HistoryME();

        void ClearHistory();
        void ClearHistoryME();

        void RadianVsDegrees();
        void LabelHistory();

        void ClearME_Exps();
        void ClearME_Res();

        void writeToFile();
        void writeToFileME();

        void error1();
        void error2();
};

//----------------------------------------------------------------------------
#endif