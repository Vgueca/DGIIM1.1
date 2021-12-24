/*
	Programa que permite intercambiar el valor, dado por el usuario, de 3 variables entre sí

*/

#include <iostream>						//Librería de recursos de E/S

using namespace std;

int main (){							//Función principal
	double x,y,z,aux;					//Declaración de variables a utilizar
	
	//Muestra al usuario lo que tiene que realizar y almacena el valor en una de las variables declaradas
	cout<<"Introduzca un valor para la variable x\n";
	cin>>x;
	cout<<"Introduzca un valor para la variable y\n";
	cin>>y;
	cout<<"Introduzca un valor para la variable z\n";
	cin>>z;
	
	//Cálculos	
	aux=x;
	x=y;
	y=z;
	z=aux;
	//Muestra el resultado del programa
	cout<<"Los valores de las variables son: \n"<<"Para x: "<<x<<"\nPara y: "<<y<<"\nPara z: "<<z;
}
