/* 
Programa que permite calcular las ganancias que la venta de un producto da a su dise�ador, y a los tres 
fabricantes del mismo
*/

#include <iostream>				//Librer�a de recursos de E/S
#include <cmath>				//Librer�a de recursos matem�ticas

using namespace std;

int main (){											//Funci�n principal
	
	double ganancias,reparto,disenador,fabricantes;		// Declaraci�n de variables a utilizar
	
	cout<<"Introduce las ganancias obtenidas con la venta del producto\n";	//Gu�a para el usuario
	cin>>ganancias;													//Asigna a la variable el valor del usuario
	
	reparto= ganancias/5;										//C�lculos
	disenador=reparto*2;										//C�lculos
	fabricantes=reparto;										//C�lculos
	cout<<"\nEl disenador obtiene de ganancias:\n"<<disenador;	//Muestra al usuario las ganancias del dise�ador
	
	cout<<"\nCada fabricante obtiene de ganancias:\n"<<fabricantes;	//Muestra al usuario las ganancias de los fabricantes
		
}
