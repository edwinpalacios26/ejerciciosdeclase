#include <iostream>
using namespace std;
int main() 
{
    int numeros[5], sum = 0;
    cout << "Digite 5 numeros: ";
    
    
    for (int i = 0; i < 5; ++i) 
    {
        cin >> numeros[i];
        sum += numeros[i];
    }
    
    cout << "Sum = " << sum << endl;  
    
    return 0;
}