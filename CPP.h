#ifndef CPP_H
#define CPP_H

#include "Archivo.h"
#include "FileSystemNode.h"
class CPP : public Archivo
{
	private:
		int lineasCodigo;
		int numErrores;
		
	public:
		CPP(string,string,FileSystemNode*,int,int);
		CPP(string,string,FileSystemNode*);
		virtual string toString();
		int getLineas();
		int getError();
	protected:
};

#endif