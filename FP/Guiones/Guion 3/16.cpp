/*	
	Programa que permite almacenar un valor num�rico en un dato de tipo caracter y asign�rselo a un dato 
	de tipo entero, de tal manera que cuando lo muestre en pantalla no salga el valor de la tabla ASCII
	con el que se guarda una cifra en un dato de tipo caracter, sino que se muestre la propia cifra

*/

#include <iostream>				//Librer�a de recursos de E/S

using namespace std;

int main (){					//Funci�n principal

	int entero;					//Declaraci�n de variable de tipo entero
	char car;					//Declaraci�n de variable de tipo car�cter
	
	//Muestra al usuario lo que tiene que introducir y lo almacena en la variable 	declarada
	cout<<"Introduzca un numero del 0-9"<<endl;				
	cin>>car;
	
	//C�lculos
	entero=car-'0';
	
	//Muestra el resultado del programa por pantalla
	cout<<"El numero que se ha introducido es: "<<endl<<entero;
}
