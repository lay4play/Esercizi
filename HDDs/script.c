#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
   FILE *fp;
   int c;
  
   fp = fopen("tmp","r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
   return(0);
}
/*    bool ErrorDetection = false;
    int test =  system("sudo smartctl /dev/sdb -a | grep Reallocated_Sector | awk {print'$10'} > tmp");
    fp = 
    printf("%d", test);
    /*test[] = (int)system("sudo smartctl /dev/sdb -a | grep Reallocated_Sector | awk {print'$10'}");
    if(test != 0){
        printf("Disco danneggiato");
    } else {
        printf("Disco apposto");
    }

}*/