#include <iostream>
#include <cstring>
#include <cstdlib>
#define MAXN 20
#define MAXC 1000
#define MINC 1
using namespace std;

int inval(string, int, int);

void cifra(char*, int, int);

void decifra(char*, int, int);

int semplifica_chiave(int);

int main(){
    char parola[MAXN];
    unsigned short int chiave;
    do{
        cout << "Inserisci una frase di " << MAXN << " caratteri: ";
        gets(parola);
    } while(strlen(parola)>=MAXN);
    chiave=inval("Inserisci la chiave di cifratura: ",MINC,MAXC);
    cifra(parola, semplifica_chiave(chiave), MAXN);
    cout << "parola cifrata: "<< parola << endl;
    decifra(parola, semplifica_chiave(chiave), MAXN);
    cout << "parola decifrata: "<< parola << endl;
    //system("PAUSE");
    return 0;
}

int semplifica_chiave(int chiave){
    return chiave%26;
}

void cifra(char * puntatore, int chiave_semplificata, int dim){
    while(*puntatore!='\0'){
        if(*puntatore<='z' && *puntatore>='a'){
            if(*puntatore+chiave_semplificata>=122){
                *puntatore-=(26-chiave_semplificata);
            } else {
                *puntatore+=chiave_semplificata;
            }
        }
        puntatore++;
    }
    return;
}

void decifra(char * puntatore, int chiave_semplificata, int dim){
    while(*puntatore!='\0'){
        if(*puntatore<='z' && *puntatore>='a'){
            if(*puntatore-chiave_semplificata<97){
                *puntatore+=(26-chiave_semplificata);
            } else {
                *puntatore-=chiave_semplificata;
            }
        }
        puntatore++;
    }
    return;
}

int inval(string messaggio, int min, int max){
    int aux;
    do{
        cout << messaggio;
        cin >> aux;
        if(aux>max || aux<min){
            cout << "Valore non accettabile" << endl;
        }
    } while(aux>max || aux<min);
    return aux;
}