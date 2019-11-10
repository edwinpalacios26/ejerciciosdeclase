#include<iostream>

using namespace std;



int main(){
	
	int salario;
	float descuentosley= 0;
	float afp = 0.10, renta = 0.40, seguro = 0.25, prestamo = 25;
	float salariototal;
	cout<<"ingrese salario:  "; cin>>salario;
	
	descuentosley = salario - afp - renta - seguro - prestamo;
	cin>>salariototal;
	
	cout<<"su salario totral es: "<<salariototal;
		
	return 0;
	
	
}
