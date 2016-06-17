#include "robot.h"
#include<string>
#include<sstream>

using std::string;
using std::stringstream;

robot::robot(double precio,double amp,string material,string serie):precio(precio),amp(amp),material(material),serie(serie){

}

robot::~robot(){
}

double robot::getPrecio()const{
	return this->precio;
}

double robot::getAmp()const{
	return this->amp;
}

string robot::getMaterial()const{
	return this->material;
}

string robot::getSerie()const{
	return this->serie;
}

void robot::setPrecio(double np){
	this->precio=np;
}

void robot::setAmp(double namp){
	this->amp=namp;
}

void robot::setMaterial(string nmat){
	this->material=nmat;
}

void robot::setSerie(string nserie){
	this->serie=nserie;
}


string robot::toString()const{
	stringstream ss;
	ss<<"Serie - "<<serie<<", Material - "<<material<<", amperaje - "<<amp<<", Precio - "<<precio;
	return ss.str();
}
