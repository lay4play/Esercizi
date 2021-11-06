#include <stdio.h>
#include <stdlib.h>
main(){
  int conta, numero; 
  printf("tabellina da visualizzare : ");
  scanf("%d", &numero) ;  
  for (conta = 1; conta <= 10; conta++) {
    printf("%d  ", conta * numero) ;
  }  
}




