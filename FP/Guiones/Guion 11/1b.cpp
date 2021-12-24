#include <iostream>
using namespace std;

//Clase
class Recta{
   public:
      double a ;
      double b ;
      double c ;
       
        //funcion para calcular pendiente
        double pendiente(){
        	double pendiente;
         	pendiente = (-1)*a/b;
         	return pendiente;   
        }
      	//funcion para calcular la ordenada
      	double ordenada(double x){
         	double ordenada;
        	 ordenada = (-c - a*x)/b;
        	 return ordenada;
     	 }
      	//funcion para calcular la abcisa
      	double abcisa (double y){
        	 double abcisa;
        	 abcisa = (-c - b*y)/a;
        	 return abcisa;
        }
      	//Constructor
     	Recta( double _a, double _b, double _c){
        	 a = _a;
         	b = _b;    
         	c = _c;
      	}
};



int main (){
   double a1 = 0, a2 = 0 , b1 = 0, b2 = 0 , c1 = 0 , c2 = 0;
   double x,y;
   
   cout << "Introduzca los coeficientes de la primera recta" << endl;
   cin >> a1 >> b1 >> c1;
   cout << "Introduzca los coeficientes de la segunda recta" << endl;
   cin >> a2 >> b2 >> c2;
   Recta primera(a1,b1,c1);
   Recta segunda(a2,b2,c2);
   
   cout << "La pendiente de la primera recta es: " << primera.pendiente() << endl;
   cout << "La pendiente de la segunda recta es: " << segunda.pendiente() << endl;
   
   cout << "Introduzca el valor de la ordenada: " << endl;
   cin >> y;
   cout << "El valor de la abcisa es : " << primera.abcisa(y) << endl;
   
   cout << "Introduzca el valor de la abcisa: " << endl;
   cin >> x;
   cout << "El valor de la ordenada es : " << primera.ordenada(x)<< endl;
   
}
