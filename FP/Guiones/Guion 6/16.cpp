/*
	Programa para calcular si un número es narcisista o no. Para que lo sea, cada una de sus cifras elevada a
	el número total de cifras que contiene debe ser el propio número.
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int numero, cifras=1, digito, numero_2, numero_3, acumulacion=0, primer_digito;
	cout << "Introduzca el numero entero " << endl;
	cin >> numero;
	
	numero_2=numero;
	numero_3=numero;
	
	while ((numero_2/10)>0){
		numero_2= numero_2/10;	
		cifras ++;
	}	
	while ((numero/10)>0){
		digito= numero % 10;
		numero = numero/10;
		acumulacion = acumulacion + pow(digito, cifras);
	}
	primer_digito= numero_3 / pow (10, cifras-1);
	acumulacion = acumulacion + pow (primer_digito, cifras);
	
	if (acumulacion == numero_3)
		cout << endl << "El numero introducido es narcicista" << endl;
	else
		cout << endl << "El numero introducido no es narcicista" << endl;
}
