/*	
	Programa que almacena dos numeros racionales y trabaja con ellos mostrando diferentes operaciones con ellos
*/

#include <iostream>						//Librería de recursos de E/S
#include <algorithm>					//Librería para acceder al MCD

using namespace std;

int main(){									//Función principal

	// Declaracion de variables a utilizar
	int numerador1, denominador1, numerador2, denominador2, numerador_final, denominador_final, mcd;
	int eleccion_menu;
	double cociente;
	
	cout << "Introduce el numerador del primer numero racional: " << endl;
	cin >> numerador1;
	cout << "Introduce el denominador del primer numero racional: " << endl;
	cin >> denominador1;
	cout << "Introduce el numerador del segundo numero racional: " << endl;
	cin >> numerador2;
	cout << "Introduce el denominador del segundo numero racional: " << endl;
	cin >> denominador2;
	
	cout << "Que quieres realicar con las fracciones?"<< endl;
	cout << "Sumarlas (1)" << endl << "Multiplicarlas (2)" << endl << "Reducirlas (3)" << endl << "Calcular el cociente (4)"
	cin >> eleccion_menu;
	
	// Utilizamos un switch y un while para acceder al caso que el usuario desea
 
 	while (eleccion_menu > 4 || eleccion_menu < 1);	
	switch (eleccion_menu){
		
		case 1: 	
			//Suma de las fracciones
			denominador_final = denominador1 * denominador2;
			numerador_final = (denominador2 * numerador1) + (denominador1 * numerador2);
			
			// Máximo como un divisor
			mcd = __gcd (numerador_final, denominador_final);
			
			// Asignamos los valores reducidos a las variables finales
			numerador_final = numerador_final / mcd;
			denominador_final = denominador_final / mcd;
			
			// Muestra el resultado reducido de la suma
			cout << "La suma es " << numerador_final << "/" << denominador_final;
			
			break;
			
		case 2:			
			// Multiplicamos los números racionales a partir de sus fracciones
			numerador_final = numerador1 * numerador2;
			denominador_final = denominador2 * denominador2;
			
			// Máximo como un divisor
			mcd = __gcd (numerador_final, denominador_final);
			
			// Asignamos los valores reducidos a la variables finales
			numerador_final = numerador_final / mcd;
			denominador_final = denominador_final / mcd;
			
			// Muestra el producto final al usuario
			cout << "La fraccion producto es " << numerador_final << "/" << denominador_final;
			
			break;
			
		case 3:
			// Calculamos el MCD para hallar la fracción irreducible
			mcd = __gcd (numerador1, denominador1);
			// Asignamos los valores reducidos a las variables finales
			numerador_final = numerador1 / mcd;
			denominador_final = denominador1 / mcd;
			//Muestra al usuario la fracción irreducible
			cout << "La fraccion reducida es " << numerador_final << "/" << denominador_final;
			break;
		
		case 4:
			// Para mostrar el número racional dividimos numerador entre denominador y declaramos uno de ellos como un dato de tipo double
			cociente = (double)numerador1 / denominador1;
			
			//Muestra el número racional al usuario
			cout << "El cociente del numerador y el denominador es " << cociente;
			break;		
	}
}
