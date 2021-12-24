/*
	Programa que comprueba si el número introducido por el usuario es feliz o no, es decir, si elevando al 
	cuadrado cada una de sus cifras y sumando el resultado, realizando el proceso continuamente se obtiene
	el número uno. Pero además debe comprobar si es feliz para un número máximo de iteraciones. Por lo que
	si el número es mayor que el número de iteraciones establecido (grado) no lo considera feliz.
*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int numero, numero_aux, k, numero2 = 0, cifra, contador, iteraciones = 0, contador_cifras = 0, numero_cifras = 1;
	
	cout << "Introduce el numero " << endl;
	cin  >> numero;
	
	cout << "Introduce el grado del numero feliz para comprobar si el numero anteriormente introducido es de dicho grado" << endl;
	cin >> k;
	
	
	do{
		numero_aux = numero;
	
		while(numero_aux >= 1){			//Contador de número de cifras
       		numero_aux = numero_aux / 10;
        	numero_cifras++;
    	}
    	
    	while (contador_cifras != numero_cifras){	//Obtiene cada una de las cifras y las eleva al cuadrado sumando el resultado
			cifra = numero % 10;
			numero = numero / 10;
			numero2 = numero2 + pow (cifra, 2);
			contador_cifras++;					//Contador que permite finalizar el bucle una vez se alcanza el número de cifras del número
		}
		
		iteraciones++;			//Contador que permite contar las iteraciones que se producen antes de obtener 1
		contador_cifras = 0;
		numero_cifras = 1;
		
		numero = numero2;
		numero2 = 0;
	}while(iteraciones<k and numero!=1);	//Bucle que permite repetir una y otra vez el proceso, hasta que las iteraciones superan el 
											// grado impuesto, o hasta que se alcanza el número 1
	
	if(numero==1 and iteraciones <=k){	//Indica si el número es feliz o no
		cout << "El numero es feliz para un grado menor o igual que el introducido" << endl;
	}
}
