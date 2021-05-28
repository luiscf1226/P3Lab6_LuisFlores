#include "FileSystem.h"
FileSystem::FileSystem(){
	this->directorio=new Directorio("root","Luis",NULL);
	
}
Directorio* FileSystem::getDirectorio(){
	return this->directorio;
}
void FileSystem::setDirectorio(Directorio *d){
	this->directorio=d;
}