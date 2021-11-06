/*
Programma che calcola il MCD mediante l'algoritmo di Euclide del resto
Questa versione verifica il corretto inserimento numero1>numero2 
Autore :  Paolo
Versione : 1.0 del 12-03-18 
Sviluppato con: Dev-C++ 5.4.1                 
*/

#include <stdio.h>
main()
{
  int numero1,numero2,resto,MCD,tempo;  // definizione delle variabili
  printf("\nAlgoritmo di Euclide per il calcolo del MCD.");
  printf("\ninserisci due numeri positivi :");
  scanf ("%d%d",&numero1,&numero2);
  if (numero1< 0) 
	  numero1=-1*numero1;
	if (numero2< 0) 
	  numero2=-1*numero2;
  if (numero1*numero2 > 0) {
    if (numero2>numero1)            //  scambiali tra loro
    { 
      tempo   = numero2;
      numero2 = numero1;
      numero1 = tempo;                                 
    }
    while(numero2 > 0)              // inizio iterazione
    {
     resto   = numero1 % numero2;   // calcolo del resto
     numero1 = numero2;             // scambio dei numeri
     numero2 = resto;
    }
    MCD=numero1;                    // assegnazione inutile, solo per chiarezza
    printf("\nil MCD e\': %d", MCD); 
 	}
  else
    printf("\n i numeri devono essere <> da 0!");

  printf("\n\n");
}


