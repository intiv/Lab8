#include "robot.h"
#include "abastecedor.h"
#include<string>
#include<sstream>

using namespace std;

abastecedor::abastecedor(double precio,double amp,string material,string serie):robot(precio,amp,material,serie){

}

abastecedor::~abastecedor(){

}

void abastecedor::funcion(double& money,double& amps,int size){
	money-=100*size;
	amps-=getAmp();
}

string abastecedor::toString()const{
	stringstream ss;
	ss<<"Abastecedor: "<<robot::toString();
	return ss.str(); 
}
