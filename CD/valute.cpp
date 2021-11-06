// autore : paolo
// versione e data: 1 del 21-05-2014
// descrizione : calcolo il cambio tra le valute lire e dollari
// sviluppato con  : Dev-C++ 5.4.1                                
#include <iostream>    // libreria specifica del C++ per l'IO
// #include <cstdlib>     // libreria che dichiara la funzione system
#define EuroLira 1963.27
const float EuroDollaro = 1.3676;      //cambio del 21-05-2014
using namespace std;

main()
{
  float valore1;
  float valore2;
  
  valore1 = 100/EuroLira;
  valore2 = valore1*EuroDollaro;
  cout << "Calcolo 100 lire in Euro: " << valore1 << " in Dollari: " << valore2 << endl; 
 
  valore1 = 100000/EuroLira;
  valore2 = valore1*EuroDollaro;
  cout << "Calcolo 100000 lire in Euro: " << valore1 << " in Dollari: " << valore2 << endl;
 
  valore1 = 1000000/EuroLira;
  valore2 = valore1*EuroDollaro;
  cout << "Calcolo 1 milione di lire in Euro: " << valore1 << " in Dollari: " << valore2 << endl;
    
  cout << "\n\n";
//  system("PAUSE");
}

