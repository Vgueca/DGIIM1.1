/*
Este programa calcula la vuelta que una máquina debe darle al cliente y la expresa en monedas de un euro, 
de cincuenta céntimos, de veinte céntimos y de cinco céntimos.
*/

#include <iostream>					//Libreria de recursos de E/S
#include <cmath>					//Libreria de recursos matemáticos

using namespace std;

int main (){						//Función principal
	
	int precio, ingreso, vuelta, euros, cincuenta, veinte, cinco;	//Declaración de variables a utilizar
	
	cout<<"Precio del producto\n";									//Guía para el usuario
	cin>>precio;													//Asignación de un valor a dicha variable
	cout<<"Cantidad ingresada por el cliente\n";					//Guía al usuario
	cin>>ingreso;													//Asignación de un valor a dicha variable
	
	vuelta=ingreso-precio;											//Cálculos
	euros=vuelta/100;												//Cálculos
	cincuenta=(vuelta%100)/50;										//Cálculos
	veinte=((vuelta%100)%50)/20;									//Cálculos
	cinco=(((vuelta%100)%50)%20)/5;									//Cálculos
	
	cout<<"La vuelta sera de: "<<euros<<" monedas de un euro, "<<cincuenta<<" monedas de cincuenta, \n"<<veinte<<" monedas de veinte y "<<cinco<<" monedas de cinco";
	//Muestra al usuario la solución del programa
}
