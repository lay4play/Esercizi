/* File: sommaNaturaliSol.cpp */
/* Programma che calcola la somma dei numeri interi
   fino ad un numero letto da input
   Autore :  Paolo
   Versione : 1.0 del 12-03-13 
*/
#include <iostream>    // libreria specifica del C++ per l'IO
// #include <cstdlib>     // libreria che dichiara la funzione system
using namespace std;
main()
{
  int numero,totale,contatore; // definizione delle variabili
  contatore=0;                 // inizializzazione delle variabili
  totale=0;
  cout <<"inserisci un numero intero : ";
  cin >> numero;
  contatore=numero;
  totale   =numero;
  while(contatore>0)           // condizione di ingresso del ciclo 
  {
    contatore--;               // incrementa il contatore
    totale+=contatore;         // aggiorna il totale
  }
  cout << "\nla somma dei primi "<<  numero <<" numeri e: " << totale;

  printf("\n\n");
//  system("PAUSE");
}
