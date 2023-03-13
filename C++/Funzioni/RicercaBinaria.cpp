#include <iostream>

using namespace std;

int ricercaBinaria(int vettore[], int n, int x){
    int aux=-1;
    int inizio=0, fine=0,centro;

    while(inizio<=fine && aux==-1){
        centro=inizio+(fine-inizio)/2;
        if(v[centro]==x){aux=centro;} 
        else if(v[centro]>x){fine=centro-1;} 
        else {inizio=centro+1;}
    }
    return -1;
}

int ricerca_bin(int vet[], int primo, int ultimo, int elemento) {
    int med;
    if (primo > ultimo) {
        return -1;
    }
    med = (primo + ultimo) / 2;
    if (elemento == vet[med]) {
        return med;
    }
    else if (elemento > vet[med]) {
        return ricerca_bin(vet, med+1, ultimo, elemento);
    } else {
        return ricerca_bin(vet, primo, med-1, elemento);
    }
}