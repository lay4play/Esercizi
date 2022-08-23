// memorizzare un array di 12 elementi
//calcolare la media 
//il numero totale di presenze nei mesi estivi (6 7 8)
//il massimo e la sua posizione 
//il minimo e la sua posizione
//la media di 6 7 8 
#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[12], i=0, min, minPos, max, maxPos, totaleEstate=i, totale=i, totaleSenzaInverno=i;
	for(i;i<12;i++){
		printf("Inserisci gli incassi per il mese %d\n", i+1);
		scanf("%d", &array[i]);
		totale=totale+array[i];
		if(i==5 || i==6 || i==7){
			totaleEstate=totaleEstate+array[i];
		}
		if(i!=0 || i!=1 || i!=2){
			totaleSenzaInverno=totaleSenzaInverno+array[i];
		}
		if(i==0){
			max=array[i];
			maxPos=i+1;
			minPos=maxPos;
			min=max;
		} else {
			if(max<array[i]){
				max=array[i];
				maxPos=i+1;
			} else {
				if(min>array[i]){
					min=array[i];
					minPos=i+1;
				}
			}
		}
	}
	printf("-----------\n");
	printf("La media e %d\nIl massimo e %d\nIn posizione %d\nIl minimo e %d\nIn posizione %d\nLa media dell'estate e %d\nIl totale in estate e %d\nLa media senza inverno e %d\n", totale/12, max, maxPos, min, minPos, totaleEstate/3, totaleEstate, totaleSenzaInverno/9);	
	return 0;
}
