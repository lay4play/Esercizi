#include <stdio.h>

int main(){
    int num, i;
    printf("inserisci un numero\n");
    scanf("%d", &num);
    if(num==0){
        printf("sei un fallito\n");
    } else {
        for(i=1;i<=10;i++){
            printf("%d  ", num * i);
        }
    }
}
