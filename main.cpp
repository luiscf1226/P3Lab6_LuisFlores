#include <iostream>
#include"FileSystem.h"
#include"FileSystemNode.h"
#include"Archivo.h"
#include"CPP.h"
#include"JPG.h"
#include"PPT.h"
#include"Directorio.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu(){

	
	while(true){
		cout<<"MENU"<<endl;
		cout<<"1. Imprimir FileSystem "<<endl<<"2. Agregar Directorio "<<endl<<"3. Agregar Archivo"<<endl<<"4. Busca por Nombre"<<endl<<"5. Salir"<<endl;
		int valor;
		cin>>valor;
		if(valor > 0&& valor < 6)
			return valor;
		
	}
	
}
int main(int argc, char** argv) {
	int main=0;
	

	FileSystem* windows=new FileSystem();
	//crear de abajo para arriba
	//1.
	//
	Directorio* carpeta1=new Directorio("carpeta1","Luis",windows->getDirectorio());
	carpeta1->agregarArchivo(new CPP("Dev1","Luis",carpeta1,0,0));
	carpeta1->agregarArchivo(new JPG("Imagen1","Luis",carpeta1,true,"HD",4,4));
	carpeta1->agregarArchivo(new PPT("Presentacion1","Luis",carpeta1,"PW2",4,4,true));
	//
	Directorio* carpeta2=new Directorio("carpeta2","Luis",carpeta1);
	carpeta2->agregarArchivo(new CPP("Dev2","Luis",carpeta2,0,0));
	carpeta2->agregarArchivo(new JPG("Imagen2","Luis",carpeta2,true,"HD",4,4));
	carpeta2->agregarArchivo(new PPT("Presentacion2","Luis",carpeta2,"PW2",4,4,true));
	//
	Directorio* carpeta3=new Directorio("carpeta3","Luis",carpeta2);
	carpeta3->agregarArchivo(new CPP("Dev3","Luis",carpeta3,0,0));
	carpeta3->agregarArchivo(new JPG("Imagen3","Luis",carpeta3,true,"HD",4,4));
	carpeta3->agregarArchivo(new PPT("Presentacion3","Luis",carpeta3,"PW3",4,4,true));
	//

	while(main!=5){
		switch(main=menu()){
			case 1:{
					
				break;
			}
			case 2:{
				//Directorio* carpeta3=new Directorio("carpeta3","Luis",carpeta2);
				cout<<"Creacion Directorio"<<endl;
				string carpeta,autor;
				cout<<"Ingrese nombre Directorio(carpeta): ";
				cin>>carpeta;
				cout<<"Nombre Autor";
				cin>>autor;
				Directorio* c=new Directorio(carpeta,autor,windows->getDirectorio());
				cout<<"Creado Exitosamente"<<endl;
		
				break;
			}
			case 3:{

				
				break;
			}
			case 4:{
		
				
				break;
			}
			case 5:{
				cout<<"Saliendo"<<endl;
				break;
			}
		}//sitwch
	}//while
	return 0;
}