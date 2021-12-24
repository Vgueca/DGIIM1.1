/*
	Programa para saber todos los numeros triangulares menores al valor introducido
*/

#include <iostream>

using namespace std;

int main(){
	int  numero_limite, m = 10000000, suma = 0;
	
	cout << "Introduce el numero para saber cuales son los numeros triangulares menores que este" << endl;
	cin >> numero_limite;
	
	for(int numero=1; numero<=numero_limite; numero++ ){	//Bucle que coge cada valor natural menor al introducido
		for(int i=1; i<m; i++){								//Bucle que suma cada valor hasta que la suma es igual al natural antes extraido
			suma= suma + i;	
			if (numero == suma){
				cout << numero << " es un numero triangular" << endl;
			}
		}
		suma = 0;
	}
}
