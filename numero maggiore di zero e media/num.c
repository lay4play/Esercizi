#include <stdio.h>
//dati nun numeri inseriti dall'utente 
//controllare che siano maggiori di 0 e calcolare la media solo dei numeri positivi

int main(){
    short unsigned int n, i, i1;
    float media, num, somma;
    somma = 0; 
    i1= 0;
    printf("inserisci quanti numeri vuoi inserire\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Inserisci il numero\n");
        scanf("%f", &num);
        if(num>0){
            i1++;
            somma= somma + num;
        }
    }
    media = somma / i1;
    printf("%f\n", media);
    return 0;
}