#include "Directorio.h"
string Directorio::toString(){
	return "Directorio";
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
	/*
		vector<Pelicula*> listatemp;
	for(int i=0;i<this->listaPeliculas.size();i++){
		Pelicula *p=this->listaPeliculas.at(i);
		string movie=p->getTitulo(); 
		if(strstr (movie.c_str(),palabra.c_str())){
			listatemp.push_back(p);
		}	
	}
	for(int i=0;i<listatemp.size();i++){
		Pelicula *p=listatemp[i];
		cout<<"Pelicula: "<<i <<"-";
		cout<<"Titulo: "<< p->getTitulo()<<"-";
		cout<<"Director: "<<p->getDirector()<<"-";
		cout<<"Genero:"<<p->getGenero()<<"-";
		cout<<"Valoracion: "<<p->getValoracion()<<endl;
	}
	*/
	Directorio* d;
	Archivo* a;
	CPP* cpp;
	JPG* jpg;
	PPT* ppt;
	for(int i=0;i<this->lista.size();i++){
		if(dynamic_cast<Directorio*>(lista[i])){
			d=dynamic_cast<Directorio*>(lista[i]);
			d->toString();
		}
	}
}