#include<iostream>
#include<cstdlib>
#include<cstring>
#define MAX 50

using namespace std;

struct s_atleti{
	char nome[100];
	int altezza;
	int peso;
};

int in(string msg,int,int);

void in_char(string msg,s_atleti[],int);

void input(int,s_atleti[]);

void visualizza(int,s_atleti[],int);

void ordina(s_atleti[],int,int);

void scambia(s_atleti[],int,int,int);

void scambia_char(s_atleti[],int,int);

void in_char_normale(string msg,char[]);

int cerca(s_atleti[],int,char[]);

int cerca_int(s_atleti[],int);

int main(){
	s_atleti valori[MAX];
	
	int N=in("Inserisci il numero di atleti: ",1,51);
	input(N,valori);
	
	cout<<"Gli atleti visualizzati in ordine di peso:\n";
	//0 per ordinare in ordine di peso
	ordina(valori,N,0);
	//0 per visualizzare il record completo
	visualizza(N,valori,0);
	
	cout<<"Gli atleti visualizzati in ordine di altezza:\n";
	//1 per ordinare in ordine di altezza
	ordina(valori,N,1);
	//0 per visualizzare il record completo	
	visualizza(N,valori,0);
	
	
	char aggiuntivo[100];
	fflush(stdin);
	in_char_normale("Inserisci il nome: ",aggiuntivo);
	
	if(cerca(valori,N,aggiuntivo)==-1){
		cout<<"Nome non presente negli atleti!\n";
	}else{
		cout<<"I campi di quel valore sono:\n";
		//1 per stampare l'atleta scelto
		visualizza(cerca(valori,N,aggiuntivo),valori,1);
	}
	
	cout<<"L'atleta piu' pesante e':\n";
	//2 per visualizzare l'atleta più pesante
	visualizza(N,valori,2);
	
	cout<<"L'atleta piu' alto e':\n";
	//3 per visualizzare l'atleta più alto
	visualizza(N,valori,3);
	
	system("pause");
	return 0;
} 

int in(string msg,int min,int max){
	int val;
	do{
		cout<<msg;
		cin>>val;
		if(val<=min||val>=max){
			cout<<"Inserisci un valore accettabile!\n";
		}
	}while(val<=min||val>=max);
	return val;
}

void in_char(string msg,s_atleti valori[],int i){
	cout<<msg;
	gets(valori[i].nome);
	return;
}

void input(int n,s_atleti valori[]){
	for(int i=0;i<n;i++){
		fflush(stdin);
		in_char("Inserisci il nome: ",valori,i);
		valori[i].altezza=in("Inserisci il valore in cm: ",120,210);
		valori[i].peso=in("Inserisci il valore in kg: ",40,100);	
	}
	return;
}

void visualizza(int n,s_atleti valori[],int condizione){
	if(condizione==0){
		for(int i=0;i<n;i++){
			cout<<valori[i].nome<<" "<<valori[i].altezza<<" "<<valori[i].peso<<"\n";
		}
	}else if(condizione==1){
		for(int i=n;i<n+1;i++){
			cout<<valori[i].nome<<" "<<valori[i].altezza<<" "<<valori[i].peso<<"\n";	
		}
	}else if(condizione==2){
		for(int i=cerca_int(valori,n);i<cerca_int(valori,n)+1;i++){
			cout<<valori[i].nome<<" "<<valori[i].altezza<<" "<<valori[i].peso<<"\n";	
		}
	}else{
		for(int i=n-1;i<n;i++){
			cout<<valori[i].nome<<" "<<valori[i].altezza<<" "<<valori[i].peso<<"\n";		
		}	
	}
	
	return;
}

void ordina(s_atleti valori[],int numero,int condizione){
	int i=0;
	bool turret;
	if(condizione==0){ //ordina per peso
		do{
		turret=false;
		for(int j=0;j<numero-i-1;j++){
			if(valori[j].peso>valori[j+1].peso){
				scambia(valori,j,j+1,0);//0 scambio peso
				scambia(valori,j,j+1,1);//1 scambio altezza
				scambia_char(valori,j,j+1);
				turret=true;
			}
		}
		i++;	
		}while(i<numero-1&&turret);
	}else{ //ordina per atlezza
		do{
		turret=false;
		for(int j=0;j<numero-i-1;j++){
			if(valori[j].altezza>valori[j+1].altezza){
				scambia(valori,j,j+1,0);//0 scambio peso
				scambia(valori,j,j+1,1);//1 scambio altezza
				scambia_char(valori,j,j+1);
				turret=true;
			}
		}
		i++;	
		}while(i<numero-1&&turret);
	}
	return;
}

void scambia(s_atleti valori[],int i,int j,int condizione){
	if(condizione==0){
		int scambio=valori[i].peso;
		valori[i].peso=valori[j].peso;
		valori[j].peso=scambio;	
	}else{
		int scambio=valori[i].altezza;
		valori[i].altezza=valori[j].altezza;
		valori[j].altezza=scambio;		
	}
	return;
}

void scambia_char(s_atleti valori[],int i,int j){
	char scambio[100];
	strcpy(scambio,valori[i].nome);
	strcpy(valori[i].nome,valori[i+1].nome);
	strcpy(valori[i+1].nome,scambio);
	return;
}

void in_char_normale(string msg,char nome[]){
	cout<<msg;
	gets(nome);
	return;
}

int cerca(s_atleti valori[],int numero,char nome[]){
	for(int i=0;i<numero;i++){
		if(strcmp(nome,valori[i].nome)==0){
			return i;
		}
	}
	return -1;
}

int cerca_int(s_atleti valori[],int numero){
	int pos=0;
	int max=valori[0].peso;
	for(int i=1;i<numero;i++){
		if(max<valori[i].peso){
			max=valori[i].peso;
			pos=i;
		}
	}
	return pos;
}

/*
Chiedere in input i dati di N atleti (Nome, altezza, peso), visualizzarli prima in ordine di peso poi di altezza.
Infine scrivere le seguenti funzioni:
1) "visualizzaAtleta" che ricevuto il record di un atleta, visualizza i 3 campi;
2) "piuPesante" che deve restituire il record dell'atleta più pesante;
3) "piuAlto" che deve restituire il record dell'atleta più alto;


Utilizzare la funzione 1) sia nella visualizzazione degli elenchi ordinati degli atleti sia per visualizzare i dati ottenuti con le funzioni 2) e 3)
*/


