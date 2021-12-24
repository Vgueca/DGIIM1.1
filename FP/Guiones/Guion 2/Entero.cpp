/* 
Programa que permite separar un número de 3 cifras, cifra por cifra
*/

#include <iostream>			//Librería de recursos de E/S
#include <cmath>			//Librería de recursos matemáticos

using namespace std;

int main (){				//Función prioncipal
	int entero, cifra1, cifra2, cifra3;		//Declaración de variables a utilizar
	
	cout<<"Introduce el entero\n";			//Muestra al usuario lo que debe introducir
	cin>>entero;							//Asignación del valor del usuario a dicha variable
	
	cifra1=entero/100;						//Cálculos
	cifra2=(entero% 100)/10;				//Cálculos
	cifra3=(entero%100)%10;					//Cálculos
	
	cout<<"\nEl numero es:  "<<cifra1<<"   "<<cifra2<<"   "<<cifra3<<"   ";		//Muestra al usuario la solución del programa
}
