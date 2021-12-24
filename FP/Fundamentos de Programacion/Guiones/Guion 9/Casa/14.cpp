#include <iostream>

using namespace std;

int main (){
	const int LONGITUD_MAXIMA=30;
	double matriz[LONGITUD_MAXIMA][LONGITUD_MAXIMA];
	int filas_utiles, columnas_utiles, contador = 0;
	double vector[LONGITUD_MAXIMA];
	
	cout << "Introduzca el numero de filas de la matriz" << endl;
	cin >> filas_utiles;
	
	cout << "Introduzca el numero de columnas de la matriz" << endl;
	cin >> columnas_utiles;
	
	for(int i = 0; i < filas_utiles; i++ ){
		for(int j = 0; j < columnas_utiles; j++){
			cout << "Introduzca el elemento de la posicion " << i+1 << ","<< j+1 << endl;
			cin >> matriz[i][j];
		}
	
	}
	for(int i = 0; i < filas_utiles; i++){
		vector[i] = 0;
	}
	
	for( int i = 0; i < filas_utiles; i++){
		for( int j = 0; j < columnas_utiles; j++){
			vector[contador] += matriz[i][j];
		}
		contador ++;
	}
	
	cout << "El vector resultante a sumar todos los elementos de una fila es: " << endl;
	for ( int i = 0; i< filas_utiles; i++){
		cout << vector[i] << " ";
	}
}
