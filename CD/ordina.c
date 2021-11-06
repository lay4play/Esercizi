#include <stdio.h>
main()
{
	int num1, num2, tempo;
 
//istruzioni della funzione main
  printf("inserisci i numeri da ordinare\n");
  scanf("%d",&num1);     //inserimento dei numeri da ordinare
  scanf("%d",&num2);
 
	if (num1 < num2)  // scambio i numeri
	{
		tempo = num1;
		num1 = num2;
		num2 = tempo;
	}
	 printf("\nil minore e %d ",num1);
   printf("\nil maggiore e %d" ,num2);
}



