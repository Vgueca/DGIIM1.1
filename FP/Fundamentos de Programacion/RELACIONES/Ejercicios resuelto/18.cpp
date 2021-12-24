#include <iostream>
#include <cmath>



//Clase de numeros racionales

class Racionales{
    private:
    	//Datos miembros
    	int numerador;
    	int denominador;
     
     	//Función para calcular el máximo común divisor de dos numeros
    	int mcd(int numero1, int numero2){
			int menor;
       		int maximo_comun_divisor;
      
     		if(numero1 > numero2)
        		menor = numero2;
        	else
        		menor = numero1;
          
	        for(int i = 1; i <= menor; i++){
	        	
    	    	if(numero1 % i == 0 && numero2 % i == 0)
        			maximo_comun_divisor = i;
    		}   
    		return maximo_comun_divisor;
    	}
     
     	//Función para calcular el mínimo común múltiplo de dos numeros
     	int mcm(int numero1, int numero2){
        	int minimo_comun_multiplo;
         
        	minimo_comun_multiplo = (numero1*numero2) / mcd(numero1,numero2);
         
        	return minimo_comun_multiplo;
     	}
     
   public:
    	Racionales(int _numerador, int _denominador){
        	numerador =   _numerador;
        	denominador = _denominador;
    	}
      
      
      //Métodos
    	void leer_racionales(){
        	cout << "Introduce el numerador del numero racional" << endl;
        	cin >> numerador;
    	    cout << "Introduce el denominador del numero racional" << endl,
        	cin >> denominador;    
    	}
      
    	void irreducible(){
        	int mcd_ = mcd(numerador, denominador);
        	int numerador_irreducible;
        	int denominador_irreducible;
         
        	numerador_irreducible = numerador / mcd_;
        	denominador_irreducible = denominador / mcd_;
         
        	cout << "La fraccion irreducible del racional introducido es: " << numerador_irreducible << " / " << denominador_irreducible << endl ;
      	}
      
    	void comparacion(Racionales racional2){
        	int numerador_final, numerador_final2;
        
        	numerador_final = (mcm(denominador, racional2.denominador) / denominador ) * numerador;
        	
        	numerador_final2 = (mcm(denominador, racional2.denominador) / racional2.denominador ) * racional2.numerador;
        	
        	if(numerador_final > numerador_final2)
        		cout << "El numero racional menor es: " <<  racional2.numerador << " / " << racional2.denominador << endl;
        	
        	else if(numerador_final < numerador_final2)
        		cout << "El numero racional menor es: " << numerador << " / " << denominador << endl;
        		
        	else
        		cout << "Ambos numeros racionales son iguales" << endl;
         
		}
      
    	void mostrar_racional(){
    		int contador = 0;
    		int parte_entera;
    		int resto_division;
    		int decimal;
    		int precision;
    		
    		cout << "Introduce la precision con la que quieres mostrar el numero racional" << endl;
    		cin >> precision;
    		
    		parte_entera = numerador / denominador;
    		resto_division = numerador % denominador;
    		
    		
    		cout << parte_entera << "'";
    		
    		do{
    			
    			decimal = (resto_division * 10) / denominador; 
    			cout << decimal;
    			resto_division = (resto_division * 10) % denominador;
    			contador ++;
    			
			}while( contador != precision);
    		
    	}
   
};

int main(){
   Racionales racional(0,0);
   Racionales racional2(0,0);
   
   racional.leer_racionales();
   
   racional.irreducible();
   
   racional2.leer_racionales();
   racional.comparacion(racional2);
   
   racional.mostrar_racional();
   
}
