#include <stdio.h>
//dati due numeri controllare che il secondo sia inferiore al primo, effettuare la divisione del primo per il secondo,
//per sottrazioni successive dare il risultato e il resto

int main(){
    int num1, num2, i=0;
    do{
        printf("inserisci il primo numero\n");
        scanf("%d", &num1);
        printf("inserisci il secondo numero\n");
        scanf("%d", &num2);
    } while(num2>num1);
    while(num1>num2){
        num1=num1-num2;
        i++;
    }
    printf("---------------------------\n");
    printf("%d risultato\n", i); // risultato
    printf("%d resto\n", num1%num2); //resto
    return 0;
}