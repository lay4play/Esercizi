#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAXN 100
//caricare un elenco di voti di una classe e calcolare la media dei voti
using namespace std;

struct s_alunno {
    char cognome[20];
    char nome[20];
    int voto;
};

int main(){ 
    int nalunni;
    s_alunno alunni[MAXN];
    char test[20];
    cout << "Inserisci il numero degli alunni: ";
    cin >> nalunni;
    fflush(stdin);
    for(char i=0;i<nalunni;i++){
        fflush(stdin);
        cout << "Inserisci il nome per il " << i+1 << " alunno: ";
        gets(alunni[i].nome);
        fflush(stdin);
        cout << endl << "Inserisci il cognome per il " << i+1 << " alunno: ";
        gets(alunni[i].cognome);
        fflush(stdin);
        cout << endl << "Inserisci il voto per il " << i+1 << " alunno: ";
        cin >> alunni[i].voto;
        cout << endl;
    }
    return 0;
}