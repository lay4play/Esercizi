#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#define MAX_MATERIE 50
#define MAX_ALUNNI 50
#define MIN_VOTI 1
#define MAX_VOTI 10

using namespace std;

int inval(string, int, int);

string invalS(string);

void caricaS(string [], string, int);

void caricaVoti(int [], string, int, int, string [], string []);

int caricaPerAlunno(string, int, string, int, string [], string []);

void visualizza(string [], int);

int main(){
    string alunni[MAX_ALUNNI], materie[MAX_MATERIE];
    int voti[MAX_MATERIE][MAX_ALUNNI], nalunni, nmaterie;
    nalunni=inval("Inserisci il numero di alunni", 1, 50);
    nmaterie=inval("Inserisci il numero di materie", 1, 50);
    caricaS(alunni, "Inserisci il nome dell'alunno", nalunni);    caricaS(materie, "Inserisci le materie", )
    caricaS(materie, "Inserisci le materie", nmaterie);
    caricaVoti(voti[MAX_MATERIE][MAX_ALUNNI], "Inserisci i voti dell'alunno per la materia", MAX_MATERIE, MAX_ALUNNI, alunni, materie);

    // carica(voti[MAX_MATERIE][MAX_ALUNNI], "Inserisci i voti dell'alunno", MAX_MATERIE, MAX_ALUNNI);
    // visualizza(alunni, nalunni);
    return 0;
}
//caricamento voti per singolo studente
void caricaVoti(int voti[MAX_MATERIE][MAX_ALUNNI], "Inserisci i voti dell'alunno per la materia", int nmaterie, int nalunni, string alunni[], string materie[]){
    for(int alunno;alunno<nalunni;alunno++){
        for(int materia=0;materia<nmaterie;materia++){
            voti[materia][alunno]=caricaPerAlunno("Inserisci il voto per lo studente", alunno, " nella materia", materia, alunni[], materie[]);
        }
    }
    return;
}
//carica voti per singolo alunno
int caricaPerAlunno(string messaggio, int index, string messaggio1, int index2, string array[], string array1[]){
    string messaggio2;
    messaggio2+=messaggio;
    messaggio2+=array[index];
    messaggio2+=messaggio1;
    messaggio2+=array1[index2];
    // cout << messaggio << array[index] << messaggio1 << array1[index2] << endl;
    return inval(messaggio2, 0, 10);   
}
void caricaMat(int [MAX_MATERIE][MAX_ALUNNI], int maxRighe, int maxColonne, string alunno){
    for(int r=0;c<maxRighe;r++){
        for(int c=0;c<maxColonne;c++){
            cout << "Inserisci i voti per "
            cin >> matrice[r][c];
        }
    }
    return;
}

void visualizza(string vet[], int posMax){
    for(int i=0;i<posMax;i++){
         cout << vet[i];
    }
    return;
}
void caricaS(string str[], string messaggio, int posMax){
    for(int i=0;i<posMax;i++){
        str[i]=invalS(messaggio);
    }
    return;
}

string invalS(string messaggio){
    string aux;
    fflush(stdin);
    cout << messaggio << endl;
    getline(cin, aux);
    return aux;
}

int inval(string messaggio, int min, int max){
    int aux;
    do{
        cout << messaggio << endl;
        cin >> aux;
        if(aux>max || aux<min){
            cout << "Valore fuori dai limiti imposti, numero minimo " << min << " numero massimo: " << max << endl;
        }
    } while (aux>max || aux<min);
    return aux;
}