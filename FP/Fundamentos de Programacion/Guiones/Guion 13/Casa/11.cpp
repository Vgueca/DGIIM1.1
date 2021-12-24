#include <iostream>

using namespace std;

const int MAXIMO = 30;

class Bicicleta{
	private:
		char cadena[MAXIMO];
		int longitud;
		
	public:
		void leer_cadena(){
			
			bool arroba = false;
			
			cout << "Introduce los caracteres de la cadena separados por un espacio e introduzca un arroba y un salto de linea para finalizar la cadena" << endl;
			for(int i = 0; i < 30 && !arroba; i++){
				cin >> cadena[i];
				if(cadena[i] == '@'){
					longitud = i;
					arroba = true;
				}		
			}
		}
		
		bool riesgo_ruptura(int num_estrella, int num_pinon){
			
			bool riesgo_ruptura = false;
			if( (num_estrella == 1 && num_pinon >= 5) || (num_estrella == 2 && (num_pinon == 1 || num_pinon == 7) ) || (num_estrella == 3 && num_pinon <= 3) )
				riesgo_ruptura = true;
				return riesgo_ruptura;
		}
		
		void analizar_cadena(){
			
			int num_estrella = 1;
			int num_pinon = 1;
			for(int i = 0; i < longitud; i++){
				
				
				if(cadena[i] == 'E' or cadena[i] == 'e'){
					if( cadena[i+1] == 'S' or cadena[i+1] == 's'){
						num_estrella ++;
						
						if(riesgo_ruptura(num_estrella, num_pinon))
							num_estrella --;
							
						if(num_estrella > 3)
							num_estrella = 3;
					}
					
					else{
						num_estrella --;
						if(riesgo_ruptura(num_estrella, num_pinon))
							num_estrella ++;
							
						if(num_estrella < 1)
							num_estrella = 1;
					}
				}
				
				if(cadena[i] == 'P' or cadena[i] == 'p'){
					if( cadena[i+1] == 'S' or cadena[i+1] == 's'){
						num_pinon ++;
						
						if(riesgo_ruptura(num_estrella, num_pinon))
							num_estrella ++;
							
						if(num_pinon > 7)
							num_pinon = 7;
					}
					else if(cadena[i+1] == 'B' or cadena[i+1] == 'b'){
						num_pinon --;
						
						if(riesgo_ruptura(num_estrella, num_pinon))
							num_estrella ++;
							
						if(num_pinon < 1)
							num_pinon = 1;
					}
					else if(cadena[i+1] == 'T' or cadena[i+1] == 't'){
						num_pinon = num_pinon + 2;
						
						if(riesgo_ruptura(num_estrella, num_pinon))
							num_estrella = num_estrella - 2;
							
						if(num_pinon > 7)
							num_pinon = 7;
					}
					else{
						num_pinon = num_pinon - 2;
						
						if(riesgo_ruptura(num_estrella, num_pinon))
							num_estrella = num_estrella + 2;
							
						if (num_pinon < 1)
							num_pinon = 1;
					}
				}
			
			}
			
			cout << "La estrella esta en la marcha " << num_estrella << " y el pinion esta en la marcha " << num_pinon << endl;
		}
	
};

int main(){
	Bicicleta secuencia;
	
	secuencia.leer_cadena();
	secuencia.analizar_cadena();
}


