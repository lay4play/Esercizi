             
#include <stdio.h>
#include <stdlib.h>
main()
{
//  variabili locali alla funzione main
  int num1,num2,num3;
// istruzioni della funzione main
  printf("introduci primo numero: \n");
  scanf("%d",&num1);           // leggi i numeri
 	printf("introduci secondo numero: \n");
  scanf("%d",&num2); 
	printf("introduci terzo numero: \n");
  scanf("%d",&num3); 
  if (num1 > num2)
	 if (num1 > num3)
 		printf("il maggiore e': %d" , num1 );
	 else
 		printf("il maggiore e': %d" , num3 );
  else
 	 if (num2 > num3) 
		printf("il maggiore e': %d" ,num2 );
 	else
		printf("il maggiore e': %d" ,num3 );
  
}

