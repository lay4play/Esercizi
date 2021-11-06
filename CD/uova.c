// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  utilizzo dell'operatore / (divisione tra interi) 
// Sviluppato con: Dev-C++ 5.4.1               
#include <stdio.h>
main()
{
  int importo, settimane, dozzine, prezzo, uovaSett, galline, totUova;
  uovaSett  = 5;        // 5 uova alla settimana  
  settimane = 4;        // 4 settimane al mese   
  // Leggi i valori
  printf("Introduci il numero delle galline : "); 
  scanf ("%d", &galline);  
  printf("Introduci il prezzo  alla dozzina : ");
  scanf ("%d", &prezzo);  
  // Esegui i calcoli   
  totUova = galline * settimane * uovaSett;  // tot uova prodotte 
  dozzine = (totUova / 12);                  // intero della divisione
  importo = prezzo * dozzine;         
  // Comunica i risultati  
  printf ("\nIn un mese si producono %d uova", totUova);
  printf ("\nIn un mese si incassano %d euro", importo);

  printf("\n\n");
//  system("PAUSE");
}
