/*
Este programa calcula la vuelta que una m�quina debe darle al cliente y la expresa en monedas de un euro, 
de cincuenta c�ntimos, de veinte c�ntimos y de cinco c�ntimos.
*/

#include <iostream>					//Libreria de recursos de E/S
#include <cmath>					//Libreria de recursos matem�ticos

using namespace std;

int main (){						//Funci�n principal
	
	int precio, ingreso, vuelta, euros, cincuenta, veinte, cinco;	//Declaraci�n de variables a utilizar
	
	cout<<"Precio del producto\n";									//Gu�a para el usuario
	cin>>precio;													//Asignaci�n de un valor a dicha variable
	cout<<"Cantidad ingresada por el cliente\n";					//Gu�a al usuario
	cin>>ingreso;													//Asignaci�n de un valor a dicha variable
	
	vuelta=ingreso-precio;											//C�lculos
	euros=vuelta/100;												//C�lculos
	cincuenta=(vuelta%100)/50;										//C�lculos
	veinte=((vuelta%100)%50)/20;									//C�lculos
	cinco=(((vuelta%100)%50)%20)/5;									//C�lculos
	
	cout<<"La vuelta sera de: "<<euros<<" monedas de un euro, "<<cincuenta<<" monedas de cincuenta, \n"<<veinte<<" monedas de veinte y "<<cinco<<" monedas de cinco";
	//Muestra al usuario la soluci�n del programa
}
