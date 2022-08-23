#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//generare un numero tra 1 e 255 e farlo diventare un numero binario utilizzando un array di 8
int main(){
    int n, resto[8], i;
    float quoziente;
    srand(time(NULL));
    n = rand()%254+1;
    printf("%d\n", n);
    for(i=7;i>=0;i=i-1){
        resto[i]=n%2;
        n = n/2;
    }
    for(i=0;i<=7;i++){
        printf("%d", resto[i]);
    }
    printf("\n");
    return 0;
}