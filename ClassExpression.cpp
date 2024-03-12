//---------------------------------------------------------------------------
#include "ClassExpression.h"
 
//---------------------------------------------------------------------------

EXPRESSION::EXPRESSION ()
{
        error=false;
}
EXPRESSION::EXPRESSION (string expression)
{
	this->expression=expression;
        error=false;
        radian=true;
}
//******************************************************************************
// F O R M A   P O L O N E Z A
//******************************************************************************

std::queue<string> EXPRESSION::formaPoloneza()
{
        error=false;

	int n=expression.size();
	queue <string> poloneza;
	stack <string> stivaOperator;

        if(expression=="") return poloneza;

        if(expression[0]=='+' || expression[0]=='-')
                poloneza.push("0");

	//parcurgem sirul caracter cu caracter
	for(int i=0; i<n; i++)
	{
		//daca este numar, add la forma poloneza
		if(eCifra(expression[i]))
		{
			string str;
			while(eCifra(expression[i]) || expression[i]=='.')
                        {
				str=str+STR(expression[i]);
				i++;
			}
			i--;
			poloneza.push(str);
		}
                if(eNrPI(i)) { poloneza.push("PI"); i=i+1; }
		else
		{
                        if(eLog(i))
                        {
                                stivaOperator.push("log"); i+=2;
                                i++;
                                string str;
			        while(eCifra(expression[i]) || expression[i]=='.')
                                {
				        str=str+STR(expression[i]);
				        i++;
			        }
			        i--;
			        poloneza.push(str);
                                str="";
                                while(eCifra(expression[i]) || expression[i]=='.')
                                {
				        str=str+STR(expression[i]);
				        i++;
			        }
			        i--;
			        poloneza.push(str);
                                i++;
                        }
                        
			if(eFunctie(i))
			{
				if(ePow(i))  { stivaOperator.push("pow");  i=i+2;}
				else if(eSqrt(i)) { stivaOperator.push("sqrt"); i=i+3;}
                                else if(eExp(i) ) { stivaOperator.push("exp");  i=i+2;}
                                else if(eLn(i)  ) { stivaOperator.push("ln");   i=i+1;}
                                else if(eLg(i)  ) { stivaOperator.push("lg");   i=i+1;}
				else if(eSin(i) ) { stivaOperator.push("sin");  i=i+2;}
				else if(eCos(i) ) { stivaOperator.push("cos");  i=i+2;}
                                else if(eTg(i)  ) { stivaOperator.push("tg");   i=i+1;}
                                else if(eCtg(i) ) { stivaOperator.push("ctg");  i=i+2;}
                                else if(eAsin(i)) { stivaOperator.push("asin"); i=i+3;}
                                else if(eAcos(i)) { stivaOperator.push("acos"); i=i+3;}
                                else if(eAtg(i) ) { stivaOperator.push("atg");  i=i+2;}
                                else if(eActg(i)) { stivaOperator.push("actg"); i=i+3;}
			}

			//daca este ( add in stiva
			if( PDeschisa(expression[i]) )
			{
                                stivaOperator.push("(");
                                if(expression[i+1]=='+' || expression[i+1]=='-')
                                {
                                        poloneza.push("0");
                                        i++;
                                }
                        }

			//daca este PInchisa scoatem din stiva
			//pana dam de ( si add la forma poloneza, apoi scoatem (
			if(PInchisa(expression[i]))
			{


				while(compara(stivaOperator.top(),'(')==0)
				{
					poloneza.push(stivaOperator.top());
					stivaOperator.pop();
				}
				stivaOperator.pop();
			}
			if((eOperator(expression[i]) || eFunctie(i))&&
				!PDeschisa(expression[i]) && !PInchisa(expression[i]))
			{
				while(!stivaOperator.empty() &&
                                 prioritateOp(stivaOperator.top())>=prioritateOp(STR(expression[i])))
				{
					poloneza.push(stivaOperator.top());
					stivaOperator.pop();
				}

				stivaOperator.push(STR(expression[i]));
			}
		}
	}


	while(!stivaOperator.empty())
	{
		poloneza.push(stivaOperator.top());
		stivaOperator.pop();
	}

	return poloneza;

}

