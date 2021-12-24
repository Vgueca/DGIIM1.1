/* 
Programa que permite transformar la hora que el usuario nos da, en la hora digital correcta, dada tanto en
horas como minutos y segundos
*/

#include <iostream>				//Libreria de recursos nde E/S
#include <cmath>				//Librería de recursos matemáticos

using namespace std;

int main (){												//Función principal	

	int dias, horas, minutos, segundos;						//Declaración de variables a utilizar
	
	cout<<"Introduce el numero de horas\n";					//Muestra al usuario lo que tiene que introducir
	cin>>horas;												//Asigna a dicha variable el valor del usuario
	cout<<"Introduce el numero de minutos\n";				//Muestra al usuario lo que tiene que introducir
	cin>>minutos;											//Asigna a dicha variable el valor del usuario
	cout<<"Introduce el numero de segundos\n";				//Muestra al usuario lo que tiene que introducir
	cin>>segundos;											//Asigna a dicha variable el valor del usuario
	
	dias=horas/24;											//Cálculos
	horas= (horas+(minutos+(segundos/60))/60)%24;			//Cálculos
	minutos= (minutos+(segundos/60))%60;					//Cálculos
	segundos= segundos%60;									//Cálculos
	
	cout<<"La hora es:\n"<<dias<<" dias, " <<horas<<" horas, "<<minutos<<" minutos, "<<segundos<<" segundos."; //Muestra al usuario la solución del programa
}
