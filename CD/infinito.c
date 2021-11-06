/* File: infinito.c */
/* Time-stamp: "2014-06-06 03:26:06 paolo" */
/* Scopo: esempio di uso errato del ciclo while: loop infinito */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
 int numLetto;                    //numero inserito dall'utente
 numLetto =0;                     //inizializzazioni
 //leggi un numero
 printf ("\nintrodurre il numero da verificare :");  
 scanf ("%d",&numLetto);
 //decrementalo fino a 0
 while (numLetto!=0)             //condizione di entrata  
   numLetto = numLetto - 2;      //corpo del ciclo  
 //comunica il risultato
 if (numLetto == 0)   
  printf ("\nil numero e' pari");
 else
  printf ("\nil numero e' dispari");

  printf("\n\n");
//  system("PAUSE");
}






