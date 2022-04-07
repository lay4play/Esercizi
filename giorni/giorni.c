#include <stdio.h>
#include <stdlib.h>

// data una data sottoforma di 3 informazioni dire se si tratta di una data corretta, dove per corretta si intende che il giorno non è negativo o non maggiore del numero massimo di giorni per il mese scelto, che il mese non sia negativo e non sia maggiore di 12, ignorare gli anni bisestili (y%4 = 0 bisestile) (in caso di anni centuali y%400 = bisestile && y%4 == bisestile) 
int main(){
	int giorno,mese,anno;
	printf("Inserisci la data nel formato dd/mm/yyyy\n");
	scanf("%d", &giorno);
	scanf("%d", &mese);
	scanf("%d", &anno);
	if(giorno > 31 || giorno < 1 || mese > 12 || mese < 1 || anno < 0){
		printf("La data e' sabgliata");
	} else { 
		if(mese == 2 || mese == 4 || mese == 6 || mese == 9 || mese == 11){
                        if((mese == 2 && giorno<30) || (mese != 2 && giorno < 31)){
                                printf("La data e' giusta");
                        } else {
                                printf("La data e' sbagliata");
                        }
                } else {
                        printf("La data e' giusta");
                }
	}
	return 0;
       system("PAUSE");	
}

