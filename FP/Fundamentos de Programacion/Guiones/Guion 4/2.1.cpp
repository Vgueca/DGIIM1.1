/*
	Programa que sube el sueldo de una persona en función de si está jubilado o no, y  de sus ingresos
*/

#include <iostream>										//Librería de los recursos de E/S

using namespace std;

struct Persona{											//Declaración de la estructura Persona
	int  edad;
	double ingresos;
};

int main(){													//Programa principal
	Persona persona;										//Declaración de variables a utilizar 
	char respuesta;
	
	//Guía al usuario y asigna el valor que este introduce a cada una de las variables declaradas previamente
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
