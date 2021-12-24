/*	
	Programa que analiza si la letra introducida por el usuario es mayúscula y , si lo es, la convierte en 
	minúscula
*/

#include <iostream>								//Librería de recursos de E/S

using namespace std;
	
int main(){										//Programa principal
	
	//Declaración de variables a utilizar
	char letra_convertida, letra_original;
	const int DISTANCIA_MAY_MIN = 'a' - 'A';
	bool es_mayuscula;
	
	//Guía al usuario y asigna a la variable declarada el valor que le introduzca
	cout << "Introduzca una letra: "<< endl;
	cin  >> letra_original;
	
	//Condicionales que permite saber si la letra introducida es mayúscula o no
	if ((letra_original >= 'A') and (letra_original <= 'Z')) {
		es_mayuscula = true;
	}
	else {
		es_mayuscula = false;
	}
	if (es_mayuscula){
		letra_convertida = letra_original + DISTANCIA_MAY_MIN;
	}	
	else{
		letra_convertida = letra_original;
	}
	
	//Muestra la letra original de entrada, y luego, la letra convertida.
	cout << endl<<  "La letra introducida:  " << letra_original << " convertida es : " << letra_convertida<< endl;
}
