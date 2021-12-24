#include <iostream>
using namespace std;

//Clase 
class Recta{
   public:
      double a ;
      double b ;
      double c ;   
      //Constructor
      Recta( double _a, double _b, double _c){
         a = _a;
         b = _b;    
         c = _c;
      }
};

int main(){
   double a1, b1 ,c1, a2, b2, c2;
   double pendiente1, pendiente2;
   
   cout << "Introduzca los coeficientes de la primera recta" << endl;
   cin >> a1 >> b1 >> c1;
   
   cout << "Introduzca los coeficientes de la segunda recta" << endl;
   cin >> a2 >> b2 >> c2;
   Recta primera (a1,b1,c1);
   Recta segunda (a2,b2,c2);
   
   pendiente1 = (-1)* primera.a / primera.b;
   
   pendiente2= (-1)* segunda.a / segunda.b,
   
   cout << pendiente1 << endl << pendiente2;
   
   
}

