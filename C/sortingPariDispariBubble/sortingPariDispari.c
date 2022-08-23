#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//riempire un'array di 15 elementi con numeri casuali compresi tra 0 e 100 dividere i numeri in due array uno con numeri pari ed uno con numeri dispari, disporre i due array in ordine crescente

int main(){
    int array[15], array2[15], array3[15], i, pari=0, dispari=0, i3, temp;
    srand(time(NULL));
    for(i=0;i<15;i++){
        array[i]=rand()%101; //generazione numeri da 0 a 100
        if(array[i]%2==0){ //controlla se il numero è pari
            array2[pari]=array[i]; //salvataggio valore dell'indice corrente dell'array principale nell'array dei numeri pari
            pari++; //increamento variabile contatore pari
        } else { //il numero non è pari
            array3[dispari]=array[i]; //salvataggio valore dell'indice corrente dell'array principale nell'array dei numeri dispari
            dispari++; //increamento variabile contatore dispari
        }
        printf("Numero %d\n", array[i]);
    }
    printf("-------------------------\n");
    for(i=0;i<15-1;i++){ //sorting pari
        for(i3=0;i3<15-1;i3++){
            if(array2[i3] < array2[i3+1]){
                temp=array2[i3];
                array2[i3]=array2[i3+1];
                array2[i3+1]=temp;
            }
        }
    }
    for(i=0;i<15-1;i++){ //sorting dispari
        for(i3=0;i3<15-1;i3++){
            if(array3[i3] < array3[i3+1]){
                temp=array3[i3];
                array3[i3]=array3[i3+1];
                array3[i3+1]=temp;
            }
        }
    }
    for(pari;pari!=0;pari=pari-1){ //output numeri pari
        printf("Pari %d\n", array2[pari]);
    }
    printf("------------------\n");
    for(dispari;dispari!=0;dispari=dispari-1){ //output numeri dispari
        printf("Dispari %d\n", array3[dispari]);
    }
}