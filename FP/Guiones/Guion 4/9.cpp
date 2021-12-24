/*
	Programa que modifica la retencion, y por tanto la renta neta de una persona en funci�n de los datos 
	que la caractericen, tales como si estado civil, si es aut�nomo etc...
	
*/
#include <iostream>		//Librer�a de recursos de E/S
#include <string>		//Librer�a de recursos 

using namespace std;

struct datos {			//Estructura en cuyas variables se almacenan los datos caracteristicos de la persona
	char autonomo; 
	char pensionista; 
	char casado;
   double renta_bruta;
   double retencion_inicial;
};



int main(){				//Funci�n principal
	//Declaraci�n de datos a utilizar
	datos persona;
	double retencion, renta_neta;
	
	//Gu�a para el usuario y asignaci�n del valor que el usuario introduce a cada variable de la estructura antes mencionada
	cout << endl << "Es autonomo (Y o N)?: ";
	cin >> persona.autonomo;
	cout << endl << "Es pensionista (Y o N)?: ";
	cin >> persona.pensionista;
	cout << endl << "Esta casado (Y o N)?: ";
	cin >> persona.casado;
	cout << endl <<  "Introduce la renta bruta: ";
	cin >> persona.renta_bruta;
	cout << endl << "Introduzca la retencion fiscal inicial: ";
	cin >> persona.retencion_inicial;
	
	//Estructuras condicionales que permiten conocer la situaci�n de la persona y aplicarle o no una subida de la retenci�n
	if (persona.autonomo=='Y'){
		retencion= persona.retencion_inicial - persona.retencion_inicial* 0.03;
	}
	else{
		if (persona.pensionista== 'Y'){
			retencion= persona.retencion_inicial + persona.retencion_inicial* 0.01;
		}
		else{
			retencion= persona.retencion_inicial + persona.retencion_inicial * 0.02;
			if(persona.renta_bruta < 20000){
				retencion=retencion + retencion*0.06;
			}
			else{
				if(persona.casado=='Y'){
					retencion= retencion + retencion* 0.08 ;
				}
				else{
					retencion= retencion + retencion* 0.10;
				}
			}
		}
	}
	
	//C�lculo final
	renta_neta= persona.renta_bruta - (persona.renta_bruta* (retencion/100));
	
	//Muestra al usuario el resultado del programa, la renta neta del usuario introducido	
	cout << "La renta neta de la persona introducida es: " << renta_neta;
}
