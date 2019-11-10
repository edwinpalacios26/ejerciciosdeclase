#include<iostream>
using namespace std;
int main(){
	
    int peliculas, comida, bebida;
    
    cout<<"\nPeliculas en estreno";
    cout<<"\n1.Joker";
    cout<<"\n2. Avengers End Game";
    cout<<"\n3.Avatar";
    cout<<"\n4. The Shinning";
    
    cout<<"\nSeleccione pelicula que desea ver"; cin>>peliculas;
    
    switch(peliculas){
    	case 1: cout<<"Has seleccionado Joker"; break;
    	case 2: cout<<"Has seleccionado Avengers End Game"; break;
    	case 3: cout<<"Has seleccionado Avatar"; break;
    	case 4: cout<<"Has seleecionado The Shinning"; break;
	}
    
    
    cout<<"\n1.Palomitas grandes";
    cout<<"\n2.Nachos ";
    cout<<"\n3.Pizza ";
    cout<<"\n4. Hot dog";
    cout<<"\nSeleccione Comida: "; cin>>comida;
    
    switch(comida){
    	case 1: "Has selecionado palomitas"; break;
    	case 2: "Has selecionado nachos"; break;
    	case 3: "Has selecionado pizza"; break;
    	case 4: "Has selecionado hot dog"; break;
    	   	
	}
    
    cout<<"\n1.Soda mediana";
    cout<<"\n2S.oda grande";
    cout<<"\n3.café";
    cout<<"\nSeleccione bebida"; cin>>bebida;
    
    
    switch(bebida){
    	case 1: cout<<"Selecciono soda mediana"; break;
    	case 2: cout<<"selecciono soda grande"; break;
    	case 3: cout<<"Selecciono café"; break;
    	
	}
    
    return 0;
	}
