#include <iostream>

#include <vector>

using namespace std;

class Conjunto{
	private:
		vector<int>elementos;
		
		void quitar_repetidos(){
			
			for(int i = 0; i < elementos.size(); i++){
				for (int j = 0; j < elementos.size(); j++){
					if(j!=i and elementos[i] == elementos[j]){
						for(int z = j+1 ; z < elementos.size() ; z++){
							elementos[z-1] = elementos [z];
						}
						elementos.pop_back();
					}
				}
			}
			
		}
		
		void ordenar_conjunto(){
			quitar_repetidos();
			
			int auxiliar;
			
			for(int i = 0; i < elementos.size(); i++){
				for(int j = i+1; j < elementos.size(); j++){
					if(elementos[i] > elementos[j]){
						
						auxiliar = elementos[i];
						elementos[i] = elementos[j];
						elementos[j] = auxiliar;	
					}
				}
			}
				
		}
		
	public:
		
		void Limpiar_conjunto(){
			ordenar_conjunto();
		}
		
		void obtener_conjunto(){
			int i = 0;
			int valor;
			
			cout << "Introduzca el vector y finalice escribiendo a" << endl;
			do{
				cout << "Componente " << i+1 << endl;
				cin >> valor;
				
				if(valor != -1)
					elementos.push_back(valor);
				i++;
			}while(valor != -1);
	
		}
		
		void encontrar_elemento(){
			int elemento;
			cout << "Inserte el elemento a buscar" << endl;
			cin >> elemento;
			
			for (int i = 0; i < elementos.size(); i++){
				if(elementos[i] == elemento)
					cout << "El elemento se ha encontrado  en el conjunto" << endl;
			}
		}
		
		void  aniadir_elemento(){
			int elemento;
			cout << "Inserte el elemento a aniadir" << endl;
			cin >> elemento;
			
			elementos.push_back(elemento);
			
			Limpiar_conjunto();
		}
		
		void eliminar_elemento(){
			int elemento, auxiliar;
			bool encontrado = false;
			
			do{
				cout << "Inserte el elemento del conjunto a eliminar" << endl;
				cin >> elemento;
			
				for(int i = 0; i < elementos.size(); i++){
					if(elemento == elementos[i])
						for(int j = i; j < elementos.size(); j++){
							auxiliar = elementos[j];
							elementos[j] = elementos[j+1];
							elementos[j+1] = auxiliar;
						}
						encontrado = true;
				}
				
			}while(!encontrado);
			
			elementos.pop_back();
		}
		
		void unio(Conjunto conjunto2, Conjunto conjunto1){
			for(int i=0; i < conjunto1.elementos.size(); i++){
				elementos.push_back(conjunto1.elementos[i]);
			}
			
			for (int j=0; j < conjunto2.elementos.size(); j++){
				elementos.push_back(conjunto2.elementos[j]);
			}
			
			Limpiar_conjunto();
			
		}
		void interseccion(Conjunto conjunto1, Conjunto conjunto2){
			for(int i = 0; i < conjunto1.elementos.size(); i++){
				for(int j = 0; j < conjunto2.elementos.size(); j++){
					
					if(conjunto1.elementos[i] == conjunto2.elementos[j]){
						elementos.push_back(conjunto1.elementos[i]);
					}
				}
			}
			Limpiar_conjunto();
		}
		
		void mostrar_conjunto(){
			cout << "El conjunto es el siguiente :" << endl;
			for(int i = 0; i < elementos.size(); i++){
				cout << elementos[i] << " ";
			}
			
			cout << endl;
		}
		
		
};

int main(){
	Conjunto conjunto1;
	Conjunto conjunto2;
	
	Conjunto conjunto_union;
	Conjunto conjunto_interseccion;
	
	conjunto1.obtener_conjunto();
	
	conjunto1.Limpiar_conjunto();

	conjunto1.mostrar_conjunto();
	
	conjunto1.encontrar_elemento();
	
	conjunto1.aniadir_elemento();
	conjunto1.mostrar_conjunto();
	
	conjunto1.eliminar_elemento();
	conjunto1.mostrar_conjunto();
	
	conjunto2.obtener_conjunto();
	conjunto2.Limpiar_conjunto();
	conjunto2.mostrar_conjunto();
	
	conjunto_union.unio(conjunto2,conjunto1);
	conjunto_union.mostrar_conjunto();
	
	conjunto_interseccion.interseccion(conjunto1,conjunto2);
	conjunto_interseccion.mostrar_conjunto();
	
}
