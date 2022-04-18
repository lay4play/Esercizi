#include <stdio.h>

int main()
{
    int a[10], i, j, flag = 0;

    printf("Inserisci 10 numeri\n");

    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]==a[j]){
                printf("%d\n", a[i]);
            }
        }
    }
    return 0;
}