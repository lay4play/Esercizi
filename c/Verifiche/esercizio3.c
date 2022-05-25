//caricare un vettore di num interi generati casualmente e compresi fra 0 e 50 dove num può essere 
// max 30 e calcolare il valore minimo e la sua posizione
#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[30], num, val, pos, i=0;
	srand(time(NULL));
	do{
		printf("Inserisci quanti numeri vuoi inserire\n");
		scanf("%d", &num);
	}while(num>30 || num<1);
	printf("---------\n");
	for(i;i<num;i++){
		array[i]=rand()%51;
		printf("%d\n", array[i]);
		if(i==0){
			pos=i+1;
			val=array[i];
		} else {
			if(val>array[i]){
				pos=i+1;
				val=array[i];
			}
		}
	}
	printf("il valore minimo e: %d\nla posizione e: %d\n", val, pos);
	return 0;

}