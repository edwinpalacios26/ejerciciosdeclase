#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,factorial=1;
	
	cout<<"Digite el numero "; cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	
	cout<<"El factorial del numero es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}
