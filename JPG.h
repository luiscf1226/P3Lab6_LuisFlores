#ifndef JPG_H
#define JPG_H

#include "Archivo.h"
#include "FileSystemNode.h"
class JPG : public Archivo
{
	private:
		bool conFlash;
		string resolucion;
		double largo;
		double ancho;
		
	public:
		JPG(string,string,FileSystemNode*,bool,string,double,double);
		virtual string toString();
	protected:
};

#endif