/* 
Programa que permite calcular las ganancias que la venta de un producto da a su diseñador, y a los tres 
fabricantes del mismo
*/

#include <iostream>				//Librería de recursos de E/S
#include <cmath>				//Librería de recursos matemáticas

using namespace std;

int main (){											//Función principal
	
	double ganancias,reparto,disenador,fabricantes;		// Declaración de variables a utilizar
	
	cout<<"Introduce las ganancias obtenidas con la venta del producto\n";	//Guía para el usuario
	cin>>ganancias;													//Asigna a la variable el valor del usuario
	
	reparto= ganancias/5;										//Cálculos
	disenador=reparto*2;										//Cálculos
	fabricantes=reparto;										//Cálculos
	cout<<"\nEl disenador obtiene de ganancias:\n"<<disenador;	//Muestra al usuario las ganancias del diseñador
	
	cout<<"\nCada fabricante obtiene de ganancias:\n"<<fabricantes;	//Muestra al usuario las ganancias de los fabricantes
		
}
