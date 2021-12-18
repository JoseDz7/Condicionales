/* La sentencia if (estructuras condicionales)

if(condicion){
   instrucciones1;
}

else{
    instrucciones2
}
*/

#include<iostream>

using namespace std;

int main(){
	int numero, dato = 5;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero == dato){ //Operador de igualdad (==) Operador de diferencia (!=) Operador mayor que (<) igual que (>=) menor que (<) igual que(<=)
		cout<<"\nFelicidades el numero es el correcto"<<endl;
	}
	else{
		cout<<"\nEl numero que ingresaste es incorrecto"<<endl;
	}
	
	
	
	
	return 0;
}
