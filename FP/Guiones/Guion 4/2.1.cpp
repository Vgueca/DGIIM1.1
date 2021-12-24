/*
	Programa que sube el sueldo de una persona en funci�n de si est� jubilado o no, y  de sus ingresos
*/

#include <iostream>										//Librer�a de los recursos de E/S

using namespace std;

struct Persona{											//Declaraci�n de la estructura Persona
	int  edad;
	double ingresos;
};

int main(){													//Programa principal
	Persona persona;										//Declaraci�n de variables a utilizar 
	char respuesta;
	
	//Gu�a al usuario y asigna el valor que este introduce a cada una de las variables declaradas previamente
	cout << endl << "Introduzca la edad en anios : " <<endl;
	cin >> persona.edad;																
	cout << endl << "Introduzca los ingresos: " ;
	cin >> persona.ingresos;
	cout << endl << "Esta jubilado?(Y o N): " ;
	cin >> respuesta;
	
	//Condicionales que permiten saber si se aplica o no la subida
	if(respuesta=='Y' and persona.ingresos < 300){											
		persona.ingresos = persona.ingresos * 1.05;
		cout << endl << "La subida se ha aplicado.";
	}
	else{
		cout << endl << "No es aplicable la subida.";
	}
	//Muestra al usuario los ingresos de persona
	cout << endl << "Los ingresos seran de: " << persona.ingresos;
}
