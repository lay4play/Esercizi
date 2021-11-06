#include <stdio.h>
main(){
  int variab1, variab2, tempo;
  variab1 =   5;   // inizializza le variabili
  variab2 = 100;
  printf("\n variab1 contiene %d", variab1);
  printf("\n variab2 contiene %d", variab2);
  tempo   = variab1;  // scambio
  variab1 = variab2;
  variab2 = tempo;
  printf("\n variab1 contiene ora %d", variab1);
  printf("\n variab2 contiene ora %d", variab2);
}
 
// autore : paolo
// versione e data: 1 del 10-08-2018
// descrizione : scambio contenuto due variabili 
// Sviluppato con: Dev-C++ 5.11

 // printf("\n\n");
 // system("PAUSE");	
       
