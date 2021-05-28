#ifndef PPT_H
#define PPT_H

#include "Archivo.h"
#include "FileSystemNode.h"
class PPT : public Archivo
{
	private:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimacion;
	public:
		virtual string toString();
		PPT(string,string,FileSystemNode*,string,int,int,bool);
	protected:
};

#endif