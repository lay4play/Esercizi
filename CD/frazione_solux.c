/* File: frazioneSol.c */
/* Time-stamp: "2014-06-06 03:26:06 paolo"      */
/* Scopo: uso di if-then e blocco di istruzioni */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
#include <stdlib.h>

main()
{
//  variabili locali alla funzione main
  int a,b;
  printf("introduci il numeratore a della frazione a/b: ");
  scanf("%d",&a);
  printf("introduci il denominatore b della frazione a/b: ");
  scanf("%d",&b);
//verifica sul contenuto del numeratore a
  if (a==0)
  {
    printf("attenzione");
    printf("numeratore uguale a 0!");
  }
//verifica sul contenuto del denominatore b
  if (b==0)
  {
    printf("attenzione");
    printf("denominatore uguale a 0!");
  }
  // system("PAUSE");	
  return 1;
}

