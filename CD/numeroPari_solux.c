#include <stdio.h>
#include <stdlib.h>
main()
{
  int numero, resto;
  printf("Introduci un numero ");
  scanf("%d",&numero);
  resto = numero % 2;
  if (resto==0)
    printf("\nla meta' del numero letto e' %d ", numero/2);
  else
	  printf("\nil numero letto e' dispari");
    
    
  printf("\n\n");	
}
