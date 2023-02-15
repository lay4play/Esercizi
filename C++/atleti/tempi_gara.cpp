#include<iostream>
#include<cstdlib>
#define MAX 15

using namespace std;

struct s_tempi{
	char nome[20];
	char cognome[20];
	float tempi;
};

float in(string msg,int,int);
void input(int,s_tempi[]);
void bubbleSort(s_tempi[],int);
void ordina(s_tempi[],int);
void scambia(s_tempi[],s_tempi,int,int);
void visualizza(int,s_tempi[]);
bool controllo(int,s_tempi[],float);

int main(){
	s_tempi valori[MAX+1], tmp;
	
	input(MAX,valori);
	
	bubbleSort(valori,MAX);
	
	cout<<"I tempi migliori ordinati sono:\n";
	visualizza(MAX,valori);
	
	float val=in("Inserisci il tempo aggiuntivo: ",0.1,100);
	
	if(controllo(MAX,valori,val)){
		valori[MAX].tempi=val;
		ordina(valori,MAX+1);
		cout<<"I tempi con il tempo aggiuntivo: \n";
		visualizza(MAX,valori);
	}else{
		cout<<"Il tempo non rientra fra i tempi migliori!\n";
	}
	
	system("pause");
	return 0;
} 

void input(int n,s_tempi valori []){
	for(int i=0;i<n;i++){
		valori[i].tempi=in("Inserisci il valore: ",0.1,100);
		valori[i].nome=inS("Inserisci il nome dell'atleta: ");
	}
	return;
}

float in(string msg,int min,int max){
	float val;
	do{
		cout<<msg;
		cin>>val;
		if(val<=min||val>=max){
			cout<<"Inserisci un valore accettabile!\n";
		}
	}while(val<=min||val>=max);
	
	return val;
}

void bubbleSort(s_tempi valori[],int numero){
	int i=0;
	bool stato;
	do{
		stato=false;
		for(int j=0;j<numero-i-1;j++){
			if(valori[j].tempi>valori[j+1].tempi){
				scambia(valori,j,j+1);
				stato=true;
			}
		}
		i++;	
	}while(i<numero-1&&turret);
	return;
}

void ordina(s_tempi valori[],int numero){
	int pos=numero-1;
	for(int j=numero-2;j>=0;j--){
		if(valori[pos].tempi<valori[j].tempi){
			scambia(valori,pos,j);
			pos=j;
		}else{
			break;
		}
	}
	return;
}

void scambia(s_tempi valori[],int i,int j){
	float scambio=valori[i].tempi;
	valori[i].tempi=valori[j].tempi;
	valori[j].tempi=scambio;
	return;
}

void visualizza(int n,s_tempi valori []){
	for(int i=0;i<n;i++){
		cout<<valori[i].tempi<<"\n";
	}
	return;
}

bool controllo(int n,s_tempi valori [],float val){
	if(val>valori[n-1].tempi){
		return false;
	}
	return true;
}


