#include <iostream>

using namespace std;

//dato un vettore di 5 numeri calcolare somma media numero massimo e minimo

void inserisci(int []);

void media(int [], float &, float &);

int main()
{
    int vet[5];
    int somma, media, max, min;
    inserisci(vet);
    media(vet, somma, media);
}

void inserisci(int vet[])
{
    int k=0;
    do
    {
        cout << "Inserisci il numero nel vettore" << endl;
        cin >> vet[k];
    } while(k<5);
    return;
}

void media(int vet[], float &somma, float &media)
{
    int k=0;
    do
    {
        somma=somma+vet[k];
        k++;
    } while(k<5);
    media=somma/5;
    return;
}