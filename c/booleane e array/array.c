#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
//dato un array di 15 interi caricarlo e controllare se compare il numero 0 e poi controllare se tra i 15 interi copare lo zero.
//il caricamento deve avvenire con numeri random compresi tra 0 e 10 
int main(){
    srand(time(NULL));
    int array[3];
    unsigned short int i;
    bool zero;
    char risp;
    do{
        zero = false;
            for(i=0;i<3;i++){
            array[i] = rand()%10;
            printf("%d\n", array[i]);
            if(array[i]==0){
                zero = true;
            }
        }
        if(zero == true){
            printf("Nell'array ci sono zeri\n");
        } else {
            printf("Nell'array non ci sono zeri\n");
        }
        printf("Ripetere? [Y/n]\n");
        scanf(" %c", &risp);
    }while(risp == 'y' || risp == 'Y');
}