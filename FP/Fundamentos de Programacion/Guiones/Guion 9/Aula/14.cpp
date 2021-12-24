/*
	Programa que calcula todos los numeros perfectos menores al introducido
*/

#include <iostream>

using namespace std;

bool NumeroPerfecto(int a);		

int main(){
	int numero_limite;
	
	cout << "Introduzca el numero limite para conocer los numeros perfectos menores a el: ";
	cin >> numero_limite;
	
	cout << "Los numeros perfectos menores que el numero dado son: " << endl;
	
	for(int i = 1; i <= numero_limite; i++){
		if(NumeroPerfecto){
			cout << i << endl;
		}
	}
}

bool NumeroPerfecto(int numero_limite){
	int suma = 0;
	
	for(int i=1; i < numero_limite; i++){			
		if(numero_limite % i == 0)
			suma += i;
	}
	
	return suma == numero_limite;
}
