#include "robot.h"
#include "trabajador.h"
#include<string>
#include<sstream>
#include<iostream>

using namespace std;

trabajador::trabajador(double precio,double amp,string material,string serie):robot(precio,amp,material,serie){

}

trabajador::~trabajador(){

}

void trabajador::funcion(double& money, double& amps,int size){
	double namp=getAmp();
	namp*=1.1;
	if(namp>amps){
		cerr<<"Robot "<<serie<<": No hay suficientes amperios!"<<endl;
	}else{
		money+=200;
		amps-=namp;
		setAmp(namp);
	}
}

string trabajador::toString()const{
	stringstream ss;
	ss<<"Trabajador: "<<robot::toString();
	return ss.str();
}
