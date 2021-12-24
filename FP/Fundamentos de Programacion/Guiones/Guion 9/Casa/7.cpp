#include <iostream>

using namespace std;

bool fecha_valida(int dia, int mes, int anio){
	bool bisiesto;
  
	//Comprobamos si el año es bisiesto
	if((anio % 4 == 0 and anio % 100 != 0) or (anio % 400 == 0))
    	bisiesto = true;
	else
    	bisiesto = false;
    
    //Comprobamos si la fecha en concreto es válida
    if(mes >12 or mes <1 or anio<1 or dia<1 or dia>31)
    	return false;
    
    else if(bisiesto and mes==2 and dia >29)
    	return false;
    else if(!bisiesto and mes==2 and dia >28)
    	return false;
    
    else if( (mes == 2 or mes == 4 or mes == 6 or mes == 9 or  mes == 11 ) and dia == 31)
    	return false;
    else
    	return true;
}
int main() {
  int fecha[3];
  
  cout << "Introduce un dia: " << endl;
  cin >> fecha[0];
  cout << "Introduce un mes: " << endl;
  cin >> fecha[1];
  cout << "Introduce un anio: " << endl;
  cin >> fecha[2];

  if(fecha_valida(fecha[0], fecha[1], fecha[2]))
    cout << endl << "La fecha introducida es valida";
  else
    cout << endl << "La fecha introducida no es valida";
}
