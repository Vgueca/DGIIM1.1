/*
   Programa que analiza dos numeros enteros y determina si se pueden dividir de forma entera o no, y cual
   puede dividir de forma entera a cual
*/

#include <iostream>										//Librería de recursos de E/S

using namespace std;

int main (){											//Función principal

	//Declaración de variables a utilizar
	bool se_dividen;
	int dividendo, divisor, a, b;
	
	//Guía al usuario y asigna a las variables los datos que el usuario introduce
	cout << "Introduzca el valor del primer entero" << endl; 
	cin >> a;
	cout << "Introduzca el valor del segundo entero" << endl;
	cin >> b;
	
	se_dividen=(a%b==0 or b%a ==0);
	
	//Condicionales que analizan si son o no divisibles los numeros de forma entera
	if(a%b==0){
		dividendo=a;
		divisor=b;	
	}
	if(b%a==0){
		dividendo=b;
		divisor=a;
	}	
	
	if (se_dividen){
		cout << endl << divisor << " divide de forma entera a " << dividendo;
	}
	else {
		cout << "No se dividen de forma entera" << endl;
	}	
}

