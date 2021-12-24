/*
	Programa que calcula el precio del billete de un pasajero en funcion de los kil�metros recorridos 
	durante el viaje 
   
*/

#include <iostream>			//Librer�a de recursos de E/S
#include <cmath>			//Librer�a de recursos matem�ticos

using namespace std;

int main(){					//Funci�n principal

	//Declaraci�n de variables a utilizar	
	double kilometros, billete;
	char cliente;
	bool destino, destino1, destino2;
	double centimos;
	
	//Gu�a al usuario y asigna a las variables el valor que el usuario introduce
	cout << "Es cliente previo de la empresa? (S/N)" << endl;
	cin >> cliente;
	cout << "Numero de kilometros a recorrer en el viaje :" << endl;
	cin >> kilometros;
	
	//C�lculos 
	centimos = 0.10*(kilometros-200);
	
	destino= kilometros > 200;
	destino1= kilometros >= 600;
	destino2= kilometros >=1100;
	
	//Condicionales que aplican las ofertas al precio del viaje
	if (!destino){
		if(cliente == 'S'){
			billete= 135*0.95;
		}
	}
	else{
		billete = 135+ centimos; 
		if(destino1){
			billete= billete*0.97; 
		}
		if (destino2){
			billete=billete*0.96;
		}
	}
	
	//Muestra el precio final del billete 
	cout << "El precio del billete sera de: " << billete << endl;
}
