#include<iostream>
#include<cstdlib>
#include <cmath>

/*Dati in input due numeri interi positivi A e B,
si visualizzi in ordine decrescente tutti i numeri primi compresi tra A e B (si includa A e B se sono primi).
Usare opportunamente le funzioni per l'input, per l'output e per determinare se un numero � primo oppure no.*/
using namespace std;

int messaggio(string messaggio);

bool Primo(unsigned long long int x);

int main(){
	unsigned long long int a,b,max; //min 1, max 2^64-1
	max=(pow(2, 64) -1); //calcola il massimo valore 64 bit senza segno
	do{
		a = messaggio("Inserisci il valore A: ");
		b = messaggio("Inserisci il valore B: ");
	}while(a < 1 || b < 1 || a > b);
	if(a > max || b > max){ //controlla che uno dei due numeri inseriti non superi il range
		cout << "Out of range" << endl;
		return -1;
		system("pause");
	} 
	for(unsigned long long int n = b;n >= a;n--){	
		if(Primo(n) == true){
			cout << n << endl;
		}	
	}
	return 0;
	system("pause");
}

int messaggio(string messaggio){
	unsigned long long int input;
	cout << messaggio;
	cin >> input;
	return input;
}

bool Primo(unsigned long long int x){
	bool primi;
	unsigned long long int div=1,i=0;
	if(x == 1){
		primi = true;	
	}else{
		while(div <= x/2 && i<2){
			if(x%div == 0){
				i++;
			} 
			div++;
		}
		if(i == 1){
			primi = true;	
		}
	}
	return primi;
}
