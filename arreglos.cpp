#include<iostream>
using namespace std;

int main{

	int cantNumeros = 5;
	int numeros[cantNumeros];
	
	for(int i = 0; i < cantNumeros; i++){
		cout<<"Ingrese dato " <<(i + 1) <<endl;
		cin>>numeros[i];
		
	}
	cout<<"los numeros ingresados son " <<endl;
	
	for(int i =0; i < cantNumeros; i++){
		cout<<numeros[i]<<endl;
	}

return 0;


}
