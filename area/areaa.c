#include <stdio.h>
#include <stdlib.h>

//Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera,
//calcoli e stampi:
//1. l’area del quadrato di lato D

main() {
    int lato, risultato, figura;
    printf("Scegli di che figura vuoi sapere l'area\n1 Quadrato\n2 Cerchio\n3 Triangolo equilatero\n");
    scanf("%d", &figura);
    printf("Inserisci il lato o raggio\n");
        scanf("%d", &lato);
    if(figura = 1) {
        risultato=lato * lato;
        printf("L'area del quadrato è: %d\n", risultato);
    } else {
        if(figura = 2) {
            risultato=(lato*lato)*3,14;
            printf("L'area del cerchio è: %d\n", risultato);
        } else {
            risultato=lato*lato/2;
            printf("L'area del triangolo equilatero è: %d\n", risultato);
        }
    }
    return 0;
}