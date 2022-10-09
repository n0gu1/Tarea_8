
/*

#include "Cliente.cpp"
#include <iostream>

using namespace std;

main(){
	
	string nit, nombres,apellidos,direcccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	
	cout<<"Ingresar telefono: ";
	cin>>telefono;
	
	Cliente obj = Cliente(nombres apellidos, direccionm,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	
	Cliente obj2 = Cliente(nombres apellidos, direccionm,telefono,nit);
	obj2.mostrar();
	
	system("pause");
}

*/


#include "Cliente.cpp"
#include <iostream>

using namespace std;

main(){
	
	string nit, nombres,apellidos,direcccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	
	cout<<"Ingresar telefono: ";
	cin>>telefono;
	
	/*
	Cliente obj = Cliente(nombres apellidos, direccionm,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.mostrar();
	obj.setNit(nit);
	*/
	
	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
	
	system("pause");
}
