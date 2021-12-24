/*
	Programa que permite traducir un código de 1 y 0 el cuál tiene un patrón concreto. El código siempre 
	termina con 5 ceros, y el valor que representa es la multiplicación de los primos que se encuentran en 
	el código (suma de las secuencias de 1 seguidos del código).
	Por ejemplo:
		Si se introduce 001110101111100000
		Los primos del código serían, el 3, el 1 y el 5, que multiplicados darían 15. Luego el código
		representa al numero 15.
	
*/

#include <iostream>				//Librería de recursos de E/S

using namespace std;
	
int main(){						//Función principal
	
	//Declaración de variables a utilizar de tipo entero
	int codigo, primo=0, contador1 = 0, contador0 = 0, enterototal = 1;	
	
	//Declaración de variables a utilizar de tipo booleano
	bool hay5_ceros;	
	hay5_ceros = false;
	
	//Bucle que termina cuando el contador de 0 alzanca el valor 5
	while(!hay5_ceros){
		cout << "Introduce un 1 o un 0" << endl;
		cin >> codigo;
	
		//Permite contar los 1 y le asigna su valor a la variable primo 
		if (codigo == 1){
			contador0 = 0;
			contador1 = contador1 + 1;
			primo= contador1;
		}
		//Cuenta el numero de 0 (que debe ser menor a 5 o se termina e bucle) y calcula el valor del entero total
		else{
			contador0 = contador0 + 1;
			if (contador1 != 0)
				enterototal = enterototal * primo;
			
			contador1 = 0;
		}
		//Finaliza el bucle
		if(contador0 == 5 )
			hay5_ceros = true;				
	}
	
	//Muestra el entero total una vez introducido los 5 ceros finales.
	cout << endl << "El numero entero es " <<  enterototal << endl;
}
