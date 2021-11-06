#include <stdio.h>
#include <stdlib.h>
main(){
  int conta, num, dentro, fuori; 
  printf("tabellina da visualizzare : ");
  scanf("%d", &num) ; 
  for(fuori = 1; fuori <= num; fuori++){ 
    printf ("\n");                    
    for(dentro = 1; dentro <= num; dentro++)  
      printf ("%3d", fuori * dentro );    
  }  
    printf ("\n"); 
}



