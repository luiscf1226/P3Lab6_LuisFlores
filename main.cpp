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
	Directorio* carpeta2=new Directorio("carpeta2","Luis",carpeta1);
	Directorio* carpeta3=new Directorio("carpeta3","Luis",carpeta2);
	//
	windows->getDirectorio()->agregarDirectorio(carpeta1);
	//

	//
	
	
	//
	carpeta1->agregarArchivo(new CPP("Dev1","Luis",carpeta1,0,0));
	carpeta1->agregarArchivo(new JPG("Imagen1","Luis",carpeta1,true,"HD",4,4));
	carpeta1->agregarArchivo(new PPT("Presentacion1","Luis",carpeta1,"PW2",4,4,true));
	//
	
	carpeta2->agregarArchivo(new CPP("Dev2","Luis",carpeta2,0,0));
	carpeta2->agregarArchivo(new JPG("Imagen2","Luis",carpeta2,true,"HD",4,4));
	carpeta2->agregarArchivo(new PPT("Presentacion2","Luis",carpeta2,"PW2",4,4,true));
	//
	
	carpeta3->agregarArchivo(new CPP("Dev3","Luis",carpeta3,0,0));
	carpeta3->agregarArchivo(new JPG("Imagen3","Luis",carpeta3,true,"HD",4,4));
	carpeta3->agregarArchivo(new PPT("Presentacion3","Luis",carpeta3,"PW3",4,4,true));
	//
	carpeta1->agregarDirectorio(carpeta2);
	carpeta2->agregarDirectorio(carpeta3);
	//carpeta3->agregarDirectorio(carpeta2);

	while(main!=5){
		switch(main=menu()){
			case 1:{
				windows->getDirectorio()->imprimirRecursivo(1);
				break;
			}
			case 2:{
				//Directorio* carpeta3=new Directorio("carpeta3","Luis",carpeta2);
				cout<<"Creacion Directorio"<<endl;
				string carpeta,autor;
				cout<<"Ingrese nombre Directorio(carpeta): ";
				cin>>carpeta;
				cout<<"Nombre Autor: ";
				cin>>autor;
				//Directorio* c=new Directorio(carpeta,autor,windows->getDirectorio());
				windows->getDirectorio()->agregarDirectorio(new Directorio(carpeta,autor,windows->getDirectorio()));
				cout<<"Creado Exitosamente"<<endl;
		
				break;
			}
			case 3:{
				int opc=0;
				while(opc!=4){
					cout<<"1. Crear CPP "<<endl<<"2. Crear JPG "<<endl<<"3. Crear PPT "<<endl<<"4. Regresar al Main "<<endl;
					cin>>opc;
					if(opc==1){
						//carpeta2->agregarArchivo(new CPP("Dev2","Luis",carpeta2,0,0));
						string name,autor;
						int lineas,errores;
						cout<<"Ingrese nombre archivo: ";
						cin>>name;
						cout<<"Ingrese autor: ";
						cin>>autor;
						cout<<"Ingrese lineas: ";
						cin>>lineas;
						cout<<"Ingrese errores: ";
						cin>>errores;
						windows->getDirectorio()->agregarArchivo(new CPP(name,autor,windows->getDirectorio(),lineas,errores));
						cout<<"Creado Exitosamente: "<<endl;
					}
					if(opc==2){
						//	carpeta3->agregarArchivo(new JPG("Imagen3","Luis",carpeta3,true,"HD",4,4));
						string name,autor;
						bool flash;
						double aa,l;
						string res;
						cout<<"Ingrese nombre archivo: ";
						cin>>name;
						cout<<"Ingrese autor: ";
						cin>>autor;
						int n;
						cout<<"Desea Flash: (si=0,no=1)";
						cin>>n;
						if(n==0){
							flash=true;
						}else{
							flash=false;
						}
						cout<<"resolucion: ";
						cin>>res;
						cout<<"ancho: ";
						cin>>aa;
						cout<<"largo: ";
						cin>>l;
						windows->getDirectorio()->agregarArchivo(new JPG(name,autor,windows->getDirectorio(),flash,res,l,aa));
					}
					if(opc==3){
					
						string name,autor;
						string titulo;
						int numSlides;
						int numPlantilla;
						bool tiene;
						cout<<"Ingrese nombre archivo: ";
						cin>>name;
						cout<<"Ingrese autor: ";
						cin>>autor;
						cout<<"Titulo: ";
						cin>>titulo;
						cout<<"Slides: ";
						cin>>numSlides;
						cout<<"Plantillas: ";
						cin>>numPlantilla;
						int n;
						cout<<"Desea Animacion: (si=0,no=1)";
						cin>>n;
						if(n==0){
							tiene=true;
						}else{
							tiene=false;
						}
							//carpeta3->agregarArchivo(new PPT("Presentacion3","Luis",carpeta3,"PW3",4,4,true));
						windows->getDirectorio()->agregarArchivo(new PPT(name,autor,windows->getDirectorio(),titulo,numSlides,numPlantilla,tiene));
						cout<<"Creado "<<endl;						
					}
				}
				break;
			}
			
			
			case 4:{
				string word;
				cout<<"Palabra para buscar: ";
				cin>>word;
				windows->getDirectorio()->buscarPorNombre(word);
		
				
				break;
			}
			case 5:{
				cout<<"Saliendo"<<endl;
				break;
			}
		}//sitwch
	}//while
	delete windows;
	delete carpeta1;
	delete carpeta2;
	delete carpeta3;
	return 0;
}