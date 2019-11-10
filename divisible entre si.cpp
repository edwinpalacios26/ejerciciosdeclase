#include<iostream>
using namespace std;
int main(){
	float num1, num2, resultado = 0;
	
	cout<<"ingrese el numero: "; cin>>num1;
	cout<<"ingrese otro numero: "; cin>>num2;
	
	
	
	resultado = (num1 / num2);
	
	
	if(resultado == 0){
		cout<<"el numero es divisible entre si: ";
	}
    else{
    	cout<<"el numero no es divisible entre si: ";
	}
	
	
	return 0;
}
