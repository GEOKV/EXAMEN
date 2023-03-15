
#include "Propietario.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,dpi,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Dpi: ";
	cin>>dpi;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	// instanciar un objeto
	Propietario obj = Propietario(string nom,strinf ape,strind dir,string fn,string tel,string n,string dp);
	obj.mostrar();
	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
