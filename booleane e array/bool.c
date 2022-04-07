#include <stdio.h>
#include <stdbool.h>
//dato un array di 15 interi dire se si trova almeno un numero negativo

int main(){
    int array[15], i;
    bool neg;
    neg = false;
    for(i=0;i<15;i++){
        printf("Inserisci il numero per il %d indice dell'array\n", i+1);
        scanf("%d", &array[i]);
        if(array[i]<0){
            neg = true;
        }
    }
    if(neg == true){
        printf("Nell'array ci sono numeri negativi\n");
    } else {
        printf("Nell'array non ci sono numeri negativi\n");
    }
    return 0;
}