#include <iostream>

using namespace std;

const int MAXIMO = 30;

class tresenralla {
	private:
		int matriz[MAXIMO][MAXIMO];
		int tamanio;
		int linea;
		
	public:
	tresenralla(){
		for(int i = 0; i < MAXIMO; i++){
			for(int j = 0; j < MAXIMO; j++){
				matriz[i][j] = 0;
			}
		}
		tamanio = 0;
		linea = 0;
	}
	
	void leer_juego(){
		cout << "Introduce el tamanio del tablero cuadrado" << endl;
		cin >> tamanio;
		cout << "Introduce el numero de fichas que conformaran una linea para que el jugador gane" << endl;
		cin >> linea;
		
	}
	
	void mostrar_tablero(){
		for(int i = 0; i < tamanio; i++){
			for(int j = 0; j < tamanio; j++){
				cout << matriz[i][j] << " ";
			}
			cout << endl;
		}
	}
	
	void colocar_ficha(){
		int jugador;
		int fila, columna;
		
		
		cout << "Introduce el jugador al que le toca colocar su ficha (1 o 2)" << endl;
		cin >> jugador;
		
		do{
		cout << "Introduce la fila y columna donde quiere mover la ficha" << endl;
		cin >> fila >> columna;
		
		}while(fila > tamanio || columna > tamanio || ((matriz[fila-1][columna-1] != jugador) && (matriz[fila-1][columna-1] != 0)));
		
		matriz[fila-1][columna-1] = jugador;
	}
	
	
	bool analizar_jugador1(){
		int contador_jugador1 = 1;
		bool linea_conseguida1 = false;
		bool no_uno = false;
		
		for(int i = 0; i < tamanio && !linea_conseguida1; i++){
			for(int j = 0; j < tamanio && !linea_conseguida1 ; j++){
				
				if(matriz[i][j] == 1){
					
					//Horizontal
					//Horizontal hacia la derecha 
					for(int z = 1; z < linea && !no_uno; z++){
						
						if(matriz[i][j+z] == 1)
							contador_jugador1 ++;
						else
							no_uno = true;
					}
					no_uno = false;
					//Horizontal hacia la izquierda
					for(int z = 1; z < linea && !no_uno; z++){
						
						if(matriz[i][j-z] == 1)
							contador_jugador1 ++;
						else
							no_uno = true;
					}
					no_uno = false;
					
					//Linea
					if(contador_jugador1 >= linea)
						linea_conseguida1 = true;
					else
						contador_jugador1 = 1;
					
					
					//Vertical
					//Vertical hacia abajo
					for(int z = 1; z < linea && !linea_conseguida1 && !no_uno; z++){
						
						if(matriz[i+z][j] == 1)
							contador_jugador1 ++;
						else
							no_uno = true;
					}
					no_uno = false;
					//Vertical hacia arriba
					for(int z = 1; z < linea && !linea_conseguida1 && !no_uno; z++){
						
						if(matriz[i-z][j] == 1)
							contador_jugador1 ++;
						else
							no_uno = true;
					}
					no_uno = false;
					
					//Linea 
					if(contador_jugador1 >= linea)
						linea_conseguida1 = true;
					else
						contador_jugador1 = 1;
						
					//Diagonal
					for(int z = 1; z < linea && !linea_conseguida1 && !no_uno; z++){
						
						if(matriz[i+z][j+z] == 1)
							contador_jugador1 ++;
						else
							no_uno = true;
					}
					no_uno = false;
					
					
					for(int z = 1; z < linea && !linea_conseguida1 && !no_uno; z++){
						
						if(matriz[i-z][j-z] == 1)
							contador_jugador1 ++;
						else
							no_uno = true;
					}
					
					//Linea
					if(contador_jugador1 >= linea)
						linea_conseguida1 = true;
					else
						contador_jugador1 = 1;
						
				}
			}	
		}
		
		return linea_conseguida1;
	}
	
	bool analizar_jugador2(){
		int contador_jugador2 = 1;
		bool linea_conseguida2 = false;
		bool no_dos = false;
		
		for(int i = 0; i < tamanio && !linea_conseguida2; i++){
			for(int j = 0; j < tamanio && !linea_conseguida2; j++){
				
				if(matriz[i][j] == 2){
					
					//Horizontal
					//Horizontal hacia la derecha 
					for(int z = 1; z < linea && !no_dos; z++){
						
						if(matriz[i][j+z] == 2)
							contador_jugador2 ++;
						else
							no_dos = true;
					}
					no_dos = false;
					//Horizontal hacia la izquierda
					for(int z = 1; z < linea && !no_dos; z++){
						
						if(matriz[i][j-z] == 2)
							contador_jugador2 ++;
						else
							no_dos = true;
					}
					no_dos = false;
					
					//Linea
					if(contador_jugador2 >= linea)
						linea_conseguida2 = true;
					else
						contador_jugador2 = 1;
					
					
					//Vertical
					//Vertical hacia abajo
					for(int z = 1; z < linea && !linea_conseguida2 && !no_dos; z++){
						
						if(matriz[i+z][j] == 2)
							contador_jugador2 ++;
						else
							no_dos = true;
					}
					no_dos = false;
					//Vertical hacia arriba
					for(int z = 1; z < linea && !linea_conseguida2 && !no_dos; z++){
						
						if(matriz[i-z][j] == 2)
							contador_jugador2 ++;
						else
							no_dos = true;
					}
					no_dos = false;
					//Linea 
					if(contador_jugador2 >= linea)
						linea_conseguida2 = true;
					else
						contador_jugador2 = 1;
						
					//Diagonal			
					for(int z = 1; z < linea && !linea_conseguida2 && !no_dos; z++){
						
						if(matriz[i+z][j+z] == 2)
							contador_jugador2 ++;
						else
							no_dos = true;
					}
					no_dos = false;
					
					for(int z = 1; z < linea && !linea_conseguida2 && !no_dos; z++){
						
						if(matriz[i-z][j-z] == 1)
							contador_jugador2 ++;
						else
							no_dos = true;
					}
					
					//Linea
					if(contador_jugador2 >= linea)
						linea_conseguida2 = true;
					else
						contador_jugador2 = 1;
						
				}
			}	
		}
		
		return linea_conseguida2;
	}
	
	bool analizar_turno(){
		bool turno_finalizado = false ;
		
		if(analizar_jugador1() || analizar_jugador2())
			turno_finalizado = true;
		
		return turno_finalizado;
	}
	
	void ganador (){
		if(analizar_jugador1())
			cout << "El jugador 1 es el ganador" << endl;
			
		if(analizar_jugador2())
			cout << "El jugador 2 es el ganador" << endl;
	}
	
};


int main (){
	tresenralla partida;
	
	partida.leer_juego();
	
	partida.mostrar_tablero();
	
	do{
		partida.colocar_ficha();
		
		partida.mostrar_tablero();
		
	}while( !partida.analizar_turno() );
	
	partida.ganador();
}
