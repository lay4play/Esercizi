#include <iostream>
#include <cstring>
#include <cstdlib>
#define MAXA 3

using namespace std;
//caricare un vettore di 15 atleti con il loro tempo, ordinarlo e ordinare anche il tempo di un 16esimo atleta

struct s_atleta{
    char nome[20];
    char cognome[20];
    float tempo;
};

float inval(string, int, int);

void input(struct s_atleta[],int,int,string,string,string);


char invalS(string);

int main(){
    s_atleta atleti[MAXA], tmp;
    input(atleti,0,100,"Inserisci il nome dell'atleta", "Inserisci il cognome dell'atleta","Inserisci il tempo dell'atleta", MAXA, 1);
    for(char i=0;i<MAXA;i++){
        
    }
    for(char j=0;j<MAXA-2;j++)
		for(char i=0;i<MAXA-2;i++)
			if(atleti[i].tempo>atleti[i+1].tempo)
			{
				tmp.tempo=atleti[i].tempo;
                strcpy(tmp.nome,atleti[i].nome);
                strcpy(tmp.cognome,atleti[i].cognome);
				atleti[i].tempo=atleti[i+1].tempo;
                strcpy(atleti[i].nome,atleti[i+1].nome);
                strcpy(atleti[i].cognome,atleti[i+1].cognome);
				atleti[i+1].tempo=tmp.tempo;
                strcpy(atleti[i+1].nome,tmp.nome);
                strcpy(atleti[i+1].cognome,tmp.cognome);
			}

    
    
    for(char i=0;i<MAXA-1;i++){
        cout << atleti[i].nome << " " << atleti[i].cognome << " " << atleti[i].tempo << endl;
    }
    cout << "Inserisci il nome dell'atleta: ";
    cin >> atleti[MAXA-1].nome;
    cout << "Inserisci il cognome dell'atleta: ";
    cin >> atleti[MAXA-1].cognome;
    cout << "Inserisci il tempo dell'atleta: ";
    cin >> atleti[MAXA-1].tempo;
    getchar(); //svuota buffer

    if(atleti[MAXA-1].tempo>atleti[MAXA-2].tempo){
        cout << "L'atleta non si è classificato nei 15 atleti con il punteggio più alto" << endl;
        return 0;
    } else {
        for(char j=0;j<MAXA-1;j++)
		    for(char i=0;i<MAXA-1;i++)
			    if(atleti[i].tempo>atleti[i+1].tempo)
			    {
				    tmp.tempo=atleti[i].tempo;
                    strcpy(tmp.nome,atleti[i].nome);
                    strcpy(tmp.cognome,atleti[i].cognome);
				    atleti[i].tempo=atleti[i+1].tempo;
                    strcpy(atleti[i].nome,atleti[i+1].nome);
                    strcpy(atleti[i].cognome,atleti[i+1].cognome);
				    atleti[i+1].tempo=tmp.tempo;
                    strcpy(atleti[i+1].nome,tmp.nome);
                    strcpy(atleti[i+1].cognome,tmp.cognome);
			    }
    for(char i=0;i<MAXA-1;i++){
        cout << atleti[i].nome << " " << atleti[i].cognome << " " << atleti[i].tempo << endl;
    }
    }
    return 0;
}

float inval(string messaggio, int min, int max){
    int aux;
    bool status;
    do
    {
        status=false;
        cout << messaggio << endl;
        cin << aux;
        if(aux>max||aux<<min){
            cout << "Valore non valido" << endl;
            status=true;
        } 
    } while(status);
    return aux;   
}

char invalS(string messaggio){
    char aux[20];
    cout << messaggio << endl;
    getline(cin,aux);
    return aux;
}

void input(struct s_atleta atleti[],int min,int max ,string nome ,string cognome ,string tempo, int elementi, int resto){
    for(char i=0;i<elementi-resto;i++){
        strcpy(atleti[i].nome,invalS(nome));
        strcpy(atleti[i].cognome,invalS(cognome));
        atleti[i].tempo=inval(tempo, 0, 100);
        getchar();
    }
    return;
}