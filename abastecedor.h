#pragma once
#include "robot.h"
#include<string>

using std::string;

class abastecedor: public robot{
  public:
	abastecedor(double,double,string,string);
	virtual ~abastecedor();
	void funcion(double&,double&,int);
	string toString()const;
};
