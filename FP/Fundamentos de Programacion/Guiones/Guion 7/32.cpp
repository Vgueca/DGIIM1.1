/*
	Programa que permite averiguar cuantas veces se repite un d�gito en el intervalo cerrado impuesto por el 
	propio usuario. De tal manera que en el intervarlo [33,35] el d�gito 3 se repetir�a 4 vece.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int numero1, numero1_aux, numero2, valor_k, cifra, contador_cifra = 0;
	
	do{
		cout << "Introduce el primer numero del intervalo" << endl;
		cin >> numero1;
		cout << "Introduce el ultimo numero del intervalo" << endl;
		cin >> numero2;
	}while(numero1>numero2);		//Bucle que obliga al usuario a introducir un n�mero mayor que otro
	
	do{
		cout << "Introduce el digito " << endl;
		cin >> valor_k;
	}while( valor_k =< 0 or valor_k >= 9);	//Bucle que obliga al usuario a introducir un d�gito menor que 9 y maayor que 0
	
	while (numero1 <= numero2 ){			//Bucle que permite repetir el proceso que se expone en todos los enteros  del intervalo introducido por el usuario
		numero1_aux = numero1;
      	if(numero1_aux <= numero2){                      
         	do{                                
           		cifra = numero1_aux % 10;
            	if(cifra == valor_k){
               		contador_cifra++;
            	}
            	numero1_aux = numero1_aux / 10;
        	}while(numero1_aux >= 1);		//Bucle que permite obtener cada una de las cifras del n�mero y compararla con el d�gito introducido
      	}
		numero1= numero1 +1;				//Permite recorrer el intervalo, desde el n�mreo menor hasta el mayor incluidos
	}
	cout << "El digito introducido se repite en el intervalo " << contador_cifra << " veces";
}
