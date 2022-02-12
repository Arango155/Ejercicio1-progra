#include <iostream>

using namespace std;

int main() 
{
   
    int x,r;
    float b,a;
    
    cout<< "Bienvenido a la calculadora para las operaciones de suma, resta, multiplicacion y division se le pide que ingrese los datos que se le piden a continuacion\n";

		cout<<"\nSeleccione el primer numero a operar: \n";
	cin>>a;
	cout<<"\nSeleccione el segundo numero a operar: \n";
	cin>>b;

	cout<<"Operaciones existentes \n";
	cout<<"\n1-Suma\n";
	cout<<"2-Resta\n";
	cout<<"3-Multiplicacion\n";
	cout<<"4-Division\n";

	cout<<"\nSeleccione el tipo de operacion a realizar : \n";
	cin>>x;

	switch (x){
	    case 1: 
	   
	    r=(a)+(b);
	    cout<<"\nSu resultado es "<<r;break;
	    
	    case 2:
	    	
	     r=(a)-(b);
	    cout<<"\nSu resultado es "<<r;break;
	    
	    
	    case 3:
	   
	   	     r=(a)*(b);
	    cout<<"\nSu resultado es "<<r;break;
	    
	    case 4:
	    
	    	     r=(a)/(b);
	    cout<<"\nSu resultado es "<<r;break;
	    
	 default:cout<<"\nSeleccion invalida";
	} 
	
    return 0;
}
