#include "JPG.h"
string JPG::toString(){
	string anch=to_string(this->ancho);
	string lar=to_string(this->largo);
	string fla;
	if(this->conFlash==true){
		fla="SI HAY FLASH";
	}else{
		fla="NO HAY";
	}
	return "Flash "+fla+" Resolucion: "+this->resolucion+" Ancho: "+anch+"Largo: "+lar;
}
JPG::JPG(string n,string a, FileSystemNode* m,bool flash,string res,double l,double aa):Archivo(n,a,m){
	this->conFlash=flash;
	this->resolucion=res;
	this->largo=l;
	this->ancho=aa;
	
}