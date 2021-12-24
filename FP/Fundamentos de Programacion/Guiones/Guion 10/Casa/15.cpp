#include <iostream>

using namespace std;
bool caracterencontrado(char cadena[], int longitud, char caracter ){
	bool caracter_encontrado = false;
	
	for( int i = 0; i < longitud and !caracter_encontrado; i ++){
		if (cadena[i] == caracter)
			caracter_encontrado = true;
	}
	
	return caracter_encontrado;
}

int main(){
	const int LONGITUD_MAXIMA=30;
	char cadena[LONGITUD_MAXIMA];
	int longitud;
	char caracter;
	
	cout << "Introduzca la longitud de su cadena de caracteres\n";
	cin >> longitud;
	
	cout << "Introduzca los caracteres de su cadena \n";
	for(int i = 0; i < longitud; i++){
		cout << "Componente " << i+1 <<":\n"; 
		cin >> cadena[i];
	} 
	cout << "Introduzca el caracter que desea encontrar en su cadena \n";
	cin >> caracter;
	
	caracterencontrado(cadena,longitud,caracter);
	
	if (caracterencontrado(cadena,longitud,caracter)) 
		cout << "El caracter se encuentra en su cadena " << endl;
	else 
		cout << "El caracter no se encuentra en su cadena " << endl;
	
}

