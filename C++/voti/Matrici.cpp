#include<iostream>
#include<cstdlib>
#include<cstring>
#define MAX_STUDENTI 30
#define MAX_MATERIE 10

/*
Scrivere un programma che acquisisce in input:
- un elenco di nominativi di studenti 
- un elenco di materie
- i voti che ciascuno studente ha preso in ogni materia

e calcoli con apposite funzioni:
- la media dei voti di tutti gli studenti in una materia
- la media dei voti di uno studente in tutte le materie
- la media generale della classe in tutte le materie
*/

using namespace std;

int inval(string msg,int max,int min);

void in_string(string arr[],int grand);

void in_mat(int voti[MAX_STUDENTI][MAX_MATERIE],int nstudenti,int nmaterie);

string inval(string msg);

float media_materia(int voti[MAX_STUDENTI][MAX_MATERIE],int nmaterie,string scelta,string arr[],int nstudenti);

float media_studente(int voti[MAX_STUDENTI][MAX_MATERIE],int nmaterie,string scelta,string arr[],int nstudenti);

float media_totale(int voti[MAX_STUDENTI][MAX_MATERIE],int nstudenti,int nmaterie);

int cerca(string arr[],int n,string scelta);

int main(){
	int nstudenti=inval("Inserisci il numero di studenti: ",MAX_STUDENTI,2);
	string studenti[MAX_STUDENTI];
	
	cout<<"Insersci i nominativi:\n";
	fflush(stdin);
	in_string(studenti,nstudenti);

	int nmaterie=inval("Inserisci il numero di materie: ",MAX_MATERIE,2);
	string materie[MAX_MATERIE];
	
	cout<<"Insersci le materie:\n";
	fflush(stdin);
	in_string(materie,nmaterie);
	
	int voti[MAX_STUDENTI][MAX_MATERIE];
	in_mat(voti,nstudenti,nmaterie);
	
	fflush(stdin);
	string smateria=inval("Inserisci la materia di cui vuoi conoscere la media di tutti gli studenti: ");
	cout<<"La media degli studenti su una singola materia e' "<<media_materia(voti,nmaterie,smateria,materie,nstudenti)<<"\n";
	
	string sstudenti=inval("Inserisci lo studente di cui vuoi conoscere la media di tutte le materie: ");
	cout<<"La media dello studente su tutte le materie e' "<<media_studente(voti,nmaterie,sstudenti,studenti,nstudenti)<<"\n";
	
	cout<<"La media generale della classe e' "<<media_totale(voti,nstudenti,nmaterie)<<"\n";

	system("pause");
	return 0;
} 

int inval(string msg,int max,int min){
	int val;
	cout<<msg;
	do{
		cin>>val;
		if(val<min||val>max){
			cout<<"Inserisci un valore accettabile!\n";
		}
	}while(val<min||val>max);
	return val;
}

void in_string(string arr[],int grand){
	for(int i=0;i<grand;i++){
		getline(cin,arr[i]);
	}
	return;
}

void in_mat(int voti[MAX_STUDENTI][MAX_MATERIE],int nstudenti,int nmaterie){
	for(int r=0;r<nstudenti;r++){
		for(int c=0;c<nmaterie;c++){
			voti[r][c]=inval("Inserisci il voto: ",10,4);
		}
	}
	return;
}

string inval(string msg){
	string val;
	cout<<msg;
	getline(cin,val);
	return val;
}

float media_materia(int voti[MAX_STUDENTI][MAX_MATERIE],int nmaterie,string scelta,string arr[],int nstudenti){
	int posi=cerca(arr,nmaterie,scelta),somma=0;
	if(posi==-1){
		return -1;
	}
	for(int i=0;i<nstudenti;i++){
		somma+=voti[i][posi];
	}
	return (float)somma/nstudenti;
}

int cerca(string arr[],int n,string scelta){
	for(int i=0;i<n;i++){
		if(arr[i]==scelta){
			return i;
		}
	}
	cout<<"L'input che hai fornito non porta a nessun risultato!\n";
	return -1;
}

float media_studente(int voti[MAX_STUDENTI][MAX_MATERIE],int nmaterie,string scelta,string arr[],int nstudenti){
	int posi=cerca(arr,nstudenti,scelta),somma=0;
	if(posi==-1){
		return -1;
	}
	for(int i=0;i<nmaterie;i++){
		somma+=voti[posi][i];
	}
	return (float)somma/nmaterie;
}

float media_totale(int voti[MAX_STUDENTI][MAX_MATERIE],int nstudenti,int nmaterie){
	int somma=0;
	for(int r=0;r<nstudenti;r++){
		for(int c=0;c<nmaterie;c++){
			somma+=voti[r][c];
		}
	}
	return (float)somma/(nmaterie*nstudenti);
}

