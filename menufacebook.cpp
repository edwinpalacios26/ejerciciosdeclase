#include<iostream>
using namespace std;

int main(){
	
	int contra;
	
cout<<"ingrese su contrase�a:  "; cin>>contra;


switch(contra){
case 1: cout<<"Hubo un error al ingresar contrase�a intente de nuevo"; break;
case 2: cout<<"La sesi�n termin�, intente de nuevo"; break;
case 3: cout<<"No se detectan digitos intente de nuevo"; break;
case 4: cout<<"Su conexi�n no es la adecuada"; break;
case 5: cout<<"su cuenta no existe"; break;
}

 return 0;
}
