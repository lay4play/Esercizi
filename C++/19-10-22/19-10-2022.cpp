#include <iostream>
#include <cstdlib>

using namespace std;

/*
Data una sequenza di numeri 
    INTERI
    POSITIVI
    DIVERSI DA 0
Tappo di inserimento lo 0
presentare menu' per scegliere se visualizzare
    numero di coppie consecutive uguali
    numero coppie in cui il secondo e' divisore del primo
    indicare con un messaggio quale sia presente in maggioranza
*/
int input(string);

bool coppieConsecutive(int, int);

bool divisori(int, int);

int confronto(int, int);

void menu(int, int, int);

int main() {
    int numeroPrima; //primo numero da analizzare
    int numeroDopo; //secondo numero da analizzare
    int ccCoppie=0; //contatore coppie consecutive uguali
    int ccDivisori=0; //contatore coppie divisori
    bool i=false; //controllo stato esecuzione ciclo
    do{
        numeroDopo=input("Inserisci numero: ");
        if( numeroDopo != 0){
            if(i){ //controllo alterazione variabile contatore
                if(coppieConsecutive(numeroPrima, numeroDopo) == true){
                    ccCoppie++;
                } else {
                    if(divisori(numeroPrima, numeroDopo) == true){
                    ccDivisori++;
                }
            }
        } else {
            i=true; //alterazione variabile esecuzione
        }
//        cout << ccCoppie << endl << ccDivisori << endl;
        numeroPrima=numeroDopo;
    } while(numeroPrima != 0);
    short int conf=confronto(ccDivisori, ccCoppie);
    menu(ccCoppie, ccDivisori, conf);
    return 0;
}

int variabili(string messaggio){
    int numero;
    do{
        cout << messaggio;
        cin >> numero;
        if(numero<0){
            cout << "out of range";
        }
    } while(numero < 0);
    return numero;
}

bool coppieConsecutive(int numero1, int numero2){
//    numero1++;
    if(numero1==numero2){
        return true;
    } else {
        return false;
    }
    return false;
}

bool divisori(int numero1, int numero2){
    if(numero2 % numero1 == 0 && numero1 != numero2){
        return true;
    } else {
        return false;
    }
    return false;
}

int confronto(int ccDivisori, int ccCoppie){
    if(ccDivisori>ccCoppie){
        return 1; //piu' coppie
    } else {
        if(ccCoppie>ccDivisori){
            return 2; //piu' coppie
        } else {
            return 3; //quantita coppie uguali
        }
    }
}

void menu(int ccCoppie, int ccDivisori, int conf){
    short int risposta;
    cout << "1. Numero di coppie consecutive" << endl
     << "2. Numero coppie di cui il secondo e  divisore del primo" 
     << endl << "3. Quale dei due tipi di copia e' presente maggiormente" 
     << endl << "Digitare il numero corrispondente a cio' che si vuole visualizzare: ";
    cin >> risposta;
    if(risposta==1){
        cout << ccCoppie << endl;
    } else {
        if(risposta==2){
            cout << ccDivisori << endl;
        } else {
            if(conf==1){
                cout << "Ci sono piu' coppie di numeri consecutivi uguali" << endl;
            } else {
                if(conf == 2){
                    cout << "Ci sono piu' coppie di divisori" << endl;
                } else {
                    cout << "I divisori sono uguali alle coppie consecutive uguali" << endl;
                }
            }
        }
    }
    return;
}