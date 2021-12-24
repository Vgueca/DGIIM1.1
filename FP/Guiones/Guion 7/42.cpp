/*
	Permite saber si dos equipos han empatado o cuál de ellos ha ganado a partir de los dorsales y los puntos 
	introducidos por el usuario
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int dorsal, puntos, equipo1, equipo2;
	bool stop, stop2, empate, equipo1_ganador;
	
	cout << "Introduzca la secuencia de numeros del partido (introduce el numero -1 para finalizar la secuencia" << endl;
	do{															//Bucle para calcular los puntos de cada equipo
		cin >> dorsal;
		stop = dorsal ==-1;
		
		if(!stop){												//Condición para que el programa finalice
			cin >> puntos;
			stop2 = puntos == -1;
			
			if(!stop2){											//Condición para que el programa finalice
				if(dorsal== 1 or dorsal==2 or dorsal ==3)		//Condición para sumar puntos al equipo 1
					equipo1 += puntos;
				if(dorsal == 4 or dorsal == 5 or dorsal == 6)	//Condición para sumar puntos al equipo 1
					equipo2 += puntos;
		
			}
		}
	}while(!stop and !stop2);
	
	empate = equipo1 == equipo2;							//Booleano en caso de empate
	equipo1_ganador = equipo1 > equipo2;					//Booleano cuando gana el equipo 1

	if (empate)
		cout << "Los dos equipos empataron" << endl;
	
	if (equipo1_ganador)
		cout << "El equipo 1 gano el partido" << endl;
	else													//Si no es empate, y no gana el equipo1, gana el equipo2
		cout << "El equipo 2 gano el partido" << endl;
	
}
