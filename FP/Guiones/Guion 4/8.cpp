/*
	Programa que indica si un a�o es bisiesto o no lo es 

*/

#include <iostream>		//Librer�a de recursos de E/S

using namespace std;

int main(){				//Funci�n principal

	int anio;			//Declaraci�n de variable entera a utilizar
	
	//Gu�a al usuario y asigna a la variable entera el valor que el usuario introduzca
	cout << "Introduzca el anio" << endl;
	cin >> anio;
	
	//Condicionales que permiten saber si el a�o introducido por el usuario es bisiesto o no lo es
	if (anio% 4 == 0 and (anio % 100 != 0 or anio % 400 == 0  )){
		cout << "El anio es bisiesto" << endl;
		
	}
	else{
		cout << "El anio no es bisiesto" << endl;
	}
}
