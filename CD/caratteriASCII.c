// Sviluppato con: Dev-C++ 5.4.1                 
#include <stdio.h>
main()
{  
  /* Ciclo che mostra la codifica ascii di tutti i caratteri */ 
  int k;  
  printf("Dec\t char\n");  
  for(k=0;k<255 ;k++)
  {  
    printf(" %d\t %c\n", k, k);  
  } 

  printf("\n\n");
}
