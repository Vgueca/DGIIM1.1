/*
	Programa que permite saber si un n�mero es divisible de forma entera por otro, y viceversa.
*/

#include <iostream>							//Librer�a de recursos de E/S

using namespace std;

int main (){								//Funci�n principal
	
	int numero1, numero2, resto1, resto2;	//Declaraci�n de variables enteras a utilizar
	
	//Muestra al usuario lo que tiene que introducir y lo almacena en una de las variables declaradas
	cout<<"Introduce el primer numero\n";
	cin>>numero1;
	cout<<"\nIntroduce el segundo numero\n";
	cin>>numero2;
	
	//C�lculos para obtener el resto de la divisi�n de uno de los n�meros por otro
	resto1=numero1%numero2;
	resto2=numero2%numero1;
	
	//Condicionales que permiten reconocer si el resto es 0, es decir son divisibles de forma entera o no lo es.
	if (resto1==0 or resto2==0){
		if(resto1==0 and resto2==0){
			cout<<"\nAmbos numeros se dividen entre si de forma entera.\n";
		}
		else{
			cout<<"\nUno de los dos numeros divide al otro de forma entera.\n";
		}
	}
	else{
		cout<<"\nNinguno de los dos numeros divide al otro de forma entera.\n";
	}	
}
