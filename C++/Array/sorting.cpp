#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAXN 30                 //numeri da generare
#define MAX 1000                //valore massimo accettabile
#define MIN 0                   //valore minimo accettabile

/*
Scrivi un programma che generi casualmente 30 numeri di valore minore di 1000, li memorizzi in un vettore e visualizzi dal più piccolo
al più grande i numeri pari. Ordinare sia con il selection sort che con il bubble sort visualizzando in entrambi i casi il numero di 
confronti e scambi effettuati.
*/

using namespace std;

void copia(int [], int [], int);

int carica(int [], int);

int genera(int, int);

void bubbleSort(int [], int);

void scambia(int &, int &);

void visualizza(int [], int);

void visualizzaPari(int [], int);

void selSort(int [], int);

int main(){
    int array[MAXN];            //bubleSort
    int arrayBackup[MAXN];      //selSort
    srand(time(NULL));          //generazione seme
    carica(array, MAXN, MIN, MAX);
    copia(array, arrayBackup, MAXN);
    visualizza(array, MAXN);
//    visualizza(arrayBackup, MAXN);
    bubbleSort(array, MAXN);
    selSort(arrayBackup, MAXN);
    visualizzaPari(array, MAXN);
    system("PAUSE");
    return 0;
}

void copia(int v[], int v1[], int n){
    for(int i=0;i<n;i++){
        v1[i]=v[i];
    }
    return;
}

int carica(int v[], int valori, int min, int max){
    for(short int i=0; i<valori; i++){
        v[i]=genera(min, max);
    }
}

int genera(int min, int max){
    return min+rand()%(max-min);
}

void bubbleSort(int v[], int n){
    int scambi=0, confronti=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            confronti++;
            if(v[j]>v[j+1]){
                scambia(v[j], v[j+1]);
                scambi++;
            }
        }   
    }
    cout << "Bubble sort: " << "Scambi: " << scambi << ". Confronti: " << confronti << endl;
    return;
}

void scambia(int &x, int &y){
    int aux=x;
    x=y;
    y=aux;
    return;
}

void visualizza(int v[], int valori){
    for(int i=0; i<valori; i++){
        cout << v[i] << endl;
    }
    return;
}

void visualizzaPari(int v[], int valori){
    for(int i=0; i<valori; i++){
        if(v[i]%2==0){
            cout << v[i] << endl;
        }
    }
    return;
}

void selSort(int vB[], int valori){
    int scambi=0, confronti=0, aux=0;
    for(int i=0; i<valori-1;i++){
        confronti++;
        for(int j=i+1; j<valori; j++){
            if(vB[j]<vB[i]){
                scambi++;
                scambia(vB[i], vB[j]);
            }
        }
    }
    cout << "selSort: " << "Scambi: " << scambi << ". Confronti: " << confronti << endl;
    return;
}