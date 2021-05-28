#include "PPT.h"
string PPT::toString(){
	string totals=to_string(this->numSlides);
	string totalp=to_string(this->numPlantilla);
	string anim;
	if(this->tieneAnimacion==true){
		anim="Si hay animacion";
	}else{
		anim=" No hay animacion";
	}
	
	return "Titulo: "+this->titulo+" Num Slides: "+totals+" Num Plantilla: "+totalp+" Animacion: "+anim;
}
PPT::PPT(string n,string a,FileSystemNode* m,string tit,int sli,int pla,bool an):Archivo(n,a,m){
	this->titulo=tit;
	this->numSlides=sli;
	this->numPlantilla=pla;
	this->tieneAnimacion=an;
	
}