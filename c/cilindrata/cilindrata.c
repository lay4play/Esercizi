#include <stdio.h>
#include <stdlib.h>

int main(){
	int cilindrata, tipo;
	printf("Hai un camion? [1: si| 2: no]\n");
	scanf("%d", &tipo);
	printf("Inserisci la cilindrata");
	scanf("%d", &cilindrata);
	if(tipo == 1) {
		if(cilindrata <= 2000){
			printf("Il costo è: 40€");
		} else {
			if(cilindrata > 3000){
				printf("Il costo è: 100€");
			} else {
				printf("Il costo è: 50€");
			}
		}
	} else {
		if(cilindrata <= 1000){
				printf("Il costo è: 20€");
			} else {
				if(cilindrata <= 2000){
					printf("Il costo è: 30€");
				} else {
					printf("Il costo è: 40€");
				}
			} 
		}
	return 0;
	}
