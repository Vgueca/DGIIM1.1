/*
	Programa que permite saber si los tres números introducidos por un usuario están ordenados en sentido
	ascendente, descendente, o si no están ordenados

*/

#include <iostream>		//Librería de recursos de E/S

using namespace std;

int main(){				//Función principal
	
	int a,b,c;			//Declaración de variables enteras a utilizar
	
	
	//Guía al usuario y asigna el valor que el usuario introduce a las variables previamente declaradas
	cout << "Introduce el primer entero" << endl;
	cin >> a;
	cout << "Introduce el segundo entero" << endl;
	cin >> b;
	cout << "Introduce el tercer entero" << endl;
	cin >> c;
	
	//Condiciones que permiten saber si los enteros están o no ordenados
	if( a>b and b>c){
		cout << "Los numeros enteros estan ordenados en sentido descendente" << endl;
	}
	if( a<b and b<c){
		cout << "Los numeros enteros estan ordenados en sentido ascendente" << endl;
	}
	if ((a<b and b>c) or (a>b and b<c)){
		cout << "Los numeros enteros no estan ordenados" << endl;
	}
}

