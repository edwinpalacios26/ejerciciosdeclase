#include<iostream>
using namespace std;

int main(){
	float n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
    cout<<"ingrese el primer numero: "; cin>>n1;
    cout<<"ingrese el segundo numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1*n2;
	division = n1 / n2;
	
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la multiplicacion: "<<multiplicacion<<endl;
	cout<<"la division: "<<division<<endl;



return 0;
}
