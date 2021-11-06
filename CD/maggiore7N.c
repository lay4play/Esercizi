#include <stdio.h>
#include <stdlib.h>
 main()
{
  int max, numero, conta;   
  max = 0;
  for (conta = 1; conta <= 7; conta++){  
                             
    printf("inserisci un numero : ");
	  scanf("%d", &numero) ;  
    if (numero > max) 
      max = numero;
  }
  printf("\n numero maggiore: %d", max);  
}






