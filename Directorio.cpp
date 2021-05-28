#include "Directorio.h"
string Directorio::toString(){
	return "";
}
Directorio::Directorio(string n,string a,FileSystemNode* m):FileSystemNode(n,a,m){
	
}
void Directorio::imprimirRecursivo(int num){
	
}
void Directorio::agregarArchivo(FileSystemNode *madre){
	this->lista.push_back(madre);
}
void Directorio::agregarDirectorio(FileSystemNode *madre){
	this->lista.push_back(madre);
}
void Directorio::buscarPorNombre(string word){
	
}