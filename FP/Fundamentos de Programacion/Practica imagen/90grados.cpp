#include <iostream>

using namespace std;

//Variables constantes que permiten almacenar memoria para la matriz a utilizar en el programa
const int FILAS_MAX = 400;
const int COLUMNAS_MAX = 400;

//Función que permite rotar 90 grados  hacia la derecha, una matriz. Requiere como datos la propia matriz y el número de filas y el número de columnas de esta
void matriz_rotada(int matriz[FILAS_MAX][COLUMNAS_MAX], int filas, int columnas){
	
	//Declaración de variables a utilizar
	int matriz_copia[FILAS_MAX][COLUMNAS_MAX] = {0};	//Inicializa una matriz auxiliar a 0;
	int auxiliar;										//Variable auxiliar 
	int vector_aux[FILAS_MAX];							//Vector auxiliar 

	auxiliar = filas-1;
	
	/* 
	Bucle que recorre la matriz inicial de izquierda a derecha desde la primera fila hasta la última y le asigna cada componente a una matriz recorrida de arriba a abajo y  desde
	la última columna hasta la primera
	*/
	
	for(int i = 0; i < filas; i ++){
		for(int j = 0; j < columnas; j++){
			matriz_copia[j][auxiliar]= matriz[i][j];
			
		}
		auxiliar --;
	}
	
	//Bucle para mostrar la matriz girada 90 grados hacia la derecha
	for(int i = 0; i < columnas; i ++){
		for(int j = 0; j < filas; j++ ){
			cout << matriz_copia[i][j] << " ";
		}
		cout << endl;
	}	
}

int main(){

	//Declaración de las variables a utilizar en el programa, que son asignadas mediante un fichero de texto por redireccionamiento
   int matriz[FILAS_MAX][COLUMNAS_MAX];
   int filas, columnas;
   string elemento1;
   int elemento3;
   
   cin >> elemento1;
   cin >> columnas >> filas;
   cin >> elemento3;
   
   //Bucle para asignar a cada componente de la matriz el valor correspondiente en la matriz del fichero.
	for(int i = 0; i < filas; i ++){
      for( int j = 0; j < columnas; j++){
        cin >> matriz[i][j]; 
      }
	}
	
	
	cout << elemento1 << "\n";
	cout << filas << " " << columnas << "\n";
	cout << elemento3 << "\n";

	//Llamada a la función
	matriz_rotada(matriz,filas,columnas);
}
