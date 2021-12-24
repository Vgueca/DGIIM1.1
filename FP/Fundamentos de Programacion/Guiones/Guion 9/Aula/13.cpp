/*
	Programa que devuelve un entero invirtiendo el orden de sus dígitos
*/

#include <iostream>
#include <cmath>

using namespace std;

int Invertido(int a);			//Función que invierte los dígitos de un número
	 									//Requiere: un número entero
	 									//Devuelve: un número entero (el número invertido)

int main(){
	int numero;
	
	cout << "Introduzca un numero entero: ";
	cin >> numero;
	
	numero = Invertido(numero);
	
	cout << "El numero invertido es: " << numero << endl;
}

int Invertido(int a){
	int cifra;
	int numero = 0;
	int numero_aux = a;
	int potencia10, contador = 0;
	
	//Bucle que cuenta las cifras del número
	do{										
		numero_aux /= 10;
		contador++;
	}while(numero_aux >= 1);
	
	//Eleva la potencia 10 atendiendo al número de cifras del número dado
	potencia10 = pow(10, contador-1);	
	
	//Bucle que invierte el número
	do{											
		cifra = a%10;
		a /= 10;
		numero += cifra*potencia10;
		potencia10 /= 10;
	}while(a >= 1);
	
	return numero;
}
