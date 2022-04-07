/* Scrivi un programma che presi in input gli estermi a e b di un intervallo ed un valore x visualizzi il messaggio "il valore è interno 
all'intervallo" se x è maggiore o uguale di a e minore uguale di b, altrimenti "Il valore è esterno all'intervallo"
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,a,b;
	printf("Inserisci l'estremo minore\n");
	scanf("%d", &a);
	printf("Inserisci l'estremo maggiore\n");
	scanf("%d", &b);
	printf("Inserisci il valore di x\n");
	scanf("%d", &x);
	if(x >= a && x <= b){
		printf("Il valore è interno all'intervallo\n");
	} else {
		printf("Il valore è esterno all'intervallo");
	}
	return 0;
	system("PAUSE");
}
