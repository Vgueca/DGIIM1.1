#include <iostream>
#include <cmath>

using namespace std;

int main(){
	const int LONGITUD_MAXIMA = 30;
	double matriz[LONGITUD_MAXIMA][LONGITUD_MAXIMA];
	double vector[LONGITUD_MAXIMA];
	int componentes_utiles, filas_utiles, contador = 0;
	
	cout << "Introduce la longitud del vector que representa a la matriz cuadrada simetrica" << endl;
	cin >> componentes_utiles;
	
	cout <<"Introduzca ahora sus componentes" << endl;
	for(int i = 0; i < componentes_utiles; i++){
		cout <<"Componente " << i+1 << ": " << endl; 
		cin >> vector[i];
	}
	
	filas_utiles = (sqrt(componentes_utiles)+1)/1;
	
	for(int i = 0; i < filas_utiles; i++){
		for (int j = 0; j < filas_utiles; j++){
				if(i >= j){
					matriz [i][j] = vector [contador++];
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
}
