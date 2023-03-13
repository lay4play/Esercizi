#include <iostream>
#include <cstring>
#include <cstdlib>
#define MAXA 16
#define MIN_TIME 1
#define MAX_TIME 1000

using namespace std;
//caricare un vettore di 15 atleti con il loro tempo, ordinarlo e ordinare anche il tempo di un 16esimo atleta controllando se rientra nella top MAXA-1 atleti.

/*
Analisi aggiuntive:
-Si presuppone che l'intervallo di tempo sia compreso tra 1 secondo e 1000 secondi;
-Si presuppone che sia necessario fornire in input i dati anagrafici degli atleti ed il loro tempo;
-Si presuppone che il tempo venga misurato in secondi
-Si presuppone che nella classifica vengano visualizzati solo i MAXA-1 migliori atleti;
*/

struct s_atleta{
    char nome[20];
    char cognome[20];
    float tempo;
};

void invalS(char[], string);

float inval(string, int, int);

void sort(s_atleta[], int);

void scambia(s_atleta[], int, int);

void input(s_atleta[], int, int, int, int);

void visualizza(s_atleta[], int);

int main(){
    s_atleta atleti[MAXA];
    //Richiede in input il nome, cognome e tempo di ogni singolo atleta senza rimpire però l'ultima posizione del vettore di record
    input(atleti, MAXA-1, 0, MIN_TIME, MAX_TIME);
    //Ordina il vettore in base al tempo minore, inorando l'ultimo elemento del vettore di record
    sort(atleti, MAXA-1);
    //Esegue l'output del vettore ordinato
    visualizza(atleti, MAXA);
    //Richiede in input i dati del nuovo atleta, specificando l'utilizzo solo dell'ultimo indice del vettore di record
    input(atleti, MAXA, MAXA-1, MIN_TIME, MAX_TIME);
    //Controlla se l'atleta può classificarsi in classifica
    if(atleti[MAXA-1].tempo>atleti[MAXA-2].tempo){
        cout << "L'atleta non si è classificato nella top " << MAXA-1 << " atleti con il punteggio più alto" << endl;
    } else {
        sort(atleti, MAXA);
    }
    //Visualizza una classifica aggiornata
    visualizza(atleti,MAXA);
    // system("PAUSE");
    return 0;
}

float inval(string messaggio, int min, int max){
    float aux;
    do {
        cout << messaggio;
        cin >> aux;
        if(aux>max||aux<min){
            cout << "valore non valido."<<endl;
        }
    }while(aux > max||aux < min);
    return aux;
}

void sort(s_atleta atleti[],int numero){
	s_atleta tmp;
    int i=0;
	bool stato;
	do{
        stato=false;
		for(int j=0;j<numero-i-1;j++){
			if(atleti[j].tempo>atleti[j+1].tempo){
                scambia(atleti,j,j+1);
                stato=true;
			}
		}	
        i++;
	}while(i<numero-1 && stato);
	return;
}

void input(s_atleta atleti[], int n, int start, int min, int max){
    for(char i=start;i<n;i++){
        invalS(atleti[i].nome,"Inserisci il nome dell'atleta: ");
        invalS(atleti[i].cognome, "Inserisci il cognome dell'atleta: ");
        // fflush(stdin);
        atleti[i].tempo=inval("Inserisci il tempo dell'atleta in secondi: ",min,max);
        getchar();       //!!
        }
    return;
}

void visualizza(s_atleta atleti[], int numero){
    for(char i=0;i<numero-1;i++){
        cout << atleti[i].nome << " | " << atleti[i].cognome << " | " << atleti[i].tempo << endl;
    }
    return;
}

void scambia(s_atleta atleti[],int i, int i1){
    s_atleta tmp;


    tmp.tempo=atleti[i].tempo;                          //
    strcpy(tmp.nome,atleti[i].nome);                    // Spostamento valori variabile temporanea
    strcpy(tmp.cognome,atleti[i].cognome);              //

    atleti[i].tempo=atleti[i+1].tempo;                   
    strcpy(atleti[i].nome,atleti[i+1].nome);            
    strcpy(atleti[i].cognome,atleti[i+1].cognome);      
    
    atleti[i+1].tempo=tmp.tempo;                        //
    strcpy(atleti[i+1].nome,tmp.nome);                  // Sposta il record atleti tmp nella variabile corrente
    strcpy(atleti[i+1].cognome,tmp.cognome);            //

    return;
}

void invalS(char output[], string messaggio){
    cout << messaggio;
    gets(output);
    return;
}