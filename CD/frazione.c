/* File: frazione.c */
/* Time-stamp: "2013-06-06 03:26:06 paolo"      */
/* Scopo: uso di if e blocco di istruzioni */
// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
//variabili locali alla funzione main
  int a,b;
  printf("introduci il numeratore a della frazione a/b: ");
  scanf("%d",&a);
  printf("introduci il denominatore b della frazione a/b: ");
  scanf("%d",&b);
//verifica sul contenuto del denominatore b
  if (b==0)
  {  
    printf("attenzione\n");
    printf("denominatore uguale a 0!");
  }  
  printf("\n\n");
 // system("pause");
}

