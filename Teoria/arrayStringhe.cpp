#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
    char nomi[30][20]; //array bidimensionale definita anche matrice, 30 righe da 20 spazi ciascuna
    int alunni;
    cout << "Inserisci il numero di alunni: ";
    cin >> alunni;
    fflush(stdin);
    for(int i=0;i<5;i++){
        cout << "Inserire il nome del " << i+1 << "o alunno: ";
        cin.getline(nomi[i],20,'\n');
    }
    for(int i=0;i<5;i++){
    cout << nomi[i] << endl;
    }
    system("PAUSE");
    return 0;
}