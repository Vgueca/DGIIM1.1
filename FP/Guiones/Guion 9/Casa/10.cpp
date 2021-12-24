
#include <iostream>

using namespace std;

struct Permutacion {
	int vector[100], resultado[100], auxiliar[100], limite;
};

int main() {
	Permutacion vector, permutacion;
	int permutacion_correcta[100], aplicacion[100], auxiliar[100], resultado[100] ;
	bool correcto, bucle = true;
	int potencia, posicion, contador = 0;
	
	do{
		cout << "Introduce el numero de elementos de su  vector: " << endl;
		cin >> vector.limite;
	}while(vector.limite > 100 or vector.limite < 1);
	
	cout << endl << "Introduce los elementos de su vector : " << endl;
	for(int i = 0; i < vector.limite; i++){
		cout << "Componente " << i+1 << ":" << endl;
		cin >> vector.vector[i];
	}

	permutacion.limite = vector.limite;
	
	while(bucle){
		cout << endl << "Introduce el vector permutado: " << endl;
		
		for(int i = 0; i < permutacion.limite; i++){
			cout << "Componente " << i+1 << ":" << endl;
			cin >> permutacion.vector[i];
		}

		for(int i = 0; i < vector.limite; i++){
			correcto = false;
			for(int j = 0; j < permutacion.limite; j++){
				if(vector.vector[i] == permutacion.vector[j])
					correcto = true;
					permutacion_correcta[contador++] = correcto;
			}
		}
		for (int i = 0; i < contador and bucle; i++){
			if(permutacion_correcta[i] == false){
				bucle = false;
			}
			else
				bucle = true;
		}
		cout << "La permutacion no es correcta" << endl;
	}
	if (bucle)
		cout << "La permutacion es correcta" << endl;
		
	
	for(int i = 0; i < vector.limite; i++){
		for(int j = 0; j < permutacion.limite; j++){
			if(vector.vector[i] == permutacion.vector[j])
				aplicacion[i] = j;
		}
	}
	
	do{
		cout << endl << "Introduce el grado de la potencia: ";
		cin >> potencia;
	}while(potencia <= 1);

	for(int i = 0; i < permutacion.limite; i++)
		auxiliar[i] = permutacion.vector[i];
	for(int i = 0; i < potencia - 1; i++){
		for(int j = 0; j < permutacion.limite; j++){
			posicion = aplicacion[j];
			resultado[posicion] = auxiliar[j];
		}
		for(int z = 0; z < permutacion.limite; z++)
			auxiliar[z] = resultado[z]; 
}
	cout << endl;
	for(int i = 0; i < permutacion.limite; i++)
		cout << resultado[i] << " ";
	
}

