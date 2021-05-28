#include "FileSystemNode.h"

FileSystemNode::FileSystemNode(string n,string a,FileSystemNode* m){
	this->nombre=n;
	this->autor=a;
	this->madre=m;
}