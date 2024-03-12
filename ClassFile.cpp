//---------------------------------------------------------------------------
#include "ClassFile.h"
 
//---------------------------------------------------------------------------

CFILE::CFILE()
{
        fin.open("read.txt");
        fout.open("write.txt");
}
//***********************************************************************

CFILE::CFILE(string fileName)
{
	this->fileName=fileName;
        fin.open(fileName.c_str());
}
//************************************************************************
CFILE::~CFILE()
{
        fin.close();
        fout.close();
}
//************************************************************************
void CFILE::setFileNameRead(string fileName)
{
        fin.close();
        fin.clear();
        fin.open(fileName.c_str());
}
//************************************************************************
void CFILE::setFileNameWrite(string fileName)
{
        fout.close();
        fout.open(fileName.c_str());
}
//************************************************************************

void CFILE::read()
{
	if(!fin.eof())
	{
		fin.getline(sir[0],200);
	}
}
//************************************************************************

void CFILE::readMore()
{
        for(int i=0; i<10 && !fin.eof(); i++)
        {
                fin.getline(sir[i],200);
        }
}
//************************************************************************

void CFILE::write(string exp)
{
        fout.write(exp.c_str(),exp.length());
        fout<<endl;
}
