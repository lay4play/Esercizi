#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    short int i, cifre, c;
    int totale;
    cout << "Inserisci il numero di cifre del numero in binario";
    cin >> cifre;
    short int binario[cifre];
    cout << "Inserisci il numero in binario, cifra per cifra: " << endl;
    for(i=0;i<cifre;i++){
        cout << "Cifra n " << i+1 << " ";
        cin >> binario[i];
        if(binario[i]!=0 && binario[i]!=1){
            cout << "Il valore inserito non rispetta il sistema di numerazione binaria";
            return -1;
        }
    }
    c = 0;
    totale = c;
    for(i=cifre-1;i>-1;i=i-1){
        totale=totale+binario[i]*pow(2, c);
        c++;
    }
    cout << totale;
    return 0;
    system("PAUSE");
} 