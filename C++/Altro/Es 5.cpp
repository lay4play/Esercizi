#include <iostream>
#include <cstdlib>
using namespace std;

int input(string);
bool CoppieC(int, int);
bool divisori(int, int);
int confronto(int, int);
void interfaccia(int, int, int);

int main() {
    int Primo, Secondo, Coppie=0, Divisori=0;
    bool turret=false;
    do{
        Secondo=input("Inserisci numero: ");
        if( Secondo != 0){
            if(turret == true){ 
                if(CoppieC(Primo, Secondo) == true){
                    Coppie++;
                }
                if(divisori(Primo, Secondo) == true){
                    Divisori++;
                }
            }
        }
        turret=true;
        Primo=Secondo;
    } while(Primo != 0);
    short int conf=confronto(Divisori, Coppie);
    interfaccia(Coppie, Divisori, conf);
    system("pause");
    return 0;
}

int input(string messaggio){
    int risp;
    do{
        cout << messaggio;
        cin >> risp;
        if(risp<0){
            cout << "Non puoi inserire un numero negativo!";
        }
    } while(risp < 0);
    return risp;
}

bool CoppieC(int numero1, int numero2){
    if(numero1==numero2){
        return true;
    } else {
        return false;
    }
    return false;
}

bool divisori(int numero1, int numero2){
    if(numero1 % numero2 == 0 && numero1 != numero2){
        return true;
    } else {
        return false;
    }
    return false;
}

int confronto(int Divisori, int Coppie){
    if(Divisori>Coppie){
        return 1; 
    } else {
        if(Coppie>Divisori){
            return 2; 
        } else {
            return 3; 
        }
    }
}

void interfaccia(int Coppie, int Divisori, int conf){
    short int risposta;
    cout << "1. Numero di coppie consecutive" << endl
     << "2. Numero coppie di cui il secondo e' divisore del primo" 
     << endl << "3. Quale dei due tipi di copia e' presente maggiormente" 
     << endl << "Digitare il numero corrispondente a cio' che si vuole visualizzare: ";
    cin >> risposta;
    if(risposta==1){
        cout << Coppie << endl;
    } else {
        if(risposta==2){
            cout << Divisori << endl;
        } else {
            cout << conf << endl;
        }
    }
    return;
}
