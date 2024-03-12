//----------------------------------------------------------------------------
#ifndef ClassExpressionH
#define ClassExpressionH
//----------------------------------------------------------------------------
#include<iostream>
#include<fstream>
#include<stack>
#include<queue>
#include<string.h>
#include<string>
#include<cstring>
#include<math.h>
#include<cmath>
#include<stdio.h>


using namespace std;
 
//----------------------------------------------------------------------------

class EXPRESSION;

class EXPRESSION
{
public:
        string expression;
        string msgError;
        bool error;
        bool radian;

	EXPRESSION();
	EXPRESSION(string expression);

	double evaluare();

private:
        std::queue<string> formaPoloneza();

	bool eOperator(char c);
	int prioritateOp(string s);

	double cifra(char c);
	bool eCifra(char c);

	double numar(string str);

	bool eFunctie(int i);
	bool eFunctie(string s);

	bool ePow(int i);
	bool ePow(string s);
        bool eExp(int i);
        bool eExp(string s);
        bool eLn(int i);
        bool eLn(string s);
        bool eLg(int i);
        bool eLg(string s);
        bool eLog(int i);
        bool eLog(string s);
        bool eSqrt(int i);
	bool eSqrt(string s);

	bool eSin(int i);
	bool eSin(string s);
	bool eCos(int i);
	bool eCos(string s);
        bool eTg(int i);
        bool eTg(string s);
        bool eCtg(int i);
        bool eCtg(string s);

        bool eAsin(int i);
	bool eAsin(string s);
        bool eAcos(int i);
	bool eAcos(string s);
        bool eAtg(int i);
	bool eAtg(string s);
        bool eActg(int i);
	bool eActg(string s);

        bool eNrPI(int i);
        bool eNrPI(string s);

	bool PDeschisa(char c);
	bool PInchisa(char c);
	bool compara(string s, char c);

	string STR(char c);
	char CHAR(string r);

        bool conditiiAsinAcos(double x);
};
//----------------------------------------------------------------------------
#endif