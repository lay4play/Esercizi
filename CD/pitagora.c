#include <stdio.h>
const int tabella = 8; 
main() {
  int riga, colonna;             
  for(riga = 1; riga <= tabella; riga++) {              // ciclo esterno per le righe
    printf("\n");                                       // a capo di una riga
    for(colonna = 1; colonna <= tabella; colonna++) {   // ciclo interno
      printf("%2d ", riga * colonna);                   // stampa riga*colonna                                                         
    }    
  }
}



