#include <stdio.h>
#include <stdlib.h>

//Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera,
//calcoli e stampi:
//1. l’area del quadrato di lato D

main() {
    int lato, risultato;
    printf("Inserisci il lato\n");
    scanf("%d", &lato);
    risultato=lato * lato;
    printf("L'area del quadrato è: %d", risultato,"\n");
    return 0;
}