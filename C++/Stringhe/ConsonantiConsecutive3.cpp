#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAXN 20

using namespace std;

bool controllo(string);

int main(){
    string messaggio;
    cout << "Inserisci parola" << endl;
    cin >> messaggio;
    if(controllo(messaggio)){
        cout << "Sono presenti 3 consonanti consecutive" << endl;
    } else {
        cout << "Non sono presenti 3 consonanti consecutive" << endl;
    }
    return 0;
}

bool controllo(string messaggio){
    char cc;
    for(char i=0;i<messaggio.length();i++){
        if(messaggio[i]=='a' || messaggio[i]=='e' || messaggio[i]=='i' || messaggio[i]=='o' || messaggio[i]=='u'){
            cc=0;
        } else { 
            cc++;
            if(cc==3){
                return true;
            }
        }
    }
    return false;
}