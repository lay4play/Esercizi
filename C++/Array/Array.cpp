#include <iostream>
#include <cstdlib>
#define MAXN 10 //numero di valori nell'array numeri
#define MAXTMP 2 //numero di valori nell'array temporaneo

using namespace std;

int main(){
    int  numeri[MAXN], numeroMassimo, numeroMinimo, tmp[MAXTMP];
    short int posizioneMax, posizioneMin;
    cout << "Inserire i numeri:" << endl;
    for(int i=0; i<MAXN;i++){
        cin >> numeri[i];
        if(i==0){
            numeroMassimo=numeroMinimo=numeri[i]; //il valore massimo ed il minimo assumono il valore del primo numero inserito
            posizioneMax=posizioneMin=0; //la posizione del valore massimo e minimo assumono il valore della prima iterazione
        } else {
            if(numeroMassimo < numeri[i]){
                numeroMassimo=numeri[i];
                posizioneMax=i;
            } else if(numeroMinimo > numeri[i]){
                numeroMinimo=numeri[i];
                posizioneMin=i;
            }
        }
    }
    tmp[0]=numeri[posizioneMax]; //------------------------------------------------------//
    tmp[1]=numeri[posizioneMin]; //             Scambio valori nelle rispettive          //
    numeri[posizioneMax]=tmp[1]; //                     variabili                        //
    numeri[posizioneMin]=tmp[0]; //------------------------------------------------------//
    for(int i=0;i < MAXN;i++){
        cout << numeri[i] << " ";
    }
    cout << endl; //fix % on VSC
    return 0;
    system("PAUSE");
}