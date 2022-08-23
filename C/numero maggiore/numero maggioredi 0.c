#include <stdio.h>
main() {
    int n;
    printf("Scrivi inscerisci il numero");
    scanf("%d", &n);
    if( n < 0) {
        printf("Il numero e' negativo");
    }
    else{
        printf("Il numero e' positivo");
        }
    return 0;
}
