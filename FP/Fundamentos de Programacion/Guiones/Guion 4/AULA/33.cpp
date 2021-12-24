/*
   Programa que analiza dos numeros enteros y determina si se pueden dividir de forma entera o no, y cual
   puede dividir de forma entera a cual
*/

#include <iostream>						//Librería de recursos de E/S
#include <cmath>						//Librería de recursos matemáticos

using namespace std;


int main(){								//Función principal
	
	//Declaración de variables a utilizar
	int a, b;
	
	//Guía al usuario y asigna a las variables los datos que el usuario introduce
	cout << "Introduzca el valor del primer entero" << endl; 
	cin >> a;
	cout << "Introduzca el valor del segundo entero" << endl;
	cin >> b;
	
	//Condicionales que analizan si los numeros son divisibles entre sí de forma entera
	if (a%b == 0 or b%a == 0){
		if (a%b == 0){
		cout << endl << b << " divide de forma entera a " << a << endl;
		}
		if (b%a == 0){
		cout << endl << a << " divide de forma entera a " << b << endl;
		}
	}
	else{
		cout << "No se dividen de forma entera" << endl;
	}	
}
