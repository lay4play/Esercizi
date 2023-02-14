#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#define MAXN 99
#define MINN 10
#define MAXR 255
#define MAXC 255

using namespace std;
//cercare il minimo il massimo e la media della matrice e di una determinata riga
int input(string, int, int);

int input1(string, int, int, int, int);

int genera(int, int);

void carica(int [MAXR][MAXC], int, int, int, int);

void visualizza(int [MAXR][MAXC], int, int);

int somma(int [MAXR][MAXC], int, int);

float media(int [MAXR][MAXC], int, int);

int massimo(int [MAXR][MAXC], int, int);

float mediaSi(int [MAXR][MAXC], int, int);

int sommaSi(int [MAXR][MAXC], int, int);

int main(){
    srand(time(NULL));
    int matrice[MAXR][MAXC];
    int righe=input("Inserisci le righe", 0, MAXR);
    int colonne=input("Inserisci le colonne", 0, MAXC);
    carica(matrice, righe, colonne, MINN, MAXN);
    visualizza(matrice, righe, colonne);
    cout << "La media e' " << media(matrice, righe, colonne) << endl;
    int riga=input("Inserisci la riga di cui fare la media", 0, MAXR);
    cout << "La media della riga " << riga << " e': " << mediaSi(matrice, riga, colonne) << endl;;
}

int input(string messaggio, int min, int max){
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

int genera(int min, int max){
    return min+rand()%(max-min);
}

void carica(int matrice[MAXR][MAXC], int righe, int colonne, int min, int max){
    for(char r=0;r<righe;r++){
        for(char c=0;c<colonne;c++){
//              matrice[r][c] = genera(min, max);
                matrice[r][c] = input1("Inserisci un numero", min, max, r, c);
        }
    }
    return;
}

void visualizza(int matrice[MAXR][MAXC], int righe, int colonne){
    for(char r=0;r<righe;r++){
        for(char c=0;c<colonne;c++){
            cout << "| " << matrice[r][c] << " | ";
        }
        cout << endl;
    }
}

int somma(int matrice[MAXR][MAXC], int righe, int colonne){
    int aux=0;
    for(char r=0;r<righe;r++){
        for(char c=0;c<colonne;c++){
            aux+=matrice[r][c];
        }
    }
    return aux;
}

float media(int matrice[MAXR][MAXC], int righe, int colonne){
    return (float)(somma(matrice, righe, colonne))/(righe*colonne);
}

int sommaSi(int matrice[MAXR][MAXC], int riga, int colonne){
    int aux=0;
    for(char c=0;c<colonne;c++){
        aux+=matrice[riga][c];
    }
    return aux;
}

float mediaSi(int matrice[MAXR][MAXC], int riga, int colonne){
    return (float)sommaSi(matrice, riga, colonne)/colonne;
}

int input1(string messaggio, int min, int max, int riga, int colonna){
    int aux;
    do{
        cout << messaggio << "(" << riga << "," << colonna << ")" << endl;
        cin >> aux;
        if(aux>max || aux<min){
            cout << "Valore fuori dai limiti imposti, numero minimo " << min << " numero massimo: " << max << endl;
        }
    } while (aux>max || aux<min);
    return aux;
}