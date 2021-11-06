// autore : paolo
// versione e data: 1 del 10-08-2014
// descrizione :  utilizzo dell'operatore % (resto della divisione) 
// Sviluppato con: Dev-C++ 5.4.1  
#include <stdio.h>
main()
{
  int settimane, avanzano, uovaSett, galline, totUova;
  uovaSett  = 5;        // 5 uova alla settimana  
  settimane = 4;        // 4 settimane al mese   
  // Leggi i valori
  printf("Introduci il numero delle galline : "); 
  scanf ("%d", &galline);  
  // Esegui i calcoli   
  totUova = galline * settimane * uovaSett;   // tot uova prodotte 
  avanzano = (totUova % 12);                  // intero della divisione
  // Comunica i risultati  
  printf ("\nIn un mese si producono %d uova", totUova);
  printf ("\nAvanzano dal confezionamento %d uova", avanzano);
  
  printf ("\n\n");
}

