#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

class Examen{
	private:
		string asignatura;
		vector<string>preguntas;
		vector<char>respuestas;
		
	public: 
		Examen(string nombre){
			asignatura = nombre;
			preguntas.clear();
			respuestas.clear();
		}
	

		
		void introducir_preguntas(){
			string pregunta;
			char respuesta;
			int num_preg;
			
			cout << "Introduce el numero de preguntas que desea tener" << endl;
			cin >> num_preg;
			
			cout << "Introduce las preguntas: ";
			for (int i = 0; i < num_preg + 1 ; i++){
				getline(cin, pregunta);
				preguntas.push_back(pregunta);	
			}
			
			cout << "Introduce las respuestas: ";
			for (int i = 0; i < num_preg; i++){
				cin >> respuesta;
				respuestas.push_back(respuesta);
			}	
		}
		
		
		void num_preguntas(){
			cout << "El numero de preguntas del examen es: " << endl << preguntas.size();
		}
		
		void get_pregunta(){
			int k;
			
			cout << "Introduzca el numero de la pregunta que desea saber" << endl;
			cin >> k;
			cout << "La pregunta es: " << endl <<  preguntas[k-1];
		}
		
		void get_respuesta(){
			int k;
			cout << "Introduzca el numero de la respuesta que desea saber" << endl;
			cin >> k;
			
			cout << "La respuesta es la siguiente: " << endl << respuestas[k-1];
		}
		
	
	
};

void leer_asignatura(string asignatura){

	cout << "Introduzca el nombre de la asignatura" << endl;
	cin >> asignatura; 
	
}
int main(){
	string asignatura;
	
	leer_asignatura(asignatura);
	
	Examen examen(asignatura);
	
	examen.introducir_preguntas();
	
	examen.get_pregunta();
	
	examen.get_respuesta();
	
}
