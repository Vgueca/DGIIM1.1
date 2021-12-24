/*
	Programa que indica si un año es bisiesto o no lo es 

*/

#include <iostream>		//Librería de recursos de E/S

using namespace std;

int main(){				//Función principal

	int anio;			//Declaración de variable entera a utilizar
	
	//Guía al usuario y asigna a la variable entera el valor que el usuario introduzca
	cout << "Introduzca el anio" << endl;
	cin >> anio;
	
	//Condicionales que permiten saber si el año introducido por el usuario es bisiesto o no lo es
	if (anio% 4 == 0 and (anio % 100 != 0 or anio % 400 == 0  )){
		cout << "El anio es bisiesto" << endl;
		
	}
	else{
		cout << "El anio no es bisiesto" << endl;
	}
}
