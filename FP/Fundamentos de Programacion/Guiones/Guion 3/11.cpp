/*	
	Programa que para analizar si los resultados de las operaciones del enunciado se han desbordado o se 
	han aproximado debido al tipo de dato donde se han almacenado
	
*/
#include <iostream>				//Librería de recursos de E/S

using namespace std;

int main (){					//Función principal

	int chico, chico1, chico2; 
	chico1 = 123456789;
	chico2 = 123456780;
	chico = chico1 * chico2;
	cout<<"Primera expresion"<<endl<<chico<<endl;
	//El resultado se ha desbordado

 	long grande;
	int chico_1, chico_2; 
	chico_1 = 123456789;
	chico_2 = 123456780;
	grande = chico_1 * chico_2;
	cout<<"Segunda expresion"<<endl<<grande<<endl;
	//El resultado se ha desbordado

	double resultado, real1, real2; 
	real1 = 123.1;
	real2 = 124.2;
	resultado = real1 * real2;
	cout<<"Tercera expresion"<<endl<<resultado<<endl;
	//El resultado es aproximado 


	double RESULTADO, REAL1, REAL2;
	REAL1 = 123456789.1;
	REAL2 = 123456789.2;
	RESULTADO = REAL1 * REAL2;
	cout<<"Cuarta expresion"<<endl<<RESULTADO<<endl;
	//El resultado es  aproximado 

	double real3, otro_real; 
	real3 = 2e34;
	otro_real = real3 + 1; 
	otro_real = otro_real - real3;
	cout<<"Quinta expresion"<<endl<<otro_real<<endl;
	//El resultado es aproximado

	double real4, otro_real2; 
	real4 = 1e+300; 
	otro_real2 = 1e+200;
	otro_real2 = otro_real2 * real4;
	cout<<"Sexta expresion"<<endl<<otro_real2<<endl;
	//El resultado se ha desborado

	float CHICO;
	double GRANDE;
	grande = 2e+150; 
	chico = GRANDE;
	cout<<"Septima expresion"<<endl<<CHICO<<endl;
	//El resultado se ha desborado
}

