
#include <iostream>
#include <cctype>

using namespace std;


bool menu() {
  char caracter;
  do{
    cout << endl << "Confirmar (S/N)? " << endl;
    cin >> caracter;
    caracter = toupper(caracter);
    
  }while(caracter != 'S' and caracter != 'N');
  
  if(caracter == 'S')
    return true;
  else
    return false;
}

int main() {
  bool si_no = menu();

  if(si_no)
    cout << endl << "true";
  else
    cout << endl << "false";
}