//******************************************************************************
// E V A L U A R E
//******************************************************************************
double EXPRESSION::evaluare(){
	queue <string> coada=formaPoloneza();

	stack <double> stiva;
	double t1;	//termenul 1
	double t2;	//termenul 2
	double rez;	//rezultat

        if(coada.empty())
                return 0;

        //daca forma poloneza are cel putin un element,
        //primul element este sigur valoare

        else
        {
                if(eNrPI(coada.front()))
                {
                        stiva.push(M_PI);
                        coada.pop();
                }
                else
                {
                        stiva.push(numar(coada.front()));
			coada.pop();
                }
        }

	while(!coada.empty())
	{
                if(eNrPI(coada.front()))
                {
                        stiva.push(M_PI);
                        coada.pop();
                }

		while(!coada.empty() && !eOperator(coada.front()[0]) && !eLog(coada.front()) && !eFunctie(coada.front()))
		{
			stiva.push(numar(coada.front()));
			coada.pop();
		}

                if(eLog(coada.front()))
                {
                        t1=stiva.top();         stiva.pop();  //baza
                        t2=stiva.top();         stiva.pop();

                        rez=log(t2)/log(t1);

                        stiva.push(rez);
			coada.pop();
                }

		else if(eFunctie(coada.front()))
		{
			t1=stiva.top();		stiva.pop();

			if(ePow(coada.front())) {	t2=stiva.top(); stiva.pop();
                                                        rez = pow(t2,t1); }
                        else if( eExp(coada.front())) { rez = exp(t1);    }
                         else if(  eLn(coada.front())) { rez = log(t1);    }
                          else if(  eLg(coada.front())) { rez = log10(t1);  }
			   else if(eSqrt(coada.front())) { rez = sqrt(t1);   }

                            else if(eSin(coada.front()) || eCos(coada.front()) ||
                                eTg(coada.front())  || eCtg(coada.front())   )
                            {
                                if(radian==0) {t1=t1*M_PI/180;}
                                if( eSin(coada.front()))     { rez = sin(t1);   }
                                 else if( eCos(coada.front())){ rez = cos(t1);   }
                                  else if(  eTg(coada.front()))
                                  {
                                        if(cos(t1)!=0)
                                                rez = tan(t1);
                                        else
                                        {
                                                error=true;
                                                msgError="Error 2";
                                                return 0;
                                        }
                                  }
                                   else if( eCtg(coada.front()))
                                   {
                                        if(tan(t1)!=0)
                                                rez = 1/tan(t1);
                                        else
                                        {
                                                error=true;
                                                msgError="Error 2";
                                                return 0;
                                        }
                                   }
                            }
                             else
                             {
                                if(eAsin(coada.front()))
                                {
                                        if(conditiiAsinAcos(t1))
                                                rez = asin(t1);
                                        else//Error 2
                                                return 0;
                                }
                                else if(eAcos(coada.front()))
                                {
                                        if(conditiiAsinAcos(t1))
                                                rez = acos(t1);
                                        else//Error 2
                                                return 0;
                                }
                                else if( eAtg(coada.front()))
                                {
                                        rez = atan(t1);
                                }
                                else if(eActg(coada.front()))
                                {
                                        if(atan(t1)!=0)
                                                rez= 1/atan(t1);
					else
                                        {
                                                error=true;
                                                msgError="Error 3";
                                                return 0;
                                        }
                                }
                                if(radian==0) { rez=rez*180/M_PI; }
                             }
                        if (rez>0 && rez <= 0.000000001)  rez=0;
                        if (rez<0 && rez >= -0.000000001) rez=0;

			stiva.push(rez);

			coada.pop();
		}//end if eFunctie

		else
		{
                        //se extrage 1 numar
                        t1=stiva.top();		stiva.pop();

                        //daca stiva nu e goala se extrage si al doilea nr
                        if(!stiva.empty())
			{
                            t2=stiva.top();		stiva.pop();

			    char op=coada.front()[0];
			    coada.pop();

			    switch(op)
			    {
				case '+':
					rez=t2+t1;	break;
				case '-':
					rez=t2-t1;	break;
				case '*':
					rez=t2*t1;	break;
				case '/':
					if(t1!=0)       rez=t2/t1;
					else
                                        {
                                                error=true;
                                                msgError="Impartire la zero";
                                                return 0;
                                        }
					break;
				case '^':
					rez=pow(t2,t1);
				default:
					break;
			    }
                        }
                        else{
                                error=true;
                                msgError="Error 1";
                                return 0;
                        }
                        stiva.push(rez);
		}
	}
	return stiva.top();
}

//******************************************************************************

bool EXPRESSION::eOperator(char c)
{
	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^') return true;
	if(c=='(' || c==')' ) return true;
	return false;
}// end eOperatot
//******************************************************************************

int EXPRESSION::prioritateOp(string s)
{
	char c=CHAR(s);
	if(c=='(' || c=='[' || c=='{')	return 1;
	if(c==')' || c==']' || c=='}')	return 2;
	if(c=='+' || c=='-')		return 3;
	if(c=='*' || c=='/')		return 4;
	if(eFunctie(s) || eLog(s) || c=='^')  return 5;
	return 0;
}

