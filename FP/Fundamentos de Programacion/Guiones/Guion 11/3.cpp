#include <iostream>

using namespace std;

//Clase
class Complejos{
	//Miembros de la funcion a los que solo pueden acceder las funciones de la clase
	private:
		double r;
		double i;
	public:
		//Constructor 
		Complejos(double imaginario, double real){
			r = real;
			i = imaginario;
		}
		//funcion que permite obtener los valores que el usuario desea asignarle a cada objeto
		void Leer_complejo(){
			cout << "Introduzca el valor de la parte real del numero complejo" << endl;
			cin >> r;
			cout << "Introduzca el valor de la parte imaginaria del  numero complejo" << endl;
			cin >> i;
		}
		//funcion que muestra la parte real de un numero complejo
		void mostrar_real(){
			cout << "La parte real del complejo es:" << endl << r << endl;
		}
		//funcion que muestra la parte imaginaria de un numero complejo
		void mostrar_imaginaria(){
			cout << "La parte imaginaria del complejo es:" << endl<<  i << endl;
		}
		
		//funcion que devuelve el valor de la parte real del numero complejo
		double Get_real(){
			return r;
		}
		//funcion que devuelve el valor de la parte imaginaria del numero complejo
		double Get_imaginaria(){
			return i;
		}
		
		//funcion que muestra el numero complejo completo
		void mostrar_complejo(){
			cout << "El numero complejo es: " << r << " + " << i << "i" << endl;
		}
		
		//funcion que suma dos numeros complejos
		void suma(double a, double b, double c, double d){
			double real_total, imaginario_total;
			real_total = a + c;
			imaginario_total = b + d;
			cout << "El valor de la suma es: " << real_total << " + " << imaginario_total << "i" << endl;
		}
		//funcion que resta dos numeros complejos
		void resta(double a, double b, double c, double d){
			double real_total, imaginario_total;
			real_total = a - c;
			imaginario_total = b - d;
			cout << "El valor de la resta es: " << real_total << " + " << imaginario_total << "i" << endl;
		}
		//funcion que multiplica dos numeros complejos
		void multiplicacion(double a, double b, double c, double d){
			double real_total, imaginario_total;
			real_total = a * c - b * d;
			imaginario_total =  b * c + a * d;
			cout << "El valor de la multiplicacion es: " << real_total << " + " << imaginario_total << "i" << endl;
		}
};

int main(){
	Complejos complejo_total(0,0);
	Complejos complejo1(0,0);
	Complejos complejo2(0,0);
	Complejos  suma(0,0);
	Complejos resta(0,0);
	Complejos multiplicacion(0,0);
	
	complejo1.Leer_complejo();
	complejo2.Leer_complejo();


	complejo1.mostrar_real();
	cout << endl;
	complejo1.mostrar_imaginaria();
	

	complejo2.mostrar_real();
	cout << endl;
	complejo2.mostrar_imaginaria();
	
	cout << "Los numeros complejos son: " << endl;
	complejo1.mostrar_complejo();
	complejo2.mostrar_complejo();
	
	/* Para operaciones con dos numeros complejos utilizamos las funciones implementadas en la clase que 
	obtienen cada una de las partes reales e imaginarias de los numeros complejos
	*/
	suma.suma(complejo1.Get_real(),complejo1.Get_imaginaria(),complejo2.Get_real(),complejo2.Get_imaginaria());
	resta.resta(complejo1.Get_real(), complejo1.Get_imaginaria(), complejo2.Get_real(), complejo2.Get_imaginaria());
	multiplicacion.multiplicacion(complejo1.Get_real(), complejo1.Get_imaginaria(), complejo2.Get_real(), complejo2.Get_imaginaria());
	
}
