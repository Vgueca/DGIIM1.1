

#include <iostream>

using namespace std;

int main(){
	const int LONGITUD_MAX = 30, LONGITUD_MAX2 = 60;
	int vector1[LONGITUD_MAX], vector2[LONGITUD_MAX], vector_resultante[LONGITUD_MAX2];
	int componente_util, componente_util2, componente_util3;
	int componente1 = 0, componente2 = 0;
	bool uno_menor_2;
	
	cout << "Introduzca el numero de componentes del primer vector " << endl;
	do{
		cin >> componente_util;
	}while(componente_util<1 || componente_util>30);
	
	cout << "Introduzca las componentes del primer vector: " << endl;
	for (int i=0; i < componente_util; i++){
		cout << "Componente" << i+1 << ":" << endl;
		cin >> vector1[i];
	}
	cout << "Introduzca el numero de componentes del segundo vector:" << endl;
	do{
		cin >> componente_util2;
	}while(componente_util2<1 || componente_util2 >30);
	
	cout << "Introduzca las componentes del segundo vector: " << endl;
	for (int i=0; i < componente_util2; i++){
		cout << "Componente" << i+1 << ":" << endl;
		cin >> vector2[i];
	}
	componente_util3 = componente_util + componente_util2;
	
	for(int i = 0; i < componente_util3; i++){			
		if(componente1 < componente_util and componente2 < componente_util2){
			uno_menor_2 = vector1[componente1] <= vector2[componente2];
			if(uno_menor_2){
				vector_resultante[i] = vector1[componente1];
				componente1++;
			}
			else{
				vector_resultante[i] = vector2[componente2];
				componente2++;
			}
		}
		else if(componente1 == componente_util){
			vector_resultante[i] = vector2[componente2];
			componente2++;
		}
		else{
			vector_resultante[i] = vector1[componente1];
			componente1++;
		}
	}
	
	cout << "El vector resultante quedria de la siguiente manera:" << endl;
	for(int i=0; i < componente_util3; i++)
		cout << vector_resultante[i] << ", ";
}
