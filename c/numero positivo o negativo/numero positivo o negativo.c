#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	printf("Inserisci un numero\n");
	scanf("%d", &a);
	if(a>0){
		printf("Il numero è positivo\n");
	} else {
		printf("Il numero è negativo\n");
	}
	return 0;
}
