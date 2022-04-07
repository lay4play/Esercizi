#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main(){
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
    }
    return 0;
}
