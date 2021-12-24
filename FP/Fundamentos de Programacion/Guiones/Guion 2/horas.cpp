/* 
Programa que permite transformar la hora que el usuario nos da, en la hora digital correcta, dada tanto en
horas como minutos y segundos
*/

#include <iostream>				//Libreria de recursos nde E/S
#include <cmath>				//Librer�a de recursos matem�ticos

using namespace std;

int main (){												//Funci�n principal	

	int dias, horas, minutos, segundos;						//Declaraci�n de variables a utilizar
	
	cout<<"Introduce el numero de horas\n";					//Muestra al usuario lo que tiene que introducir
	cin>>horas;												//Asigna a dicha variable el valor del usuario
	cout<<"Introduce el numero de minutos\n";				//Muestra al usuario lo que tiene que introducir
	cin>>minutos;											//Asigna a dicha variable el valor del usuario
	cout<<"Introduce el numero de segundos\n";				//Muestra al usuario lo que tiene que introducir
	cin>>segundos;											//Asigna a dicha variable el valor del usuario
	
	dias=horas/24;											//C�lculos
	horas= (horas+(minutos+(segundos/60))/60)%24;			//C�lculos
	minutos= (minutos+(segundos/60))%60;					//C�lculos
	segundos= segundos%60;									//C�lculos
	
	cout<<"La hora es:\n"<<dias<<" dias, " <<horas<<" horas, "<<minutos<<" minutos, "<<segundos<<" segundos."; //Muestra al usuario la soluci�n del programa
}
