/*
Programa que calcula la media aritm�tica de las alturas de 3 personas, y tambi�n calcula la desviaci�n 
de dicha media.
*/

#include <iostream>			//Librer�a de recursos de E/S	
#include <cmath>			//Librer�a de recursos matem�ticos

using namespace std;

int main (){				//Funci�n principal
	double media_aritmetica, desviacion_estandar, altura1, altura2, altura3;	//Declaraci�n de variables
	
	cout<<"Introduce la altura de la primera persona\n";		//Gu�a al usuario
	cin>>altura1;												//Asigna a dicha variable el valor del usuario
	cout<<"Introduce la altura de la segunda persona\n";		//Gu�a al usuario
	cin>>altura2;												//Asigna a dicha variable el valor del usuario
	cout<<"Introduce la altura de la tercera persona\n";		//Gu�a al usuario
	cin>>altura3;												//Asigna a dicha variable el valor del usuario
	
	media_aritmetica= (altura1+altura2+altura3)/3;					//C�lculos 
	desviacion_estandar= sqrt((pow(altura1-media_aritmetica, 2)+pow(altura2-media_aritmetica, 2)+pow(altura3-media_aritmetica, 2))/3);	//C�lculos
	
	cout<<"\nLa media aritmetica de las alturas introducidas es:\n"<<media_aritmetica;	//Muestra al usuario el resultado del programa
	cout<<"\nLa desviacion estandar es de:\n"<<desviacion_estandar<<"\n";						//Muestra al usuario el resultado del programa
	
	//Condicionales del programa que permiten saber si la altura es mayor o menor que la media
	if (altura1>media_aritmetica){
		cout<<altura1<<" es mayor que su media.\n";
	}
	else {
		if(altura1<media_aritmetica){
			cout<<altura1<<" es menor que su media.\n";	
		}
		else{
			cout<<altura1<<" es igual que su media.\n";
		}	
	}
	if (altura2>media_aritmetica){
		cout<<altura2<<" es mayor que su media.\n";
	}
	else {
		if(altura2<media_aritmetica){
			cout<<altura2<<" es menor que su media.\n";	
		}
		else{
			cout<<altura2<<" es igual que su media.\n";
		}
	}
if (altura3>media_aritmetica){
		cout<<altura3<<" es mayor que su media.\n";
	}
	else {
			if(altura3<media_aritmetica){
			cout<<altura3<<" es menor que su media.\n";	
		}
		else{
			cout<<altura3<<" es igual que su media.\n";
		}
	}
}
