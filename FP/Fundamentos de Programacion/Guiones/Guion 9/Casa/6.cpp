/*
	Programa que te permite calcular el mínimo común múltiplo de dos números mediante una función
*/

#include <iostream>

using namespace std;

//Función para calcular el m.c.m
int MCM(int a, int b){
	int numero;
	bool bucle = true;
	if (a>=b)
		numero=a;
	else 
		numero=b;

	while(bucle){
    	if(numero % a == 0 and numero % b == 0){
      		return numero;
      		bucle = false;
      	}
    	else
      		numero++;
	}
}

//Probamos la funcion
int main() {
  int a, b;
  cout << "Introduce los dos numeros para conocer su minimo comun multiplo: ";
  cin >> a;
  cin >> b;
  
  cout << endl << "El MCM es " << MCM(a, b);
}
