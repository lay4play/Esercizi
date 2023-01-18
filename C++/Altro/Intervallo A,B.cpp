#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

/*Dati in input due numeri interi positivi A e B,
si visualizzi in ordine decrescente tutti i numeri primi compresi tra A e B (si includa A e B se sono primi).
Usare opportunamente le funzioni per l'input, per l'output e per determinare se un numero è primo oppure no.*/

int input(string messaggio);
bool Primo(int x);

int main(){
	int a,b;
	do{
		a=input("Inserisci l'intervallo a: ");
		b=input("Inserisci l'intervallo b: ");
	}while(a<1||b<1);
	for(int n=b;n>=a;n--){	
		if(Primo(n)==true){
			cout<<n<<"\n";
		}	
	}
	system("pause");
	return 0;
}

int input(string messaggio){
	int risp;
	cout<<messaggio;
	cin>>risp;
	return risp;
}

bool Primo(int x){
	bool prime;
	int divisore=1,i=0;
	if(x==1){
		prime=true;	
	}else{
		while(divisore<=x/2&&i<2){
			if(x%divisore==0){
				i++;
			} 
			divisore++;
		}
		if(i==1){
			prime=true;	
		}
	}
	return prime;
}
