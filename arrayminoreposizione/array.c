#include <stdio.h>
#include <stdlib.h>
//caricare un array di 50 valori interi calcolare il valore minimo e dire in quali posizioni si trova

int main(){
    int array[50], i, min;
    for(i=0;i<50;i++){
        printf("Inserisci il numero %d di 50\n", i+1);
        scanf("%d", &array[i]);
        if(i==0){
            min=i+1;
        } else {
            if(array[i]<min){
                min=i+1;
            }
        }
    }
    printf("Posizione %d, numero %d\n", min, array[min-1]); //utilizzare min-1 in modo da avere la posizione esatta del numero
}