#include <stdio.h>
main(){
    int primonumero, secondonumero, terzonumero, media;
    printf("Inserisci il primo numero");
    scanf("%d", &primonumero);
    printf("Inserisci il secondo numero");
    scanf("%d", &secondonumero);
    printf("Inserisci il terzo numero");
    scanf("%d", &terzonumero);
    media= (primonumero + secondonumero + terzonumero) / 3;
    printf("La media e': %d", media);
    return 0;
}