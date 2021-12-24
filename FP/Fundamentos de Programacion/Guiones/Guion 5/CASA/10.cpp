/*
	Programa que permite hallar todos los enteros divisores de un numero  positivo introducido por el propio
	usuario, y los muestra por pantalla
*/

#include <iostream>

using namespace std;

int main (){
	int a, i;
	cout << "Introduce un numero entero positivo" << endl;
		cin >> a;
	
	do{
		for (i = 1; i <= a; i++){
			if ( a%i == 0){
   				cout <<  i <<" ";
  			}
 		}
 		break;	 
	}while ( a>0 );
	
}
