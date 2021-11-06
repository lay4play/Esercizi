/* File: sommaNaturaliSol.cpp */
/* Programma che calcola la somma dei numeri interi
   fino ad un numero letto da input (bis) 
   Autore :  Paolo
   Versione : 1.0 del 12-03-13 
*/
#include <iostream>    // libreria specifica del C++ per l'IO
// #include <cstdlib>     // libreria che dichiara la funzione system
using namespace std;
main()
{
  int numero,totale;         // definizione delle variabili
  totale = 0;
  cout <<"inserisci un numero intero : ";
  cin >> numero;
  totale = numero;
  while(numero>0)           // condizione di ingresso del ciclo 
  {
    numero--;               // incrementa il contatore
    totale+=numero;         // aggiorna il totale
  }
   cout << "\nla somma dei primi numeri scelti e' : " << totale;

  printf("\n\n");
//  system("PAUSE");
}


