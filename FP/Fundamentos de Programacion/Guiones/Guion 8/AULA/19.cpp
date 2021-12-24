/*
   Construir un programa que, dada una cadena de caracteres y dos posiciones dentro de la ca-
dena, x e y, devuelva otra cadena con los caracteres comprendidos entre las componentes x e
y (inclusive).
*/

#include <iostream>
#include <cstring>

using namespace std;
 
int main(){
   const int LONGITUD_MAXIMA=30;
   char cadena[LONGITUD_MAXIMA];
   int posicion_inicial, posicion_final, componentes_utiles;
   
   cout << "Introduce la longitud de la cadena de caracteres" << endl;
   cin >> componentes_utiles;
   
   cout << "Introduce los caracteres de la cadena" << endl;
   
   for(int i = 0; i < componentes_utiles; i++){
      cout << "Componente " << i+1 << ": " << endl;  
      cin >> cadena[i];
   }
   
   cout << "Introduce la posicion inicial del intervalo de caracteres que quieres mostrar " << endl;
   cin >> posicion_inicial;
   
   cout << "Introduce la posicion final del intervalo de caracteres que quieres mostrar " << endl;
   cin >> posicion_final;
   
   for(int j = posicion_inicial-1; j<=posicion_final-1; j++){
      cout << cadena [j] << " ";
   }
   
   
}
