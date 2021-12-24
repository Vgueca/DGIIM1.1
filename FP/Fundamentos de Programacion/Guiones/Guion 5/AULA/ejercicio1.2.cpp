/*
	Programa que mediante un encauzamiento obtiene los valores de un programa y los  aplica a su código.
	Obtiene los primos del programa "ejercicio1" y los multiplica para mostrar el entero que representa
	el código.

*/
#include <iostream>

using namespace std;

int main(){
	int enterototal=1, codigo=1;
	
	while ( codigo != 0){
		enterototal = enterototal* codigo;
		cin >> codigo;
	}
	cout << endl << " El numero introducido mediante el codigo es : " << enterototal << endl;
}
