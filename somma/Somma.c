#include <stdio.h> //inclusione librerie

main(){
    int x,doppio; //dichiarazione variabili
    printf("inscerisci il numero");
    scanf("%d", &x); //%d = intero
    doppio = 2 * x;
    printf("il doppio e' %d", doppio);
    return 0; //fine
}