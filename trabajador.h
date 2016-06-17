#pragma once
#include "robot.h"
#include<string>

using std::string;

class trabajador: public robot{
  public:
	trabajador(double,double,string,string);
	virtual ~trabajador();
	void funcion(double&,double&,int);
	string toString()const;
};
