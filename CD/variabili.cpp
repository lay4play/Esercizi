#include <iostream>     // libreria per l'IO
using namespace std;    // spazio dei nomi
int main(){
  int variab1, variab2, tempo;
  variab1 =   5;    // inizializza le variabili
  variab2 = 100;
  cout << "\n variab1 contiene " << variab1;
  cout << "\n variab2 contiene " << variab2;
  tempo   = variab1;  // scambio
  variab1 = variab2;
  variab2 = tempo;
  cout << "\n variab1 contiene ora " << variab1;
  cout << "\n variab2 contiene ora " << variab2;
}
 
// autore : paolo
// versione e data: 1 del 10-08-2018
// descrizione : scambio contenuto due variabili 
// Sviluppato con: Dev-C++ 5.11


 // system("PAUSE");	
       
