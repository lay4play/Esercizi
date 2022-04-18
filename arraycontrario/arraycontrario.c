#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
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
    }
    printf("\n"); //reset cursor to normal position
    return 0;
}
