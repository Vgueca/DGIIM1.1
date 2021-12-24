/*
	Programa que analiza cuantos numeros se han introducido y cuál de ellos es el menor
*/

#include <iostream>

using namespace std;

int main (){

	int dato=1, i=0, menor;
	
	while( dato != 0 ){
		cout << "Introduce un numero entero" << endl;
		cin >> dato;
		if ( dato == 0 ){
			cout << "Se han introducido " << i << " numeros" << endl;
		}else{
			i++;
		}
		if(i==1 ){
			menor=dato;
		}
		if (menor>dato){
			menor=dato;
			
		}
	}
	cout << "El menor numero introducido es: " << menor;
	return 0;
}
