/*
	Reconocer que tipo de valor devuelven cada una de las expresiones del enunciado y analizar si 
	están bien escritas o si poseen algún error.
*/
#include <iostream>				//Librería de recursos de E/S

using namespace std;

int main (){					//Función principal
	
	bool a=2 + 3 < 5 + 8;
	cout<<"La primera expresion devolvera un valor booleano, 1 o 0, o, true o false"<<endl<<a<<endl;
	//Se recomienda el uso de paréntesis
	
	bool b= 2 < 3 < 4;
	cout<<"La segunda expresion devolvera un valor booleano, 1 o 0, o, true o false"<<endl<<b<<endl;
	//Sin embargo esta expresión devuelve siempre true, pues primero evalúa 2<3 y luego compara 3<4
	
	double c= 7/3 + 4.0;
	cout<<"La segunda expresion devolvera un dato double: "<<endl<<c<<endl;
	//Expresión correcta y siempre devolverá 6
	
	int x=4, y=4, z=4;
	bool d= ( (x==4) && (y==3) ) || ( (z!=2) == (1 !=2 ) );	
	cout<<"La tercera expresion devolvera un dato booleano, es decir, o 1 o 0, o true o false "<<endl<<d<<endl;
	//La expresión requiere de los paréntesis
	
	
	int x1;
	bool e= x1 <= 4||x1 >= 4;
	cout<<"La cuarta expresion devolvera un dato booleano, es decir, o 1 o 0, o true o false "<<endl<<e<<endl;
	//La expresión es correcta y siempre devolverá true.
	
	
	int x2;
	bool f= x2 < 4 && x2 > 4;
	cout<<"La quinta expresion devolvera un dato booleano, es decir, o 1 o 0, o true o false "<<endl<<f<<endl;
	//La expresión es correcta y siempre devolverá false
	
	int z1=3;
	char a1='t';
	bool g= z1>6 || (a1< 'z' && a1>'a') || z1<6 ;
	cout<<"La sexta expresion devolvera un dato bolleano, es decir, o 1 o 0, o true o false "<<endl<<g<<endl;
	//Esta expresión requiere de paréntesis dependiendo de en que lugar se pongan la solución variará
}
