#include <stdio.h>

int main() {
    int n1, p, p1, p2;
    printf("Inserisci un numero");
    scanf("%d", &n1);
    p = n1 * n1;
    p1 = p * n1;
    p2= p1 * n1;
    printf("Le prime tre potenze sono: %d %d %d", p, p1, p2);
    return 0;
}