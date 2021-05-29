#include "Directorio.h"
#include <iostream>
using namespace std;
Directorio::~Directorio(){
	for(int i = 0; i < this->lista.size(); i++){
    	if(this->lista.at(i)){
        	this->lista.at(i) = 0; 
        	delete this->lista.at(i);    
   	 	}
	}
	this->lista.clear();
}
string Directorio::toString(){
	return "  Nombre: "+this->nombre+"  Autor: "+this->autor;
}
Directorio::Directorio(string n,string a,FileSystemNode* m):FileSystemNode(n,a,m){
	
}
void Directorio::imprimirRecursivo(int num){
	string acum;
	Directorio* d;
	CPP* cpp;
	JPG* jpg;
	PPT* ppt;
	for(int j=0;j<num*6;j++){
			acum+=" ";
		}
	for(int i=0;i<this->lista.size();i++){
		
		
		if(dynamic_cast<Directorio*>(lista[i])){
			d=dynamic_cast<Directorio*>(lista[i]);
			cout<<acum<<lista[i]->toString()<<endl;
			d->imprimirRecursivo(num+1);
			
		}else if(dynamic_cast<JPG*>(lista[i])){
			jpg=dynamic_cast<JPG*>(lista[i]);
			//cout<<jpg->toString()<<endl;
			
			cout<<acum<<"Nombre Archivo: "<<jpg->getNombre()<<endl;
			cout<<acum<<"Nombre Autor: "<<jpg->getAutor()<<endl;
			cout<<acum<<"Ancho: "<<jpg->getAncho()<<endl;
			cout<<acum<<"Largo "<<jpg->getLargo()<<endl;
			cout<<acum<<"Resolucion: "<<jpg->getResolucion()<<endl;
		}else if(dynamic_cast<CPP*>(lista[i])){
			cpp=dynamic_cast<CPP*>(lista[i]);
			//cout<<cpp->toString()<<endl;
			cout<<acum<<"Nombre Archivo: "<<cpp->getNombre()<<endl;
			cout<<acum<<"Nombre Autor: "<<cpp->getAutor()<<endl;
			cout<<acum<<"Lineas: "<<cpp->getLineas()<<endl;
			cout<<acum<<"Errores: "<<cpp->getError()<<endl;	
		}else if(dynamic_cast<PPT*>(lista[i])){
			ppt=dynamic_cast<PPT*>(lista[i]);
			//cout<<ppt->toString()<<endl;
			cout<<acum<<"Nombre Archivo: "<<ppt->getNombre()<<endl;
			cout<<acum<<"Nombre Autor: "<<ppt->getAutor()<<endl;
			cout<<acum<<"Numero Slides: "<<ppt->getSlides()<<endl;
			cout<<acum<<"Numero Plantillas: "<<ppt->getPlantilla()<<endl;
			cout<<acum<<"Titulo : "<<ppt->getTitulo()<<endl;
			cout<<acum<<"Animacion: "<<ppt->getAnima()<<endl;
		}
	}
	d=0;

	 cpp=0;
	 jpg=0;
	 ppt=0;
	 delete d;
	 
	 delete cpp;
	 delete jpg;
	 delete ppt;
}
void Directorio::agregarArchivo(FileSystemNode *madre){
	this->lista.push_back(madre);
}
void Directorio::agregarDirectorio(FileSystemNode *madre){
	this->lista.push_back(madre);
}
void Directorio::buscarPorNombre(string word){

	Directorio* d;
	Archivo* a;
	CPP* cpp;
	JPG* jpg;
	PPT* ppt;
	for(int i=0;i<this->lista.size();i++){
		if(dynamic_cast<Directorio*>(lista[i])){
				d=dynamic_cast<Directorio*>(lista[i]);
				string w=d->getNombre();
				if(strstr (w.c_str(),word.c_str())){
					cout<<"Se Encontro un Directorio con su palabra ! "<<endl;
					cout<<"Nombre Directorio: "<<d->getNombre()<<endl;
					cout<<"Nombre Autor: "<<d->getAutor()<<endl;
				}
		}
	}
	//
	for(int i=0;i<this->lista.size();i++){
		if(dynamic_cast<CPP*>(lista[i])){
			cpp=dynamic_cast<CPP*>(lista[i]);
			//string w=d->getNombre();
			string w=cpp->getNombre();
			if(strstr (w.c_str(),word.c_str())){
				cout<<"Se encontro Un Archivo CPP con su Palabra!"<<endl;
				cout<<"Nombre Archivo: "<<cpp->getNombre()<<endl;
				cout<<"Nombre Autor: "<<cpp->getAutor()<<endl;
				cout<<"Lineas: "<<cpp->getLineas()<<endl;
				cout<<"Errores: "<<cpp->getError()<<endl;
			}
		}
	}
	//
	for(int i=0;i<this->lista.size();i++){
		if(dynamic_cast<JPG*>(lista[i])){
			jpg=dynamic_cast<JPG*>(lista[i]);
			//string w=d->getNombre();
			string w=jpg->getNombre();
			if(strstr (w.c_str(),word.c_str())){
				cout<<"Se encontro Un Archivo JPG con su Palabra!"<<endl;
				cout<<"Nombre Archivo: "<<jpg->getNombre()<<endl;
				cout<<"Nombre Autor: "<<jpg->getAutor()<<endl;
				cout<<"Ancho: "<<jpg->getAncho()<<endl;
				cout<<"Largo "<<jpg->getLargo()<<endl;
				cout<<"Resolucion: "<<jpg->getResolucion()<<endl;
			}
		}
	}
	//
	for(int i=0;i<this->lista.size();i++){
		if(dynamic_cast<PPT*>(lista[i])){
			ppt=dynamic_cast<PPT*>(lista[i]);
			//string w=d->getNombre();
			string w=ppt->getNombre();
			if(strstr (w.c_str(),word.c_str())){
				cout<<"Se encontro Un Archivo PPT con su Palabra!"<<endl;
				cout<<"Nombre Archivo: "<<ppt->getNombre()<<endl;
				cout<<"Nombre Autor: "<<ppt->getAutor()<<endl;
				cout<<"Numero Slides: "<<ppt->getSlides()<<endl;
				cout<<"Numero Plantillas: "<<ppt->getPlantilla()<<endl;
				cout<<"Titulo : "<<ppt->getTitulo()<<endl;
				cout<<"Animacion: "<<ppt->getAnima()<<endl;
			}
		}
	}
	 d=0;
	 a=0;
	 cpp=0;
	 jpg=0;
	 ppt=0;
	 delete d;
	 delete a;
	 delete cpp;
	 delete jpg;
	 delete ppt;
	
}