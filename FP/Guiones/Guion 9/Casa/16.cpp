#include <iostream>

using namespace std;

int main(){
	const int LONGITUD_MAXIMA = 30;
	double matriz[LONGITUD_MAXIMA][LONGITUD_MAXIMA];
	double vector[LONGITUD_MAXIMA];
	int filas_utiles, contador = 0;
	
	cout << "Introduzca el numero de filas, que al tratarse de una matriz cuadrada sera igual al de columnas" << endl;
	cin >> filas_utiles;
	
	for(int i = 0; i< LONGITUD_MAXIMA; i++){
		vector[i] = 0;
	}
	
	for(int i = 0; i < filas_utiles; i ++){
		for( int j = 0; j < filas_utiles; j++){
			if(i >= j){
				cout << "Introduzca el elemento de la posicion " << i+1 << ","<< j+1 << endl;	
				cin >> matriz [i][j];
				vector[contador++] = matriz[i][j];
			}		
		}
	}
	for(int i = 0; i < filas_utiles; i ++){
		for( int j = 0; j < filas_utiles; j++){
			if(i < j){
				matriz[i][j] = matriz[j][i];
			}
		}
	}
	
	cout << "Su matriz es la siguiente: " << endl;
	
	for(int i = 0; i < filas_utiles; i ++){
		for( int j = 0; j < filas_utiles; j++){
			cout << matriz [i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "El vector que representa su matriz es: " << endl;
	for(int i = 0; i < contador; i++){
		cout << vector[i] << " ";
	}
}

