// Descrizione: programma che effettua la rotazione di tre numeri
// Versione: 1.0 del 23-06-2014
// Autore:  Paolo  
// Sviluppato con  : Dev-C++ 5.4.1    

#include <iostream>    // libreria specifica del C++ per l'IO
// #include <cstdlib>     // libreria che dichiara la funzione system
using namespace std;
main()
{
  int variab1, variab2, variab3, tempo;
  variab1 =   5;                //inizializzazione delle variabili
  variab2 =  50;
  variab3 = 500;
  
  cout << "\nla variabile variab1 contiene " <<  variab1;
  cout << "\nla variabile variab2 contiene " <<  variab2;
  cout << "\nla variabile variab3 contiene " <<  variab3;
 
  cout << "\n\n";
 
  tempo   = variab1;
  variab1 = variab2;
  variab2 = variab3;
  variab3 = tempo;
  
  cout << "\nla variabile variab1 contiene " <<  variab1;
  cout << "\nla variabile variab2 contiene " <<  variab2;
  cout << "\nla variabile variab3 contiene " <<  variab3;
 
  cout << "\n\n";
//  system("PAUSE");	
}
