/*
	Programa que recopila dos polinomios de grado 3, y los muestra, los suma y cálculo para un valor de X uno 
	de ellos
	
*/

#include <iostream>				//Librería de recursos de E/S
#include <cmath>				//Librería de recursos matemáticos

using namespace std;

	//Estructura que permite almacenar los coeficientes de cada uno de los polinomios
struct ecuacion{
	double coeficiente1;
	double coeficiente2;
	double coeficiente3;
	double coeficiente4;
	
};

int main(){				//Función principal

	//Declaración de variables a utilizar
	ecuacion polinomio;
	ecuacion polinomio1;
	ecuacion polinomio2;
	ecuacion polinomio3;
	int x, valor_polinomio3;
	
	//Guía al usuario y asigna los valores que el usuario introduce a cada una de las variables
	cout << "Introduce el primer coeficiente: " << endl;
	cin >> polinomio.coeficiente1;
	cout << "Introduce el segundo coeficiente: " << endl;
	cin >> polinomio.coeficiente2;
	cout << "Introduce el tercer coeficiente: " << endl;
	cin >> polinomio.coeficiente3;
	cout << "Introduce el cuarto coeficiente: " << endl;
	cin>> polinomio.coeficiente4;
	
	cout << "Introduce el primer coeficiente: " << endl;
	cin >> polinomio1.coeficiente1;
	cout << "Introduce el segundo coeficiente: " << endl;
	cin >> polinomio1.coeficiente2;
	cout << "Introduce el tercer coeficiente: " << endl;
	cin >> polinomio1.coeficiente3;
	cout << "Introduce el cuarto coeficiente: " << endl;
	cin>> polinomio1.coeficiente4;
	
	
	//Muestra los polinomios introducidos
	cout << "Los polinomios introducidos son: " << endl;
	cout <<  polinomio.coeficiente1 <<"x^3 +" << polinomio.coeficiente2 << "x^2 + " << polinomio.coeficiente3 << "x +" << polinomio.coeficiente4 << endl;
	cout <<  polinomio1.coeficiente1 <<"x^3 +" << polinomio1.coeficiente2 << "x^2 + " << polinomio1.coeficiente3 << "x +" << polinomio1.coeficiente4 << endl;
	
	//Operaciones con ambos polinomios
	polinomio2.coeficiente1= polinomio.coeficiente1 + polinomio1.coeficiente1;	
	polinomio2.coeficiente2= polinomio.coeficiente2 + polinomio1.coeficiente2;	
	polinomio2.coeficiente3= polinomio.coeficiente3 + polinomio1.coeficiente3;	
	polinomio2.coeficiente4= polinomio.coeficiente4 + polinomio1.coeficiente4;	
	
	//Muestra la suma de ambos polinomios
	cout << "La suma de los dos polinomios introducidos: " << endl; 
	cout << polinomio2.coeficiente1 <<"x^3 +" << polinomio2.coeficiente2 << "x^2 +" << polinomio2.coeficiente3 << "x +" << polinomio2.coeficiente4 << endl;
	
	//Calcula el valor del polinomio para una X concreta
	cout << "Introduce un valor para la x del primero polinomio" << endl;
	cin >> x;
	
	polinomio3.coeficiente1= polinomio.coeficiente1* pow(x,3);
	polinomio3.coeficiente2= polinomio.coeficiente2* pow(x,2);
	polinomio3.coeficiente3= polinomio.coeficiente3* x;
	polinomio3.coeficiente4= polinomio.coeficiente4;
	
	valor_polinomio3= polinomio3.coeficiente1 + polinomio3.coeficiente2 + polinomio3.coeficiente3 + polinomio3.coeficiente4;
	
	cout << "El valor del primero polinomio para esa x es :" << valor_polinomio3;
}
