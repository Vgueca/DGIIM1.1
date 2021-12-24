/*
	Programa que permite separar las cifras de un número introducido
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int numero, numero_aux, cifra, contador_cifras = 1;
	
	cout << "Introduce el numero que quieres separar por cifras" << endl;
	cin >> numero;
	numero_aux = numero;
	while(numero_aux/10 > 0){						//Bucle para contar las cifras del número
		numero_aux = numero_aux / 10;
		contador_cifras ++;
	}
	for (int i=1; i <= contador_cifras ; i++){		//Bucle que permite elevar 10 del 1 al numero de cifras del número para extraer cada cifra
		cifra = numero / pow(10, contador_cifras-i);
		
		numero = numero - (cifra*pow(10, contador_cifras-i)); //Número quitando la cifra que se acaba de extraer
		
		cout << cifra << " ";
	}
}
