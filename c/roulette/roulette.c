#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
    int numero, tmp, i, colore;
    srand(time(NULL));
    i=rand()%35;
    for(i=i;i>=0;i=i-1){
        numero=rand()%37;
        printf("%d\n", numero);
        sleep(1);
    }
    if(numero!=0){
        tmp = rand()%2;
        if(tmp==0){
            colore = 0;
        } else {
            colore = 1;
        }
    }
    if(colore==0){
        printf("Il colore e rosso\n");
    } else {
        if(colore==1){
            printf("Il colore e nero\n");
        } else {
            printf("Lo zero non ha colore");
        }
    }
    printf("Il numero vincente e: %d\n", numero);
    return 0;
}