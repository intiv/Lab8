#include<string>
using std::string;

class robot{
	double precio, amp;
	string material, serie;
  public:
	robot(double,double,string,string);
	virtual ~robot();
	double getPrecio()const;
  	double getAmp()const;
	string getMaterial()const;
	string getSerie()const;
	void setPrecio(double);
	void setAmp(double);
	void setMaterial(string);
	void setSerie(string);
	void funcion(double&,double&,int)=0;
	virtual string toString()const;
}
