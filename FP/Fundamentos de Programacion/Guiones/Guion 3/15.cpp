/*
	Programa que permite cambiar la letra que el usuario introduce a may�scula o min�scula seg�n la haya
	introducido en may�scula o min�scula

*/
#include <iostream>											//Librer�a de recursos de E/S

using namespace std;

int main (){												//Funci�n principal

	//Declaraci�n de variables a utilizar
	char letra;	
	bool condicion;
												
	condicion = letra>= 'A' and letra<='Z';
	
	do{
		cout << "Introduce la letra " << endl;
		cin >> letra;
		if(condicion){
			letra-= 'A'-'a';
			cout<<"La letra en minuscula es: "<<endl<<letra;			
		}
	}while (condicion);
	return 0;
}
