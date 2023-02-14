#include <iostream>
#include <cstdlib>
#define MAXN 10
using namespace std;

struct t_alunno{
    string cognome;
    string nome;
    int votoIta;
    int votoMat;
};

string leggiS(string msg){
    string aux;
    cout << msg;
    cin >> aux;
    return aux;
}

int leggiInt(string msg){
    int aux;
    cout << msg;
    cin >> aux;
    return aux;
}

int main(){
    t_alunno alunno;
    t_alunno alunni[MAXN];
    alunno.cognome=leggiS("Inserisci il cognome dell'alunno: ");
    alunno.nome=leggiS("Inserisci il nome dell'alunno: ");
    alunno.votoIta=leggiInt("Inserisci il voto in italiano");
    alunno.votoMat=leggiInt("Inserisci il voto di matematica");
    alunni[0].cognome=leggiS("Inserisci il cognome dell'alunno: ");
    alunni[0].nome=leggiS("Inserisci il nome dell'alunno: ");
    return 0;
}