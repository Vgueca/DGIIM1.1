/*
	Programa que sube el sueldo de una persona en funcion de su edad y sus ingresos
*/

#include <iostream>								//Librería de los recursos de E/S

using namespace std;

struct Persona{									//Declaración de la estructura de Persona
	int  edad;
	double ingresos;
};

int main(){											//Programa principal
	Persona persona;								//Declaración de variables a utilizar
	bool condicion_edad;
	double ingresos_actuales;
	
	//Guía al usuario y asigna el valor que este introduce a cada una de las variables declaradas previamente
	cout << "Introduzca la edad en anos: " ;									
	cin >> persona.edad;
	cout << "\nIntroduzca los ingresos: " ;
	cin >> persona.ingresos;
	
	ingresos_actuales = persona.ingresos;							//Facilitar los cálculos con otra variable
	condicion_edad = (persona.edad >= 65) or (persona.edad<=35);	//Expresión booleana para simplificar el programa


	//Condicionales que permiten saber si se aplica o no la subida
	if(condicion_edad and persona.ingresos<300){									
		ingresos_actuales = ingresos_actuales*1.07;
		cout << endl << "La subida se ha aplicado.";
	}
	if(condicion_edad and persona.ingresos >= 300){
		ingresos_actuales = ingresos_actuales * 1.04;
		cout << endl << "La subida se ha aplicado.";
	}
	if(!condicion_edad){
		cout << endl << "No es aplicable la subida.";
	}
	
	persona.ingresos = ingresos_actuales;
	
	//Muestra al usuario los ingresos de persona
	cout << endl << "Los ingresos seran de: " << persona.ingresos;

}
