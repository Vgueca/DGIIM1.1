/*
	Programa que simula un juego en el que el usuario tiene que adivinar un n�mero (obtenido aleatoriamente de
	entre dos valores) mediante las pistas que el programa le otorga cada vez que falla. El usuario puede
	volver a jugar si lo desea, o finalizar la partida aunque no haya adivinado el n�mero en cuesti�n

*/
#include <iostream>
#include<stdlib.h>			//Librer�a necesario para obtener un n�mero aleatorio
#include<time.h>			//Librer�a necesaria para obtener un n�mero aleatorio

using namespace std;

int main(){
	int intento, numero;
	bool juego = true;
	bool adivinado, acabado;
	srand(time(NULL));							//Comando necesario para obtener el n�mero aleatorio

	while (juego){ 								//Bucle que permite repetir el juego si el usuario lo desea
		adivinado = false;
		acabado = false;
		numero = 1 + rand() % (101 - 1);		//Obtenci�n del n�mero aleatorio de entre los l�mites impuestos (100-1)
		while (!adivinado and !acabado){		//Bucle que permite al usuario volver a intentar adivinar el numero
			cout << "Introduce un numero entre (100 y 1), para detener el juego introduce un numero" << endl;
			cout << " fuera del intervalo" << endl;
			cin >> intento;
			
			if (intento == numero){				//Condici�n si el usuario adivina el numero
				cout <<"HAS ACERTADO!!!!!!" << endl;
				adivinado = true;				//Finaliza el segundo bucle
				juego = false;					//Finaliza el primer bucle
			}
		
			if ( intento<=100 and intento>=1){	//Condici�n en caso de que el valor introducido este en el intervalo
				if (intento < numero)
					cout << "El numero introducido es menor al numero a adivinar" << endl;
		
				if (intento > numero )
					cout << "El numero introducido es mayor al numero a adivinar" << endl;
			}
			if (intento>100 or intento<1){		//Condici�n en caso de que el valor introducido no este en el usuario
				acabado = true;					//Permite salirte del segundo bucle
				juego = false;					//Permite salirte del primer bucle 
			}
		}
		cout << "Deseas volver a jugar? (escribe 1 si lo deseas, 0 si no lo deseas)" << endl;
		cin >> juego;							//Permite volver a jugar, mediante el booleano juego
	}
}
