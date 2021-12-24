#include <iostream>

using namespace std;

const int LONGITUD_MAXIMA=30;

struct FrecuenciaCaracter{
	char caracter;
	int frecuencia;
}resultado;

void  moda(char cadena[], int longitud){
	int vector_aux[LONGITUD_MAXIMA] = {0};
	char vector2_aux[LONGITUD_MAXIMA];
	int contador = 0;
	
	resultado.frecuencia = 0;
	
	for ( int i = 0; i < longitud; i ++){
		for ( int j = 0; j < longitud; j++){
			if (cadena[i] == cadena[j])
				contador ++; 
		}
		if ( contador >= resultado.frecuencia){
			resultado.frecuencia = contador;
			resultado.caracter = cadena[i];
		}
		contador = 0;
	}
	cout << "El caracter que mas se repite es : " << endl;
	cout << resultado.caracter << " que se repite " << resultado.frecuencia << " veces.";	
}


int main(){
	char cadena[LONGITUD_MAXIMA];
	int longitud;
	
	cout << "Introduzca la longitud de su cadena de caracteres\n";
	cin >> longitud;
	
	cout << "Introduzca los caracteres de su cadena \n";
	for(int i = 0; i < longitud; i++){
		cout << "Componente " << i+1 <<":\n"; 
		cin >> cadena[i];
	} 
	
	moda(cadena,longitud);	
}

