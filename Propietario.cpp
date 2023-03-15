#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	
	private : string nit;
	          double dpi;
	
	public :
		Propietario(){
		}
	 
		Propietario(string nom,string ape,string dir,string fn,int tel,string n, double dp) : Persona(nom,ape,dir,fn,tel){
		nit = n;
		dpi = dp;	
		}
		
		void monstrar (){
			cout<<"________________"<<endl;
			cout<<nit<<","<<dpi<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<endl;
		}
};
