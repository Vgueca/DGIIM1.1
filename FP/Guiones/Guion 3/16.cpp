/*	
	Programa que permite almacenar un valor numérico en un dato de tipo caracter y asignárselo a un dato 
	de tipo entero, de tal manera que cuando lo muestre en pantalla no salga el valor de la tabla ASCII
	con el que se guarda una cifra en un dato de tipo caracter, sino que se muestre la propia cifra

*/

#include <iostream>				//Librería de recursos de E/S

using namespace std;

int main (){					//Función principal

	int entero;					//Declaración de variable de tipo entero
	char car;					//Declaración de variable de tipo carácter
	
	//Muestra al usuario lo que tiene que introducir y lo almacena en la variable 	declarada
	cout<<"Introduzca un numero del 0-9"<<endl;				
	cin>>car;
	
	//Cálculos
	entero=car-'0';
	
	//Muestra el resultado del programa por pantalla
	cout<<"El numero que se ha introducido es: "<<endl<<entero;
}
