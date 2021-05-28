#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <vector>
#include "FileSystemNode.h"

class Directorio : public FileSystemNode
{
	private:
		vector<FileSystemNode*> lista;
		
	public:
		Directorio(string,string,FileSystemNode*);
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		virtual string toString();
		
	protected:
		
};

#endif