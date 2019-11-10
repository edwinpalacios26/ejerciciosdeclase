#include<iostream>
using namespace std;
int main(){
	
	int menu, bebidas;
	
	cout<<"1. desayuno: huevos con frijol ";
	cout<<"2. almuerzo: Carne asada ";
	cout<<"3. cena: pupusas frjol con queso, revueltas";
	cout<<"ingrese numero de menu: "; cin>>menu;
	
	switch(menu){
		
		case 1: cout<<"1.desayuno: huevos con frijol "; 
		break;
		case 2: cout<<"2. almuerzo: Carne asada "; 
		break;
		case 3: cout<<"3. cena: pupusas frjol con queso, revueltas";
		break;
}
	 
	
	cout<<"\nIngrese el numero de bebida"; cin>>bebidas;
	
	switch(bebidas){
		
		case 1: cout<<"frozen de limón:"; break;
		case 2: cout<<"chocolate"; break;
		case 3: cout<<"Soda "; break;
		
		
	}
	
	return 0;
}
