#include "FileSystemNode.h"

FileSystemNode::FileSystemNode(string n,string a,FileSystemNode* m){
	this->nombre=n;
	this->autor=a;
	this->madre=m;
}
string FileSystemNode::getAutor(){
	return this->autor;
}
string FileSystemNode::getNombre(){
	return this->nombre;
}