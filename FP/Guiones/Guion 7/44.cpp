/*
	Programa que simula un juego en el que el usuario tiene que adivinar un número (obtenido aleatoriamente de
	entre dos valores) mediante las pistas que el programa le otorga cada vez que falla. El usuario puede
	volver a jugar si lo desea, o finalizar la partida aunque no haya adivinado el número en cuestión

*/
#include <iostream>
#include<stdlib.h>			//Librería necesario para obtener un número aleatorio
#include<time.h>			//Librería necesaria para obtener un número aleatorio

using namespace std;

int main(){
	int intento, numero;
	bool juego = true;
	bool adivinado, acabado;
	srand(time(NULL));							//Comando necesario para obtener el número aleatorio

	while (juego){ 								//Bucle que permite repetir el juego si el usuario lo desea
		adivinado = false;
		acabado = false;
		numero = 1 + rand() % (101 - 1);		//Obtención del número aleatorio de entre los límites impuestos (100-1)
		while (!adivinado and !acabado){		//Bucle que permite al usuario volver a intentar adivinar el numero
			cout << "Introduce un numero entre (100 y 1), para detener el juego introduce un numero" << endl;
			cout << " fuera del intervalo" << endl;
			cin >> intento;
			
			if (intento == numero){				//Condición si el usuario adivina el numero
				cout <<"HAS ACERTADO!!!!!!" << endl;
				adivinado = true;				//Finaliza el segundo bucle
				juego = false;					//Finaliza el primer bucle
			}
		
			if ( intento<=100 and intento>=1){	//Condición en caso de que el valor introducido este en el intervalo
				if (intento < numero)
					cout << "El numero introducido es menor al numero a adivinar" << endl;
		
				if (intento > numero )
					cout << "El numero introducido es mayor al numero a adivinar" << endl;
			}
			if (intento>100 or intento<1){		//Condición en caso de que el valor introducido no este en el usuario
				acabado = true;					//Permite salirte del segundo bucle
				juego = false;					//Permite salirte del primer bucle 
			}
		}
		cout << "Deseas volver a jugar? (escribe 1 si lo deseas, 0 si no lo deseas)" << endl;
		cin >> juego;							//Permite volver a jugar, mediante el booleano juego
	}
}
