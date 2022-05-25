#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char comando;
    int min, i;
    printf("Inserisci i minuti per il timer\n");
    scanf("%d", &min);
    for(i=min; i!=0; i=i-1){
        printf("%d\n", i);
        sleep(60);
    } 
    return 0;
}

