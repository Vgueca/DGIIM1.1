/*
	Programa que permite cambiar la letra que el usuario introduce a mayúscula o minúscula según la haya
	introducido en mayúscula o minúscula

*/
#include <iostream>											//Librería de recursos de E/S

using namespace std;

int main (){												//Función principal

	//Declaración de variables a utilizar
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
