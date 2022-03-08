#include <stdio.h>

int main(){
    int num, i;
    printf("inserisci un numero\n");
    scanf("%d", &num);
    for(i=1;i<=10;i++){
        printf("%d  ", num * i);
    }
}