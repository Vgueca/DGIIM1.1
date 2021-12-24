#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
class Frase{
	private:
		vector<char> cadena;
		
		void Elimina_espaciosiniciales(){
			bool caracter = false;
			do{
				if(cadena[0] == ' '){
					for(int j = 0; j < cadena.size(); j++){
						cadena[j] = cadena [j+1];
					}
					cadena.pop_back();
				}
				else
					caracter = true;	
			}while(!caracter);
		}
		
		void Elimina_espaciosfinales(){
			
			Elimina_espaciosiniciales();
			int contador = 0;
			bool caracter_encontrado = false;
			
			for(int i = cadena.size(); i >= 0 and !caracter_encontrado; i--){
				if(cadena[i] == ' '){
					contador ++;
				}
				else
					caracter_encontrado = true;
			}
			
			do{
				cadena.pop_back();
				contador --;
				
			}while(contador != 0);
		}
		
	public:
		Frase (string frase){
			const int TAMANIO = 200;
			char auxiliar [TAMANIO];
			
			strcpy(auxiliar, frase.c_str());
			
			for (int i = 0; i < strlen(auxiliar); i++)
				cadena.push_back(auxiliar[i]);
		}
		
		void limpiar_frase(){
			Elimina_espaciosfinales();
		}
		
		void mostrar_frase(){
			cout << "La frase es:" << endl;
			for(int i = 0; i < cadena.size(); i++){
				cout << cadena[i] << " ";
			}
		}
	
		
		int contar_palabras(){
			int numero_palabras = 0;
			for( int i = 0; i < cadena.size()-1; i++){
				if( cadena[i] == ' ' && cadena[i+1] != ' ')
					numero_palabras ++;
			}
			return numero_palabras + 1;  
		}
		
		void k_esima(){
			int k;
			int contador = 0;
			bool  condicion = false;
			cout << "Introduzca el valor de la k" << endl;
			cin >> k;
			
			if(contar_palabras() < k)
				cout << "No hay tantas palabras" << endl;
			
			if (k == 1)
				cout << "0" << endl;
			
			for( int i = 0; i < cadena.size() && !condicion; i++){
				if(cadena[i] == ' ' && cadena[i+1] != ' '){
					contador ++;
					if(contador == k-1){
						
						cout << i+1;
						condicion = true;
					}
				}
			}
			
		}
		
		void borrar_palabra(){
			int k;
			int posicion_inicial;
			int caracteres_palabra = 0;
			bool condicion = false;
			int contador = 0;
			
			cout << "Introduce la palabra que deseas borrar" << endl;
			cin >> k;
			
			if ( k > contar_palabras())
				cout << "No es posible" << endl;

					
			for( int i = 0; i < cadena.size() && !condicion; i++){
				if(cadena[i] == ' ' && cadena[i+1] != ' '){
					contador ++;
					if(contador == k-1){
						
						posicion_inicial = i+1;
						condicion = true;	
					}
				}
			}
			
			for(int i = posicion_inicial; i < cadena.size() and cadena[i] != ' '; i++ ){
				caracteres_palabra ++;
			}
			for(int i = 0; i < cadena.size()-caracteres_palabra; i++){
				cadena[i] = cadena[i+caracteres_palabra];
			}
			
			limpiar_frase();
		}
		
		void mover_palabra(){
			int k;
			int posicion_inicial;
			int caracteres_palabra = 0;
			bool condicion = false;
			int contador = 0;
			vector<char>vector_aux;
			
			cout << "Introduce la palabra que deseas mover" << endl;
			cin >> k;
			
			if ( k > contar_palabras())
				cout << "No es posible" << endl;

					
			for( int i = 0; i < cadena.size() && !condicion; i++){
				if(cadena[i] == ' ' && cadena[i+1] != ' '){
					contador ++;
					if(contador == k-1){
						
						posicion_inicial = i+1;
						condicion = true;	
					}
				}
			}
			
			vector_aux[0] = ' ';
			for(int i = posicion_inicial; i < cadena.size() and cadena[i] != ' '; i++ ){
				caracteres_palabra ++;
				vector_aux[i-posicion_inicial+1] = cadena[i];
			}
			for(int i = 0; i < cadena.size()-caracteres_palabra; i++){
				cadena[i] = cadena[i+caracteres_palabra];
				cadena[i+cadena.size() - caracteres_palabra ] = vector_aux[i];
			}
			
			limpiar_frase();
		}
		
		
};

