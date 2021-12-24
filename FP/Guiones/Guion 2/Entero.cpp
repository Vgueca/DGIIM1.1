/* 
Programa que permite separar un n�mero de 3 cifras, cifra por cifra
*/

#include <iostream>			//Librer�a de recursos de E/S
#include <cmath>			//Librer�a de recursos matem�ticos

using namespace std;

int main (){				//Funci�n prioncipal
	int entero, cifra1, cifra2, cifra3;		//Declaraci�n de variables a utilizar
	
	cout<<"Introduce el entero\n";			//Muestra al usuario lo que debe introducir
	cin>>entero;							//Asignaci�n del valor del usuario a dicha variable
	
	cifra1=entero/100;						//C�lculos
	cifra2=(entero% 100)/10;				//C�lculos
	cifra3=(entero%100)%10;					//C�lculos
	
	cout<<"\nEl numero es:  "<<cifra1<<"   "<<cifra2<<"   "<<cifra3<<"   ";		//Muestra al usuario la soluci�n del programa
}
