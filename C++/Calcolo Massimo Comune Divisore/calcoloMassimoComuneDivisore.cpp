#include <iostream>
#include <cstdlib>

using namespace std;

int calcoloMassimoComuneDivisore(int numero1, int numero2, int x);

int main(){
    int numero1=0, numero2=0, massimoComuneDivisore=0; //attribuisce i valori di 0 a tutte le variabili
    massimoComuneDivisore=calcoloMassimoComuneDivisore(numero1, numero2, massimoComuneDivisore);
    cout << "Il massimo comune divisore tra il primo ed il secondo numero e': " << massimoComuneDivisore << endl; 
}

int calcoloMassimoComuneDivisore(int numero1, int numero2, int x){
    int i, resto; //inizializzazione variabile contatore e variable resto
    i=0; //Variabile utilizzata per tenere traccia dei tentativi effettuati dal do; while; 
    do{
        if(i>0){
            cout << "I valori inseriti non solo validi." << endl; //controllo che il do; while; non sia stato eseguito precedentemente
        } else {
            cout << "Inserire il primo numero intero positivo: "; //richiesta numeri
            cin >> numero1;
            cout << "Inserire il secondo numero intero positivo: ";
            cin >> numero2;
            i=i+1; //alterazione variabile di stato del ciclo do; while;
        } 
    } while( numero1 == 0 && numero2 == 0); //controllo che i valori immessi non siano uguali a zero
        if(numero1<numero2){ //controllo che il primo numero inserito non sia minore del secondo
            int temporaneo; //inizializzazione variabile temporanea per scambio valori
            temporaneo=numero1;
            numero1=numero2; //effettivo scambio valori variabili
            numero2=temporaneo;
        }
        do{
            resto=numero1%numero2; //calcolo del resto
            numero1=numero2; //assegnazione al valore del primo numero quello del secondo
            numero2=resto; //assegnazione al valore del secondo numero quello del primo in modo da poter ri-eseguire il ciclo se necessario
        } while(resto != 0); //controllo che il resto sia diverso da 0
        return numero1; //ritorna il valore della variabile numero 1, ovvero quella che contiene il numero finale
}