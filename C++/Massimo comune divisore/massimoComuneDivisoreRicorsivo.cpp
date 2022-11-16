#include<cstdlib>
#include<iostream>

using namespace std;

int input(string messaggio,int nonAccettabile);
int scambio(int primoNumero,int secondoNumero);
int restoDisivisione(int primoNumero,int secondoNumero);

int main(){
	int primoNumero,secondoNumero;
	//Primo valore inserito, secondo valore inserito
	cout<<"Inserire due numeri positivi per il calcolo del m.c.d.\n";
	primoNumero=input("Inserisci il primo valore: ",0);
	secondoNumero=input("Inserisci il secondo valore: ",0);
	cout<<"L'm.c.d. fra "<<primoNumero<<" e "<<secondoNumero<<" e' "<< scambio(primoNumero,secondoNumero)<< endl;
	system("PAUSE");
	return 0;
}

int input(string messaggio,int nonAccettabile){
	int risposta;
	//Input utente
	do{
		cout<<messaggio;
		cin>>risposta;
		if(risposta<=nonAccettabile){
			cout<<"Valore inserito non accettabile. Inserire un valore maggiore di "<<nonAccettabile<<"!\n";
		}
	}while(risposta<=nonAccettabile);
	return risposta;
}

int scambio(int primoNumero,int secondoNumero){
	if(primoNumero<secondoNumero){
		int scambio;
		//Variabile temporanea per scambiare i due valori
		scambio=primoNumero;
		primoNumero=secondoNumero;
		secondoNumero=scambio;
	}
	return restoDisivisione(primoNumero,secondoNumero);
}

int restoDisivisione(int primoNumero,int secondoNumero){
	int resto=primoNumero%secondoNumero;
	//Variabile per il calcolo del resto
	if(resto==0){
		return secondoNumero;
	}
	primoNumero=secondoNumero;
	secondoNumero=resto;
	return restoDisivisione(primoNumero,secondoNumero);
}

