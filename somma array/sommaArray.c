#include <stdio.h>

//creare due array di float e fare la loro somma in un terzo array
int main(){
    float array1[10], array2[10], sommaArray[10];
    short unsigned int i;
    for(i=0;i<10;i++){
        printf("inserisci un numero per il primo array\n");
        scanf("%f", &array1[i]);
    }
    for(i=0;i<10;i++){
        printf("inserisci un numero per il secondo array\n");
        scanf("%f", &array2[i]);
    }
    printf("somme totali\n");
    for(i=0;i<10;i++){
        sommaArray[i] = array1[i] + array2[i];
        printf("%d indice %f\n", i ,sommaArray[i]);
    }
    return 0;
}