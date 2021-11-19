#include <stdio.h>
#include <stdlib.h>

int main() {
	int eta;
	printf("Inserisci la tua eta'\n");
	scanf("%d", &eta);
	if(eta <= 10 || eta > 65){
		printf("L'ingresso e' gratis\n");
	} else {
		if(eta <= 18){
			printf("Il prezzo e' di 5 euro\n");
		} else {
			printf("Il prezzo e' di 10 euro\n");
		}
	}
return 0;
system("PAUSE");
}

