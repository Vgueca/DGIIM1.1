/*
	Programa para calcular cuantos años deben transcurrir para que, en función de los intereses introducidos
	por el usuario, se obtengan el doble de dinero que la cantidad introducida inicialmente
*/

#include <iostream>

using namespace std;

int main (){
	double capital;
	double interes;
	double capital_acumulado, capital_max;
	int anios=0;
	
	cout << "Introduzca el capital inicial: " << endl;
	cin >> capital;
	cout << "Introduzca el interes: " << endl;
	cin >> interes;
	
	capital_acumulado = capital;
	
	capital_max=2*capital;
	
	while (capital_acumulado < capital_max){
		capital_acumulado= capital_acumulado + capital_acumulado*interes/100.0;
		anios++;
		cout << "El dinero que se ha obtenido en el anio " << anios << " es de: " << capital_acumulado << endl;
	}
	
	cout << "Los anios necesarios para doblar la cantidad de dinero inicialmente introducida seran: " << endl;
	cout<< anios << " anios.";
}
