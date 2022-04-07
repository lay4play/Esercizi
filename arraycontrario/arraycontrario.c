#include <stdio.h>

int main(){
    int array[7], i;
    for(i=0;i<7;i++){
        printf("Inserisci il %d indice dell'array\n", i+1); //si utilizza i+1 in modo da bypassare il valore 0 
        scanf("%d", &array[i]); 
    }
    printf("----------\n");
    for(i=6;i>=0;i=i=i-1){ //inizializza la variabile i a 6 con un incremento negativo di uno fino al raggiungimento di un valore minore o uguale a zero
        printf("indice %d valore %d\n",i+1, array[i]); // stampa il contenuti dell'array nell'indice corrispondente alla variabile i
    }
    return 0;
}