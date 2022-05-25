#include <stdio.h>
//scrivere tanti simboli quanto il numero dato
int main(){
    int i, n, c;
    do{
        printf("Inserisci quanti numeri inserire\n");
        scanf("%d", &n);
    }while(n<=0);
    int numeri[n];
    for(i=0;i<n;i++){
        do{
            printf("Inserisci il numero %d di %d\n", i+1, n);
            scanf("%d", &numeri[i]);
        }while(numeri[i]<0);
    }
    for(i=0;i<n;i++){
        for(c=0;c<numeri[i];c++){
            printf("☭");
        }
        printf("\n");
    }
    return 0;
}