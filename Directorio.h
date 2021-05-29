#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <vector>
#include "FileSystemNode.h"
#include"Archivo.h"
#include"CPP.h"
#include"JPG.h"
#include"PPT.h"
#include"Directorio.h"
#include <iostream>
using namespace std;

class Directorio : public FileSystemNode
{
	private:
		vector<FileSystemNode*> lista;
		
	public:
		~Directorio();
		Directorio(string,string,FileSystemNode*);
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		virtual string toString();
		
	protected:
		
};

#endif