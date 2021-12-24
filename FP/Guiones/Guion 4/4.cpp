/*
	Programa que permite saber si los tres n�meros introducidos por un usuario est�n ordenados en sentido
	ascendente, descendente, o si no est�n ordenados

*/

#include <iostream>		//Librer�a de recursos de E/S

using namespace std;

int main(){				//Funci�n principal
	
	int a,b,c;			//Declaraci�n de variables enteras a utilizar
	
	
	//Gu�a al usuario y asigna el valor que el usuario introduce a las variables previamente declaradas
	cout << "Introduce el primer entero" << endl;
	cin >> a;
	cout << "Introduce el segundo entero" << endl;
	cin >> b;
	cout << "Introduce el tercer entero" << endl;
	cin >> c;
	
	//Condiciones que permiten saber si los enteros est�n o no ordenados
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