//******************************************************************************
double EXPRESSION::cifra(char c)
{
	return (c-'0');
}
//******************************************************************************
bool EXPRESSION::eCifra(char c)
{
	double d=cifra(c);
	if(0<=d && d<=9) return true;
	return false;
}
//******************************************************************************
double EXPRESSION::numar(string str){
	double d=0;
	double nrDupaVirgula=0;

	int nrZecimale=0;

	int i=0;
	while(eCifra(str[i]))
	{
		d=d*10+cifra(str[i]);
		i++;
	}
	if(str[i]=='.'){
		i++;
		while(eCifra(str[i]))
		{
			nrZecimale++;
			nrDupaVirgula=nrDupaVirgula*10+cifra(str[i]);
			i++;
		}
		i--;
		nrDupaVirgula=nrDupaVirgula*pow(10,(-nrZecimale));
	}
	d=d+nrDupaVirgula;
	return d;
}
//******************************************************************************
bool EXPRESSION::eFunctie(int i)
{
	if(eSqrt(i) || eLn(i)  || eExp(i) || ePow(i) || eLg(i)) return true;
        if(eSin(i)  || eCos(i) || eTg(i)  || eCtg(i) ) return true;
        if(eAsin(i) || eAcos(i)|| eAtg(i) || eActg(i)) return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eFunctie(string s)
{
	if(eSqrt(s) || eLn(s)  || eExp(s) || ePow(s) || eLg(s)) return true;
        if(eSin(s)  || eCos(s) || eTg(s)  || eCtg(s)) return true;
        if(eAsin(s) || eAcos(s)|| eAtg(s) || eActg(s)) return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::ePow(int i)
{
	if(expression[i]=='p' && expression[i+1]=='o' && expression[i+2]=='w')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::ePow(string s)
{
	if(!s.compare("pow"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eSqrt(int i)
{
	if(expression[i]=='s' && expression[i+1]=='q' &&
           expression[i+2]=='r' && expression[i+3]=='t')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eSqrt(string s)
{
	if(!s.compare("sqrt"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eLn(int i)
{
	if(expression[i]=='l' && expression[i+1]=='n') return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eLn(string s)
{
	if(!s.compare("ln"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eLg(int i)
{
	if(expression[i]=='l' && expression[i+1]=='g') return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eLg(string s)
{
	if(!s.compare("lg"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eLog(int i)
{
	if(expression[i]=='l' && expression[i+1]=='o' && expression[i+2]=='g') return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eLog(string s)
{
	if(!s.compare("log"))return true;
	return false;
}
//******************************************************************************
 bool EXPRESSION::eExp(int i)
{
	if(expression[i]=='e' && expression[i+1]=='x' && expression[i+2]=='p')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eExp(string s)
{
	if(!s.compare("exp"))return true;
	return false;
}
//******************************************************************************
// F U N C T I I    T R I G O N O M E T R I C E
//******************************************************************************
bool EXPRESSION::eSin(int i)
{
	if(expression[i]=='s' && expression[i+1]=='i' && expression[i+2]=='n')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eSin(string s)
{
	if(!s.compare("sin"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eCos(int i)
{
	if(expression[i]=='c' && expression[i+1]=='o' && expression[i+2]=='s')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eCos(string s)
{
	if(!s.compare("cos"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eTg(int i)
{
	if(expression[i]=='t' && expression[i+1]=='g') return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eTg(string s)
{
	if(!s.compare("tg"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eCtg(int i)
{
	if(expression[i]=='c' && expression[i+1]=='t' && expression[i+2]=='g')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eCtg(string s)
{
	if(!s.compare("ctg"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eAsin(int i)
{
	if(expression[i]=='a' && expression[i+1]=='s' &&
           expression[i+2]=='i' && expression[i+3]=='n')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eAsin(string s)
{
	if(!s.compare("asin"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eAcos(int i)
{
	if(expression[i]=='a' && expression[i+1]=='c' &&
           expression[i+2]=='o' && expression[i+3]=='s')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eAcos(string s)
{
	if(!s.compare("acos"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eAtg(int i)
{
	if(expression[i]=='a' && expression[i+1]=='t' && expression[i+2]=='g')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eAtg(string s)
{
	if(!s.compare("atg"))return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eActg(int i)
{
	if(expression[i]=='a' && expression[i+1]=='c' &&
           expression[i+2]=='t' && expression[i+3]=='g')
                return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::eActg(string s)
{
	if(!s.compare("actg"))return true;
	return false;
}

//******************************************************************************
//******************************************************************************
bool EXPRESSION::eNrPI(int i)
{
        if(expression[i]=='P' && expression[i+1]=='I') return true;
        return false;
}
bool EXPRESSION::eNrPI(string s)
{
        if(!s.compare("PI")) return true;
        return false;
}
//******************************************************************************
string EXPRESSION::STR(char c)
{
	string str(1,c);
	return str;
}
//******************************************************************************
char EXPRESSION::CHAR(string s)
{       return s[0];    }
//******************************************************************************
bool EXPRESSION::PDeschisa(char c)
{
	if(c=='(' || c=='[' || c=='{') return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::PInchisa(char c)
{
	if(c==')' || c==']' || c=='}') return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::compara(string s, char c)
{
	if(s[0]==c) return true;
	return false;
}
//******************************************************************************
bool EXPRESSION::conditiiAsinAcos(double x)
{
        if(x>=-1 && x<=1)
                return true;
        error=true;
        msgError="Error 2";
        return false;
}
//******************************************************************************
