#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "Directorio.h"
class FileSystem
{
	private:
		Directorio* directorio;
	public:
		FileSystem();
		void setDirectorio(Directorio*);
		Directorio* getDirectorio();
		
	protected:
};

#endif