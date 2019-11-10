#include<iostream>
using namespace std;

int main(){
	
	int contra;
	
cout<<"ingrese su contraseña:  "; cin>>contra;


switch(contra){
case 1: cout<<"Hubo un error al ingresar contraseña intente de nuevo"; break;
case 2: cout<<"La sesión terminó, intente de nuevo"; break;
case 3: cout<<"No se detectan digitos intente de nuevo"; break;
case 4: cout<<"Su conexión no es la adecuada"; break;
case 5: cout<<"su cuenta no existe"; break;
}

 return 0;
}
