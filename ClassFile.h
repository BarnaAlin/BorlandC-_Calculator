//----------------------------------------------------------------------------
#ifndef ClassFileH
#define ClassFileH
//----------------------------------------------------------------------------
#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<cstring>

using namespace std;
 
//----------------------------------------------------------------------------

class CFILE;

class CFILE
{
public:
        string fileName;
protected:
        char sir[50][200];
private:
        ifstream fin;
        ofstream fout;

public:
	CFILE();
        CFILE(string fileName);
        ~CFILE();

	void read();
	void readMore();

        void write(string);

        void setFileNameRead(string);
        void setFileNameWrite(string);
};

//----------------------------------------------------------------------------
#endif