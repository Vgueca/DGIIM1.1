/*	
	Programa que permite transformar el caracter introducido en may�scula o min�scula o viceversa, seg�n
	la forma en la que se haya introducido.
*/

#include <iostream>											//Librer�a de recursos de E/S

using namespace std;

int main(){													//Programa Principal

	//Declaraci�n de variables a utilizar
	const int DISTANCIA_MAYUS_MIN = 'a' - 'A';
	char letra_original, letra_convertida;
	bool es_mayuscula, es_minuscula;
	
	//Gu�a al usuario, y asigna el valor que este introduce a las variables declaradas
	cout << "Introduce la letra: " << endl;
	cin  >> letra_original;
	
	//Operaciones booleanas q
	es_mayuscula = (letra_original >= 'A') and (letra_original <= 'Z');
	es_minuscula = (letra_original >= 'a') and (letra_original <= 'z');
	
	//Condicionales que permiten asignarle un valor u otro a la variable, seg�n la letra introducida sea may�scula o min�scula
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
