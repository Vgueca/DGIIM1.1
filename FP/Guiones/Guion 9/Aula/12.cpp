/*
	Programa para realizar las operaciones expuestas en el enunciado
*/

#include <iostream>
using namespace std;

int mcd(int a, int b);				//Calcula el mcd de dos números enteros
											//Requiere: dos números enteros
	 					 					//Devuelve: un número entero (el mcd)
	 					 					
int mcm(int a, int b);				//Calcula el mcm de dos números enteros
	 					 					//Requiere: dos números enteros
	 					 					//Devuelve: un número entero (el mcm)

int main() {
	int entero1;
	int entero2;
	int salida;
	char caracter;
	bool seguir = true, valor_correcto;
	
	while(seguir){
		cout << "Introduzca un numero entero: " << endl;
		cin >> entero1;
		cout << "Introduzca otro numero entero: " << endl;
		cin >> entero2;
		do{
			cout << "Introduzca ahora un caracter de entre los siguientes, dependiendo de lo que desee realizar:" << endl;
			cout << "'m' realiza el minimo comun multiplo " << endl;
			cout << "'d' realiza el maximo comun divisor " << endl;
			cout << "'+' realiza la suma " << endl;
			cout << "'-' realiza la resta " << endl;
			cout << "'*' realiza el producto " << endl;
			cout << "'/' realiza el cociente " << endl;
			cin >> caracter;
			valor_correcto = caracter=='m' or caracter=='d' or caracter=='+' or caracter=='-' or caracter=='*' or caracter=='/';
			if(!valor_correcto)
				cout << "El caracter introducido no es valido " << endl;
		}while(!valor_correcto);
		
		switch (caracter){							
			case 'm':
				salida = mcm(entero1, entero2);
				cout << "El mcm de " << entero1 << " y " << entero2 << " es: " << salida << endl;
				break;
			case 'd':
				salida = mcd(entero1, entero2);
				cout << "El mcd de " << entero1 << " y " << entero2 << " es: " << salida << endl;
				break;
			case '+':
				salida = entero1 + entero2;
				cout << entero1 << " + " << entero2 << " = " << salida << endl;
				break;
			case '-':
				salida = entero1 - entero2;
				cout << entero1 << " - " << entero2 << " = " << salida << endl;
				break;
			case '*':
				salida = entero1 * entero2;
				cout << entero1 << " * " << entero2 << " = " << salida << endl;
				break;
			case '/':
				salida = entero1 / entero2;
				cout << entero1 << " / " << entero2 << " = " << salida << endl;
				break;
		}
		
		do{
			cout << "Quiere seguir operando? (Introduzca 1 si es que si, y 0 si es que no): ";
			cin >> seguir;
		}while(seguir!=0 and seguir!=1);
	}
}

int mcm(int a, int b){
	int producto = a*b;						//Calcula el producto de ambos, ya que si no encuentra ningún número en el bucle, el mcm es el producto
	
	for(int i=a; i<producto; i=i+a){		//Bucle que va avanzando en los múltiplos de a y lo muestra si es un múltiplo también de b
		if(i%b==0)
			return i;
	}
	return producto;
}

int mcd(int a, int b){
	for(int i=a; i>=2; i--){				//Bucle que va avanzando desde a hasta el 2 y lo muestra si es un divisor de ambos
		if(a%i==0 and b%i==0)
			return i;
	}
	return 1;									//Si no ha encontrado mcd en el bucle, significa que no tienen divisores propios comunes, luego el mcd es el 1
}
