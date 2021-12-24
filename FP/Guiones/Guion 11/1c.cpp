#include <iostream>
using namespace std;

//Clase
class Recta{
	private:
		double a ;
      	double b ;
      	double c ;
		
    public:
    	//Constructores
    	Recta (){
    		a = 0;
    		b = 0;
    		c = 0;
		}
    	Recta( double _a, double _b, double _c){
        	a = _a;
        	b = _b;    
        	c = _c;
    	}
    	//Set datos
    	void Set_a(double _a){
    		a=_a;
		}
		void Set_b(double _b){
    		b=_b;
		}
		void Set_c(double _c){
    		c=_c;
		}
		//Funcion para calcular la pendiente de la recta
    	double pendiente(){
        	double pendiente;
        	pendiente = (-1)*a/b;
        	return pendiente;   
    	}
      	//Funcion para calcular la ordenada a partir de un valor de abcisas
    	double ordenada(double x){
        	double ordenada;
        	ordenada = (-c - a*x)/b;
        	return ordenada;
    	}
      	//Funcion para calcular la abcisa a partir de un valor de ordenada
    	double abcisa (double y){
        	double abcisa;
        	abcisa = (-c - b*y)/a;
        	return abcisa;
        }
};

//Funcion que asigna los coeficientes de la ecuacion de la recta a los valores de una clase
void Leer_coeficientes(Recta& recta ){
	double coef_a, coef_b, coef_c;   
	
    cout << "Introduzca el primer coeficiente de la recta" << endl;
    cin >> coef_a;
    recta.Set_a(coef_a);
    cout << "Introduzca el segundo coeficiente de la recta" << endl;
    cin >> coef_b;
    recta.Set_b(coef_b);
    cout << "Introduzca el tercer coeficiente de la recta" << endl;
    cin >> coef_c;
    recta.Set_c(coef_c);
}



int main (){
   double x,y;
   Recta primera(1,2,3);
   Recta segunda(1,2,3);
   
   Leer_coeficientes(primera);
   Leer_coeficientes(segunda);
   
   cout << "La pendiente de la primera recta es: " << primera.pendiente() << endl;
   cout << "La pendiente de la segunda recta es: " << segunda.pendiente() << endl;
   
   cout << "Introduzca el valor de la ordenada: " << endl;
   cin >> y;
   cout << "El valor de la abcisa es : " << primera.abcisa(y) << endl;
   
   cout << "Introduzca el valor de la abcisa: " << endl;
   cin >> x;
   cout << "El valor de la ordenada es : " << primera.ordenada(x)<< endl;
   
}
