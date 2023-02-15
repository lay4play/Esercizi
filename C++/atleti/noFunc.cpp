#include <iostream>
#include <cstring>
#include <cstdlib>
#define MAXA 16

using namespace std;
//caricare un vettore di 15 atleti con il loro tempo, ordinarlo e ordinare anche il tempo di un 16esimo atleta

struct s_atleta{
    char nome[20];
    char cognome[20];
    float tempo;
};

void bubblesort(s_atleta[], s_atleta, int);

int main(){
    s_atleta atleti[MAXA], tmp;
    //Richiede in input il nome, cognome e tempo di ogni singolo atleta senza rimpire però l'ultima posizione del vettore di strutture
    for(char i=0;i<MAXA-1;i++){
        cout << "Inserisci il nome dell'atleta: ";
        // cin.getline(atleti[i].nome);
        gets(atleti[i].nome);
        cout << "Inserisci il cognome dell'atleta: ";
        // cin.getline(atleti[i].cognome);
        gets(atleti[i].cognome);
        // fflush(stdin);
        cout << "Inserisci il tempo dell'atleta in secondi: ";
        cin >> atleti[i].tempo;
        // fflush(stdin);
        getchar();
    }while
    //Ordina il vettore in base al tempo minore
    bubblesort(atleti, tmp, MAXA-1);
    
    //Esegue l'output del vettore ordinato
    for(char i=0;i<MAXA-1;i++){
        cout << atleti[i].nome << " " << atleti[i].cognome << " " << atleti[i].tempo << endl;
    }
    //Richiede in input i dati del nuovo atleta
    cout << "Inserisci il nome dell'atleta: ";
    cin >> atleti[MAXA-1].nome;
    cout << "Inserisci il cognome dell'atleta: ";
    cin >> atleti[MAXA-1].cognome;
    cout << "Inserisci il tempo dell'atleta: ";
    cin >> atleti[MAXA-1].tempo;
    getchar(); //svuota buffer
    //Controlla se l'atleta può classificarsi nella classifica
    if(atleti[MAXA-1].tempo>atleti[MAXA-2].tempo){
        cout << "L'atleta non si è classificato nei " << MAXA-1 << " atleti con il punteggio più alto" << endl;
    } else {
        //Ri-esegue l'ordinamento
        bubblesort(atleti, tmp, MAXA);
		}
    }
    //Visualizza una classifica aggiornata
    for(char i=0;i<MAXA-1;i++){
        cout << atleti[i].nome << " " << atleti[i].cognome << " " << atleti[i].tempo << endl;
    }

    return 0;
}

void bubblesort(s_atleta atleti[], s_atleta tmp, int numero){
    bool stato;
    char j,i;
    do
    {
        for(char j=0;j<MAXA-2-i;j++){
            stato=false;
			if(atleti[j].tempo>atleti[j+1].tempo)
			{
				tmp.tempo=atleti[i].tempo;
                strcpy(tmp.nome,atleti[j].nome);
                strcpy(tmp.cognome,atleti[j].cognome);
				atleti[j].tempo=atleti[j+1].tempo;
                strcpy(atleti[j].nome,atleti[j+1].nome);
                strcpy(atleti[j].cognome,atleti[j+1].cognome);
				atleti[j+1].tempo=tmp.tempo;
                strcpy(atleti[j+1].nome,tmp.nome);
                strcpy(atleti[j+1].cognome,tmp.cognome);
                stato=true;
			}
            i++;
        }
    } while(j<numero-1 && stato);
    return;
}