/*
Programma che divide per 2 un numero letto da input
finche tale numero è maggiore di 2 visualizzando i
valori intermedi dei calcoli effettuati (trace - table)
Autore :  Paolo
Versione : 1.0 del 12-03-11 
*/
// Sviluppato con  : Dev-C++ 5.4.1     
#include <iostream>  
using namespace std;

main()
{
  int numero;
  cout << "inserisci un numero intero : ";
  cin >> numero;
  while(numero > 2)          // condizione di ingresso del ciclo 
  {
    numero = numero / 2;     // corpo del ciclo
    cout  << "\nlo divido per 2 ed ottengo : " << numero; 
  }
  cout << "\nvalore finale del numero inserito: " << numero;

  printf("\n\n");
}


