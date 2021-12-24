#include <iostream>

using namespace std;

int SumaDivisores(int a);			//Suma los divisores de un número entero
	 						 			//Requiere: un número entero
										//Devuelve: un valor entero (la suma de los divisores)
													
bool SonAmigos (int a, int b);		//Comprueba si dos números enteros son amigos o no
	  					  	  			//Requiere: dos números entero
	  					  	  			//Devuelve: un valor booleano.

int main(){
	int natural1;
	int natural2;
	
	cout << "Introduzca el primer numero natural: " << endl;
	do{
		cin >> natural1;
	}while(natural1<0);
	
	cout << "Introduzca el segundo numero natural: " << end;
	do{
		cin >> natural2;
	}while(natural2 <= natural1);
	
	cout << "Las parejas de numeros amigos presentes en el intervalo entre " << natural1 << " y " << natural2 << " son: \n";
	
	for(int i=natural1; i <= natural2; i++){					//Bucle que calcula las parejas de números amigos que hay dentro del intervalo
		for(int j=i+1; j <= natural2; j++){
			if(SonAmigos(i,j))
				cout << "(" << i << "," << j << ")\t";
		}
	}
}
	
int SumaDivisores(int entero){
	int suma=1;								//Comienza en 1 porque todos los números tienen como divisor al 1
	for(int i=2; i<=entero; i++){			//Bucle que comprueba desde el dos hasta el número dado, si es un divisor, y si lo es, lo suma
		if (entero%i==0)
		suma += i;
	}
	return suma;
}
		
bool SonAmigos(int a, int b){				//Devuelve 1 si la suma de sus divisores es igual, y 0 si no lo es
	return (SumaDivisores(a) == SumaDivisores(b));
}
