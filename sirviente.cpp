#include "robot.h"
#include "sirviente.h"
#include<string>
#include<sstream>

using std::string;
using std::stringstream;

sirviente::sirviente(double precio, double amp, string material,string serie,int oxido):robot(precio,amp,material,serie),oxido(oxido){

}

sirviente::~sirviente(){
}

int sirviente::getOxido()const{
	return this->oxido;
}

void sirviente::setOxido(){
	oxido+=5;
}

void sirviente::funcion(double& money,double& amps,int size){
	amps-=getAmp();
	setOxido();
}

void sirviente::setOxido(int nox){
	this->oxido=nox;
}

string sirviente::toString()const{
	stringstream ss;
	ss<<"Sirviente: "<<robot::toString()<<", Oxido - "<<oxido;
	return ss.str();
}
