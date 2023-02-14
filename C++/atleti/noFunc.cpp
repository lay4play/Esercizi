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

int main(){
    s_atleta atleti[MAXA], tmp;
    for(char i=0;i<MAXA-1;i++){
        cout << "Inserisci il nome dell'atleta: ";
        // cin.getline(atleti[i].nome);
        cin >> atleti[i].nome;
        cout << "Inserisci il cognome dell'atleta: ";
        // cin.getline(atleti[i].cognome);
        cin >> atleti[i].cognome;
        cout << "Inserisci il tempo dell'atleta: ";
        cin >> atleti[i].tempo;
        // fflush(stdin);
        getchar();
    }
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