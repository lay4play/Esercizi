#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
#define MAXN 30																									//grandezza vettore
#define MAX 100																									//valore massimo generabile
#define MIN 1																									//valore minimo generabile

using namespace std;

void genera(int[], int, int, int);

void visualizza(int[], int);

void contaNumeri(int[], int, int &, int &);

/*Dopo aver riempito e visualizzato un vettore di 30 numeri interi positivi generati casualmente e compresi tra 1 e 100,
scrivere ed utilizzare una funzione contaPP(...) che individui quanti sono i numeri primi e quanti i numeri perfetti.*/

int main(){
	srand(time(NULL));																							//generazione seme srand
	int Numeri[MAXN],primi=0,perfetti=0;
	genera(Numeri, MAXN, MAX, MIN);
	cout<<"I numeri generati sono:\n";
	visualizza(Numeri,MAXN);	
	contaNumeri(Numeri,MAXN,primi,perfetti);
	cout<<"I numeri primi sono "<< primi <<" e i numeri perfetti sono "<< perfetti <<"\n";
	system("pause");
	return 0;
}

void genera(int Numeri[],int indice, int max, int min){
	for(int i=0;i<indice;i++){
		Numeri[i]=rand()%max+min;																				//funzione per generare numeri casuali dato il valore massimo accettaile +1 
	}
	return;
}

void visualizza(int Numeri[],int indice){
	for(int i=0;i<indice;i++){
		cout<<Numeri[i]<<"\n";
	}
	return;
}

void contaNumeri(int Numeri[],int indice,int &primi,int &perfetti){
	int k=2,div=0,somma=0;
	for(int i=0;i<indice;i++){
		if(Numeri[i]==1){
			primi++;
		}else{
			while(k<=sqrt(Numeri[i])){
				if(Numeri[i]%k==0){
					div++;
					break;																						//uscita forzata dal ciclo
				}
				k++;
			}
			if(div==0){
				primi++;
			}		
		}
		k=1;
		while(k<=Numeri[i]/2){
			if(Numeri[i]%k==0){
				somma+=k;
			}
			k++;
		}
		if(somma==Numeri[i]){
			perfetti++;
		}
		somma=0;
		k=2;
		div=0;	
	}
	return;
}

