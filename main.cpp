#include "robot.h"
#include "sirviente.h"
#include "abastecedor.h"
#include "trabajador.h"
#include<string>
#include<iostream>
#include<vector>
#include<typeinfo>

using namespace std;

int menu();
void listar(vector<robot*>&);

int main(int argc,char* argv[]){
	vector<robot*> robots;
	vector<robot*> myrobots;
	bool continuar=true;
	while(continuar){
		int op=menu();
		if(op==1){
			int tipo;
			cout<<"1.- Sirviente\n2.- Trabajador\n3.- Abastecedor"<<endl;
			cin>>tipo;
			double precio,amp;
			string serie,material;
			cout<<"Ingrese serie: ";	
			cin>>serie;
			cout<<"Material: ";
			cin>>material;
			cout<<"Precio: ";
			cin>>precio;
			cout<<"Amperaje: ";
			cin>>amp;
			if(tipo==1){
				robots.push_back(new sirviente(precio,amp,material,serie,0));
			}else if(tipo==2){
				robots.push_back(new trabajador(precio,amp,material,serie));
			}else if(tipo==3){
				robots.push_back(new abastecedor(precio,amp,material,serie));
			}
			cout<<robots.at(robots.size()-1)->toString()<<" Fue agregado!\n"<<endl;
		}else if(op==2){	
			listar(robots);	
			int choose;
			cout<<"Ingrese indice a modificar: ";
			cin>>choose;
			cout<<"\n"<<"Se modificara "<<robots.at(choose)->toString()<<endl;
			double np,na;
			cout<<"Ingrese nuevo amperaje: ";
			cin>>na;
			cout<<"Ingrese nuevo precio: ";
			cin>>np;
			robots.at(choose)->setPrecio(np);
			robots.at(choose)->setAmp(na);
		        cout<<"\nModificado: "<<robots.at(choose)->toString()<<endl;
		}else if(op==3){
			listar(robots);	
			int choose;
			cout<<"Ingrese indice: ";
			cin>>choose;
			robots.erase(robots.begin()+choose);
			cout<<"BORRADO"<<endl;		
		}else if(op==4){
			listar(robots);
			cout<<"Ingrese indice de robot a comprar: ";
			int buy;
			cin>>buy;
			
		}else if(op==5){
		}else if(op==6){
		}else if(op==7){
			continuar=false;
		}
	}
	return 0;
}


int menu(){
	cout<<"CIUDAD ROBOT\n1.- Agregar Robot\n2.- Modificar Robot\n3.- Eliminar Robot\n4.- Comprar Robots\n5.- Explotar Esclavos Roboticos\n6.- Destuir Robot\n7.- Salir"<<endl;
	int selec;
	while(true){
		cin>>selec;
		if(selec>0&&selec<8){
			return selec;
		}
	}

}

void listar(vector<robot*>& robots){
	for(int i=0;i<robots.size();i++){
		cout<<i<<" - "<<robots[i]->toString()<<endl;
	}
}
