//Nombre: Juan Valentín Guerrero Cano
//Problema: matriz

#include <iostream>

using namespace std;

const int TAMANIO  = 30;

int main(){
   char matriz[TAMANIO][TAMANIO];
   int num_filas, num_columnas;
   
   int contador_inicial_h = 1;
   int contador_inicial_v = 1;
   
   int contador_v = 1;
   int contador_h = 1;
   
   char orientacion = 'h';
   char orientacion2 = 'v';
   
   int fila_vertical = -1;
   int columna_vertical = -1;
   
   int fila_horizontal = -1 ;
   int columna_horizontal = -1;
   
   bool es_punto = false;
   
   
   cout << "Introduce el numero de filas que desea que tenga su matriz " << endl;
   cin >> num_filas;
   
   cout << "Introduce el numero de columnas que desea que tenga su matriz " << endl;
   cin >> num_columnas;
   
   cout << "Introduce las componentes de la matriz o ('X ' o '.') " << endl;
   for(int i = 0; i < num_filas; i++){
      for(int j = 0; j < num_columnas; j++){
         cout << "Componente " << i+1 << ", " << j+1 << endl;
         cin >> matriz[i][j];
      }
   }
   
   //Bucle  anidado para recorrer la matriz
   for(int i = 0; i < num_filas; i++){
      for(int j = 0; j < num_columnas; j++){
         
         
         if(matriz[i][j] == '.'){
            
            //Bucle para comprobar si los consecutivos horizontalmente a dicho valor que es un punto, también lo son, en cuyo caso el contador se aumente y la posición de la secuencia varía
            for(int z = j+1; z < num_columnas && !es_punto; z++){
               if(matriz[i][z] == '.'){
                  contador_h ++;
                  
                  if(contador_inicial_h < contador_h){
                     fila_horizontal = i;
                     columna_horizontal = j;
                     contador_inicial_h = contador_h;
                  }
                  if(contador_inicial_h == contador_h && i < fila_horizontal){
                     fila_horizontal = i;
                  }
               }
               else
                  es_punto = false;   
            }
            es_punto = true;
        
            //Bucle para comprobar si los consecutivos verticalmente a dicho valor que es un punto, también lo son, en cuyo caso el contador se aumente y la posición de la secuencia varía
            for(int z = i+1; z < num_columnas && !es_punto; z++){
               if(matriz[z][j] == '.' ){
                  contador_v ++;
                  
                  if(contador_inicial_v < contador_v){
                     fila_vertical = i;
                     columna_vertical = j;
                     contador_inicial_v = contador_v;
                  }
                  if(contador_inicial_v == contador_v && j < columna_vertical){
                     fila_horizontal = j;
                  }
               }
               else 
                  es_punto = false;    
            }
            es_punto = true;
         }
      }
   }
   
   if(contador_inicial_v > contador_inicial_h){
      cout << orientacion2 << endl;
      cout << "Que comienza en la fila: " << fila_vertical << " y columna : "<< columna_vertical;
   }
   else{
      cout << orientacion << endl;
      cout << "Que comienza en la fila: " << fila_horizontal << " y columna : "<< columna_horizontal;
   }
}
