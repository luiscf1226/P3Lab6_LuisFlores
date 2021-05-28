#include "CPP.h"
CPP::CPP(string n,string a,FileSystemNode* m,int l,int e):Archivo(n,a,m){
	this->lineasCodigo=l;
	this->numErrores=e;
}
string CPP::toString(){
	string ll=to_string(this->lineasCodigo);
	string aa=to_string(this->numErrores);
	return "Lineas: "+ll+" Errores: "+aa;
}