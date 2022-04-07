#include <stdio.h>

int main(){
    short int i, pos;
    float array[7];
    for(i=0;i<7;i++){
        printf("Inserisci il %d indice dell'array\n", i+1); //si utilizza i+1 in modo da bypassare il valore 0 
        scanf("%f", &array[i]); 
        if(array[i]>0){
            pos++;
        }
    }
    printf("----------\n");
    for(i=6;i>=0;i=i=i-1){ //inizializza la variabile i a 6 con un incremento negativo di uno fino al raggiungimento di un valore minore o uguale a zero
        printf("indice %d valore %f\n",i+1, array[i]); // stampa il contenuti dell'array nell'indice corrispondente alla variabile i
    }
    printf("I numeri positivi sono: %d\n", pos);
    return 0;
}