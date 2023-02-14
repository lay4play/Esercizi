#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAXN 10                                         //numeri da generare
#define MAX 10                                          //valore massimo
#define MIN 0                                           //valore minimo

using namespace std;

int carica(int, int [], int, int);

int genera(int, int);

void valuta(int, int []);

int min(int, int []);

int max(int, int []);

float somma(int, int[]);

float media(int, int);

void visualizza(string, int);

void visualizzaFloat(string, float);

void scorri(int, int []);

int main(){
    int numeri[MAXN];
    srand(time(NULL));
    carica(MAXN, numeri, MIN, MAX);
    scorri(MAXN, numeri);
    valuta(MAXN, numeri);    
    system("PAUSE");
    return 0;
}

int carica(int n, int v[], int min, int max){
    for(short int i=0;i<n;i++){
        v[i]=genera(min, max);
    }
}

int genera(int min, int max){
    return min+rand()%(max-min);
}

void valuta(int n, int v[]){
    visualizza("Il numero massimo e' ", max(n, v));
    visualizza("Il numero minimo e' ", min(n, v));
    visualizzaFloat("La media dei numeri e'", somma(n, v));
    return;
}

int max(int n, int vett[]){
    int max;
    for(short int i=0;i<n;i++){
        if(i==0){
            max=vett[i];
        } else {
            if(vett[i]>max){
                max=vett[i];
            }
        }
    }
    return max;
}

int min(int n, int vd[]){
    int min;
    for(short int i=0;i<n;i++){
        if(i==0){
            min=vd[i];
        } else {
            if(vd[i]<min){
                min=vd[i];
            }
        }
    }
    return min;
}

float somma(int n, int ve[]){
    int somma=0;
    for(short int i=0;i<n;i++){
        somma+=ve[i];
    }
    float tmp=media(n, somma);
    return tmp;
}

float media(int numero, int tot){
    return (float)(tot/numero);
}

void visualizza(string messaggio, int valore){
    cout << messaggio << valore << endl;
    return;
}

void visualizzaFloat(string messaggio, float valore){
    cout << messaggio << valore << endl;
    return;    
}

void scorri(int n, int v[]){
    for(short int i=0;i<n;i++){
        cout << i+1 << " -- " << v[i] << endl;
    }
    return;
}