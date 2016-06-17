#pragma once
#include "robot.h"
#include<string>

using std::string;

class sirviente:public robot{
	int oxido;
  public:
	sirviente(double,double,string,string,int);
	virtual ~sirviente();
	int getOxido()const;
	void funcion(double&,double&,int);
	void setOxido(int);
	void setOxido();
	string toString()const;
};
