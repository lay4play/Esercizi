/* File: infinitoSol.cpp */
/* Time-stamp: "2011-06-06 03:26:06 paolo" */
/* Scopo: correzione esempio di uso errato del ciclo while: loop infinito */
/* Sviluppato con  : Dev-C++ 5.4.1    */

#include <iostream>  
using namespace std;
main()
{
 int numLetto;                    //numero inserito dall'utente
 numLetto =0;                     //inizializzazioni
 //leggi un numero
 cout << "\nintrodurre il numero da verificare :";  
 cin >> numLetto;
 //decrementalo fino a 0
 while (numLetto>1)              //condizione di entrata  
   numLetto = numLetto - 2;      //corpo del ciclo  
 //comunica il risultato
 if (numLetto == 0)   
   cout << "\nil numero e' pari";
 else
   cout << "\nil numero e' dispari";

  printf("\n\n");
//  system("PAUSE");
}
