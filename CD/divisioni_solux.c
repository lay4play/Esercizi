// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{
  int num1, num2, num3;
  int resto1,resto2,resto3,resto4,resto5,resto6;

// Leggi  i numeri  
  printf("\nIntroduci tre numeri interi :");
  scanf ("%d", &num1);  
  scanf ("%d", &num2);  
  scanf ("%d", &num3);  

// Esegui i calcoli   
  resto1=num1%num2;
  resto2=num2%num1;
  resto3=num1%num3;
  resto4=num3%num1;
  resto5=num2%num3;
  resto6=num3%num2;

// Comunica i risultati  
  printf ("\n dividendo divisore  quoziente  resto   ");
  printf ("\n num1: \t%d  num2: %d \t%d \t%d", num1,num2,num1/num2, resto1);
  printf ("\n num2: \t%d  num1: %d \t%d \t%d", num2,num1,num2/num1, resto2);
  printf ("\n num1: \t%d  num3: %d \t%d \t%d", num1,num3,num1/num3, resto3);
  printf ("\n num3: \t%d  num1: %d \t%d \t%d", num3,num1,num3/num1, resto4);
  printf ("\n num2: \t%d  num3: %d \t%d \t%d", num2,num3,num2/num3, resto5);
  printf ("\n num3: \t%d  num2: %d \t%d \t%d", num3,num2,num3/num2, resto6);
  
  printf("\n\n");
}
