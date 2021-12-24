

#include <iostream>
#include <vector>

using namespace std;

const int FILAS_MAX = 30;
const int COLUMNAS_MAX = 30;
class Liga{
	public:
		char matriz_liga[FILAS_MAX][COLUMNAS_MAX];	
		int num_equipos;						
		
		vector<int> CalculoPuntos(){
			vector<int> puntuacion_final;
			int contador = 0;
			int suma;
			
			while (contador < num_equipos){
				suma = 0;

				for (int i = 0; i < num_equipos; i++){
					switch(matriz_liga[contador][i]){
						case '1':
							suma += 3;
							break;
							
						case '2':
							suma += 0;
							break;
						
						case 'X':
							suma += 1;
							break;		
					}
				}
				
				for (int i = 0; i < num_equipos; i++){
					switch(matriz_liga[i][contador]){
						case '1':
							suma += 0;
							break;
						
						case '2':
							suma += 3;
							break;
							
						case 'X':
							suma += 1;
							break;
					}
				}
				
				puntuacion_final.push_back(suma);
				contador ++;		
			}
			
			return puntuacion_final;
			
		}
		
		void Mostrar(){
			for (int i= 0; i < num_equipos; i++){
				for (int j = 0; j < num_equipos; j++){
					if (i != j)
						cout << matriz_liga[i][j] << " ";
					
					else 
						cout << 'I' << " ";
					
				}
				cout << endl;
			}	
		}
		
		void MostrarResultados(vector<int> puntuacion){
			for (int i = 0; i < puntuacion.size(); i++){
				cout << "Equipo " << i + 1 << ": " << puntuacion[i] << " punto(s)." << endl;
			}
		}
};

class Liga{
	public:
		

		Liga Lee(){
			Liga liga1;
			char elemento;
			int num_equipos;
			
			cin >> num_equipos;
			
			for (int i= 0; i < num_equipos; i++){
				for (int j = 0; j < num_equipos; j++){
					if (i != j){
						cin >> elemento;
						liga1.matriz_liga[i][j] = elemento;
					}
						
							
				}
			}
			
			liga1.num_equipos = num_equipos;
			
			return liga1;
		}
};

int main(){
	Liga liga1;
	Liga liga_oficial;
	vector <int> resultados;
	
	liga_oficial = liga1.Lee();
	liga_oficial.Mostrar();
	liga_oficial.MostrarResultados(liga_oficial.CalculoPuntos());
	
	
}
