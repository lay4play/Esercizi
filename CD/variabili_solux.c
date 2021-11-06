// Descrizione: programma che effettua la rotazione di tre numeri
// Versione: 1.0 del 23-03-2013
// Autore:  Paolo  
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
  int variab1, variab2, variab3, tempo;
  variab1 =   5;                //inizializzazione delle variabili
  variab2 =  50;
  variab3 = 500;
  
  printf("\nla variabile variab1 contiene %d", variab1);
  printf("\nla variabile variab2 contiene %d", variab2);
  printf("\nla variabile variab3 contiene %d", variab3);
  printf("\n\n");
 
  tempo   = variab1;
  variab1 = variab2;
  variab2 = variab3;
  variab3 = tempo;
  
  printf("\nla variabile variab1 contiene ora %d", variab1);
  printf("\nla variabile variab2 contiene ora %d", variab2);
  printf("\nla variabile variab3 contiene ora %d", variab3);

  printf("\n\n");
//  system("PAUSE");	
}
