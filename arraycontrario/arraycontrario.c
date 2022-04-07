#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> d7b1888 (arraycontrario)
#include <time.h>
#include <stdlib.h>

int main(){
<<<<<<< HEAD
    int array[6], array1[6], i, c=0;
    srand(time(NULL));
    for(i=0;i<6;i++){
        array[i]= (int)(rand()%100);
        printf("%d", array[i]);
    }
    for(i=7;i>=0;i=i-1){
        array1[i] = array[c];
        c++;
    }
    for(i=0;i<6;i++){
        printf("%d", array1[i]);
=======
    int array[6], arrayContrario[6], i, c;
    srand(time(NULL));
    for(i=0;i<6;i++){
        array[i] = rand()%100;
        printf("%d ", array[i]);
    }
    printf("\n-----------------\n");
    c = 0;
    for(i=5;i>=0;i=i-1){
        arrayContrario[c] = array[i];
        printf("%d ", arrayContrario[c]);
        c++; 
>>>>>>> d7b1888 (arraycontrario)
    }
    printf("\n"); //reset cursor to normal position
    return 0;
}
