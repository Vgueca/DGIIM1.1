#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Identificador{
	private: 
		string cadena1; 
		
	public:
		Identificador (){}
		
		Identificador(string cadena){
			cadena1 = cadena;
		}
		
		bool EsIgual_a(Identificador cadena2){
			if (cadena1.compare(cadena2.cadena1) == 0)
				return true;
				
			else
				return false;
		}
		
		bool EsMenor_que(Identificador cadena2){
			if (cadena1.compare(cadena2.cadena1) < 0)
				return true;
			
			else
				return false;
		}
		
		string DevolverCadena(){
			return cadena1;
		}
	
};

class Fecha{
	private:
		int dia,	
			mes,	
			anio;	
	public:
		
		void SetDiaMesAnio(int el_dia, int el_mes, int el_anio){
			bool es_bisiesto;
			bool es_fecha_correcta;
			const int anio_inferior = 1900;
			const int anio_superior = 2500;
			const int dias_por_mes[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
				

			es_fecha_correcta = 1 <= el_dia &&
								el_dia <= dias_por_mes[el_mes - 1] &&
								1 <= el_mes && el_mes <= 12 &&
								anio_inferior <= el_anio &&
								el_anio <= anio_superior;
								
								
			es_bisiesto = (el_anio % 4 == 0 && el_anio % 100 != 0) ||
							el_anio % 400 == 0;

			if (!es_fecha_correcta && el_mes == 2 && el_dia == 29 && es_bisiesto)
				es_fecha_correcta = true;

			if (es_fecha_correcta){
				dia = el_dia;
				mes = el_mes;
				anio = el_anio;
			}
		}
		
		int Dia(){
			return dia;
		}
	
		int Mes(){
			return mes;
		}
	
		int Anio(){
			return anio;
		}
		

		bool EsIgual_a(Fecha fecha2){
			return anio == fecha2.anio && mes == fecha2.mes
					&& dia == fecha2.dia;
		}	
		
		bool EsMenor_que(Fecha fecha2){
			if (anio < fecha2.anio)
				return true;
			
			else if (anio > fecha2.anio)
				return false;
			
			else{
				if (mes < fecha2.mes)
					return true;
			
				else if (mes > fecha2.mes)
					return false;
				
				else{
					if (dia < fecha2.dia)
						return true;
					
					else if (dia > fecha2.dia)
						return false;
					
					else
						return false;
				}
			}
		}
};

class Libro{
	private:
		Identificador identi;	
		Fecha fecha_publi;		
		
	public:
		Libro(){}
		
		Libro(Identificador a, Fecha b){
			identi = a;
			fecha_publi = b;
		}
		
		bool EsIgual_a(Libro libro2){
			return identi.EsIgual_a(libro2.identi) &&
					fecha_publi.EsIgual_a(libro2.fecha_publi);
		}
		
		bool EsMenor_que(Libro libro2){
			return identi.EsMenor_que(libro2.identi) &&
					fecha_publi.EsMenor_que(libro2.fecha_publi);
		}
		

		Identificador DevolverIdentificador(){
			return identi;
		}
		

		Fecha DevolverFecha(){
			return fecha_publi;
		}
};


class Biblioteca{
	private:
		vector<Libro> biblio;
		
		void Ordena(){
			Identificador i_minimo;
			Fecha minimo;
			Libro intercambia;
			int posicion_minimo;
			
			for (int i = 0; i < biblio.size(); i++){
				minimo = biblio[i].DevolverFecha();
				i_minimo = biblio[i].DevolverIdentificador();
				posicion_minimo = i;
				
				for (int j = i + 1; j < biblio.size(); j++ ){
					if (biblio[j].DevolverFecha().EsMenor_que(minimo)){
						minimo = biblio[j].DevolverFecha();
						posicion_minimo = j;
					}
					
					if (biblio[j].DevolverFecha().EsIgual_a(minimo)){
						if (biblio[j].DevolverIdentificador().EsMenor_que(i_minimo)){
							i_minimo = biblio[j].DevolverIdentificador();
							posicion_minimo = j;
						}
					}
				}
				
				intercambia = biblio[i];
				biblio[i] = biblio[posicion_minimo];
				biblio[posicion_minimo] = intercambia;
				
			}
		}
			
			void OrdenaMayor(){
				Identificador i_maximo;
				Fecha maximo;
				Libro intercambia;
				int posicion_maximo;
			
				for (int i = 0; i < biblio.size(); i++){
					maximo = biblio[i].DevolverFecha();
					i_maximo = biblio[i].DevolverIdentificador();
					posicion_maximo = i;
					
					for (int j = i + 1; j < biblio.size(); j++ ){
						if (!biblio[j].DevolverFecha().EsMenor_que(maximo)){
							maximo = biblio[j].DevolverFecha();
							posicion_maximo = j;
						}
						
						if (biblio[j].DevolverFecha().EsIgual_a(maximo)){
							if(!biblio[j].DevolverIdentificador().EsMenor_que(i_maximo)){
								i_maximo = biblio[j].DevolverIdentificador();
								posicion_maximo = j;
							}
						}
					}
				
					intercambia = biblio[i];
					biblio[i] = biblio[posicion_maximo];
					biblio[posicion_maximo] = intercambia;
				}
			}
		
	public:
		
		Biblioteca(){}
	
		void SetBiblioteca(Libro libro1){
			biblio.push_back(libro1);
			
			OrdenaMayor();
		}
		
		void RecuperarDatos(string identificador){
			int longitud_a_recorrer = biblio.size();
			Fecha fecha_a_devolver;
			Identificador identificador_a_devolver;
			
			for (int i = 0; i < longitud_a_recorrer; i++){
				if (biblio[i].DevolverIdentificador().DevolverCadena() == identificador){
					cout << identificador << endl;
					cout << biblio[i].DevolverFecha().Dia() << "/" <<
							biblio[i].DevolverFecha().Mes() << "/" <<
							biblio[i].DevolverFecha().Anio() << endl;
				}		
			}
		}
		
		vector<Libro> DevolverBiblioteca(){
			return biblio;
		}
};

class LectorBiblioteca{
	public:
		void LeerDatos(Biblioteca& biblioteca1){
			string elemento;
			int dia, mes, anio;
			Fecha fecha1;
			
			cin >> elemento;
			
			while (elemento != "FFFF"){
				Identificador identi(elemento);
				cin >> dia >> mes >> anio;
				fecha1.SetDiaMesAnio(dia, mes, anio);
				Libro libro_a_aniadir(identi, fecha1);
				biblioteca1.SetBiblioteca(libro_a_aniadir);
				
				cin >> elemento;
			}
		}
};

class ImpresorBiblioteca{
	public:
	
		void ImprimeBiblioteca(Biblioteca biblioteca1){
			vector<Libro> vector_a_mostrar = biblioteca1.DevolverBiblioteca();
			
			for (int i = 0; i < vector_a_mostrar.size(); i++){
				cout << vector_a_mostrar[i].DevolverIdentificador().DevolverCadena() << " ";
				cout << vector_a_mostrar[i].DevolverFecha().Dia() << " " << 
						vector_a_mostrar[i].DevolverFecha().Mes() << " " <<
						vector_a_mostrar[i].DevolverFecha().Anio() << endl;
			}
				
		}
};

int main(){
	LectorBiblioteca lector1;
	Biblioteca biblioteca1;
	ImpresorBiblioteca a;
	
	lector1.LeerDatos(biblioteca1);
	a.ImprimeBiblioteca(biblioteca1);
	
}


