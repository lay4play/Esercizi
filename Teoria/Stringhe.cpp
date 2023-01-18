#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAXN 100
using namespace std;

int main(){
//    char parola[MAXN]="Ciao";
    char parola[MAXN];
    strcpy(parola, "Ciao");

    //stringhe c
    char parola1[MAXN];
    strcpy(parola1, "Dio");
    //stringhe C++
    string parola2="Ciao";
    string saluto;

    saluto="ciao";
    cout << saluto << endl;
    if(parola<parola1){
        cout << parola << endl;
        cout << parola1 << endl;
    } else {
        cout << parola1 << endl;
        cout << parola << endl;
    }
    cout << "strcmp = " << strcmp(parola, parola1) << endl; //se la prima stringa è maggiore della seconda da -1, se sono uguali da 0, se è minore da -1
    if(strcmp(parola, parola1)<0){

    }
    int contatore=0;
    int i=contatore;
    while(parola[i] != '\0'){
        //condizione
        i++;
    }
    //le variabili char memorizzano i caratteri sotto forma di codice ascii, puoi utilizzare anche il numero nel codice ascii per fare i confronti tra le lettere.
}