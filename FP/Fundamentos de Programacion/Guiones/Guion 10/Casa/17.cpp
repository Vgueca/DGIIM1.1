#include <iostream>

using namespace std;

void Par_impar(int vector[30], int longitud){
	int vector_impar [30], vector_par [30];
	int longitud_par = 0, longitud_impar = 0;
	
	for( int i = 0; i < longitud; i++){
		if( vector[i]% 2 == 0){
			vector_par[longitud_par] = vector[i];
			longitud_par ++;
		}
		else{
			vector_impar [longitud_impar] = vector[i];
			longitud_impar ++;
		}
	}
	
	cout << "\nEl vector de los impares es el siguiente: " << endl;
	for ( int i = 0; i < longitud_impar; i++){
		cout << vector_impar[i] << " ";
	}
	cout << "\nEl vector de los pares es el siguiente: " << endl;
	for ( int i = 0; i < longitud_par; i++){
		cout << vector_par[i] << " ";
	}
}

int main(){
	const int LONGITUD_MAX = 30;
	int vector[LONGITUD_MAX];
	int longitud;
	
	do{
	cout << "Introduzca la longitud de su vector \n";
	cin >> longitud;
	}while( longitud <= 0 or longitud > 30);
	
	
	cout << "Introduzca los componentes de su vector \n";
	for ( int i = 0; i < longitud; i ++){
		cout << "Componente " << i+1 << ":" << endl;
		cin >> vector[i];
	}
	
	Par_impar (vector, longitud);
	
}
