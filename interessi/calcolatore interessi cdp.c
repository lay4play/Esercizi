#include <stdio.h>

main(){
    float prestito, totaledapagare;
    int mesi, affidabilita, tempo;
    printf("Inserisci i soldi da prestare");
    scanf("%f", &prestito);
    printf("Inserisci il tempo del prestito");
    scanf("%d", &mesi);
    printf("Inserisci il tempo da cui il giocatore gioca (in mesi)");
    scanf("%d", &tempo);
    if(tempo < 2) {
        if(prestito < 25000){
            if(mesi < 1){
                totaledapagare= prestito+(prestito/10);
                printf("il prestito si può fare, totale da pagare: %f", totaledapagare);

            } else {
                totaledapagare= prestito+((prestito/100)*11);
                printf("Il prestito si può fare ma è rischioso, totale da pagare: %f", totaledapagare);
            }
        } else {
            printf("Il prestito non si può fare, troppi soldi per non si sa cosa");
        } 
    } else {
        printf("Il tempo è troppo lungo");
    }
    if(tempo > 2) {
        if(prestito < 100000) {
            if(mesi < 3 ) {
                totaledapagare= prestito+((prestito/100)*8);
                printf("Il prestito si può fare, totale da pagare: %f", totaledapagare);
            } else {
                printf("Il prestito si può fare ma è rischioso, totale da pagare: %f", totaledapagare);
            }
        } else {
            printf("Il prestito non si può fare, troppi soldi per non si sa cosa");
        } 
    } else {
        printf("Il tempo è troppo lungo");
    }
}
