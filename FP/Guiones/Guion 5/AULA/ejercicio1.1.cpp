
/*
	Programa que lee el codigo de 1 y 0 introducido por el usuario y muestra los primos que se encuentran en él
	mediante la suma de 1 seguidos en el código.

*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int contador0=0, contador1=0, codigo=0;
	string SENTENCIA= "\nIntroduzca un 1 o un 0 : \n"; 
	cerr << SENTENCIA;	
	
	while ((contador0 <=4) and (codigo==1 or codigo==0)){
		cin >> codigo;
		
		if(codigo==1){
			contador1 ++ ;
			contador0=0;
		}
		else{
			contador0 ++;
			if(contador1 != 0)
				cout << contador1 << endl;
			
			contador1=0;
		}
	}
	cout << 0 << endl;
}
