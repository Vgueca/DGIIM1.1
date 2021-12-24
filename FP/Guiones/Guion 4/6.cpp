/*	
	Programa que permite transformar el caracter introducido en mayúscula o minúscula o viceversa, según
	la forma en la que se haya introducido.
*/

#include <iostream>											//Librería de recursos de E/S

using namespace std;

int main(){													//Programa Principal

	//Declaración de variables a utilizar
	const int DISTANCIA_MAYUS_MIN = 'a' - 'A';
	char letra_original, letra_convertida;
	bool es_mayuscula, es_minuscula;
	
	//Guía al usuario, y asigna el valor que este introduce a las variables declaradas
	cout << "Introduce la letra: " << endl;
	cin  >> letra_original;
	
	//Operaciones booleanas q
	es_mayuscula = (letra_original >= 'A') and (letra_original <= 'Z');
	es_minuscula = (letra_original >= 'a') and (letra_original <= 'z');
	
	//Condicionales que permiten asignarle un valor u otro a la variable, según la letra introducida sea mayúscula o minúscula
	if (es_mayuscula){
		letra_convertida = letra_original + DISTANCIA_MAYUS_MIN;
	}
	else if (es_minuscula){
		letra_convertida = letra_original - DISTANCIA_MAYUS_MIN;
	}
	else{
		letra_convertida=letra_original;
	}
	/*if (letra_original != es_mayuscula and letra_original !=es_minuscula){
		letra_convertida = letra_original;
	}
	*/
	//Muestra al usuario la letra convertida.
	cout << "La letra introducida: " << letra_original << " convertida, es: " << letra_convertida << endl;
}
