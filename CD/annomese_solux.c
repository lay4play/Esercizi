/* File: annomeseSol.c */
/* Time-stamp: "2014-06-06 03:26:06 paolo"       */
/* Scopo: uso di if/else e blocco di istruzioni  */
/* Sviluppato con: Dev-C++ 5.4.1                 */
#include <stdio.h>
main()
{
 int mese, anno, mesesucc, annosucc;
 printf("Introduci  il mese e l'anno ");
 scanf ("%d %d", &mese, &anno); 
 if (mese == 12) {
  mesesucc = 1;
  annosucc = anno + 1; 
 }
 else {
  mesesucc = mese + 1;
  annosucc = anno;
 }
 printf("\nIl numero mese successivo  %d e l'anno successivo e' %d",mesesucc, annosucc);

 printf("\n\n");	
}
