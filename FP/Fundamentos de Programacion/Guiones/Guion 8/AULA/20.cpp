/*
	Construir un programa que inserte una cadena de caracteres dentro de otra cadena,  en una
determinada posicion.  Por ejemplo, insertar la cadena"caracola"en la posicion 2 de lacadena
hola, resultaria la segunda cadena con el valor hocaracolala.

*/


#include <iostream>
#include <cstring>

using namespace std;
 
int main(){
   const int LONGITUD_MAXIMA=30;
   char cadena[LONGITUD_MAXIMA], cadena2[LONGITUD_MAXIMA];
   int posicion, componentes_utiles1, componentes_utiles2;
   
   cout << "Introduce la longitud de la primera cadena de caracteres" << endl;
   cin >> componentes_utiles1;
   
   cout << "Introduce los caracteres de la cadena" << endl;
   
   for(int i = 0; i < componentes_utiles1; i++){
      cout << "Componente " << i+1 << ": " << endl;  
      cin >> cadena[i];
   }
   
   cout << "Introduce la posicion en la que quieres introducir la nueva cadena de caracteres" << endl;
   cin >> posicion;
   
   
   
   cout << "Introduce la longitud de la segunda cadena de caracteres" << endl;
   cin >> componentes_utiles2;
   
   for(int i = 0; i < componentes_utiles2; i++){
      cout << "Componente " << i+1 << ": " << endl;  
      cin >> cadena2[i];
   }
   
   for (int j = 0; j < componentes_utiles2; j++){
   		cadena[componentes_utiles2 + posicion + j] = cadena [ posicion + j];
   		cadena[posicion + j] = cadena2 [j];
   }
   
   cout << "La cadena de caracteres creada es : " << endl;
   for(int t=0; t< componentes_utiles1+componentes_utiles2; t++){
      cout << cadena[t] << " ";  
   }
}
