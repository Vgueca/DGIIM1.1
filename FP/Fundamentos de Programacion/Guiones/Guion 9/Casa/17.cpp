
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int caracteres;
	char nombre[50], login[50];
	int posicion = -1;
	bool escribiendo = true;
	
	do{
		cout << endl << "Introduce el numero de caracteres: ";
		cin >> caracteres;
	}while(caracteres < 1);
	
	cout << endl << "Introduce tu nombre: ";
	cin.ignore();
	cin.getline (nombre, 50);
	
	for(int i = 0; i < 50; i++){
		if(escribiendo){
			for(int j = 0; j < caracteres; j++){
				if(nombre[i + j] == ' ')
					escribiendo = false;
				if(escribiendo){
				posicion++;
				login[posicion] = nombre[i + j];
				}
			}
			escribiendo = false;
			if(nombre[i] == ' ')
				escribiendo = true;
		}
	}

	cout << endl << "Tu nombre recomendado es: ";
	for(int i = 0; i < posicion + 1; i++)
		cout << login[i];
}
