#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAXN 20                         //comandi mandati direttamente al compilatore
#define MAXS 80

using namespace std;

void minuscolo(char []);

int main(){
    char messaggio[MAXN];
    string messaggio1;
    int num;
    cout << "Inserire il numero di alunni" << endl;
    cin >> num;
    fflush(stdin);                          //Pulise il buffer della tastiera, instassi C
    cout << "Inserire nome" << endl;
    //cin.ignore(MAXS,'\n');                //Acquisizione stringhe C++ senza svuotare il buffer ma ignorando lo spazio, sintassi C++
    getline(cin, messaggio1);             //acquisizione stringhe C++
    //cin.getline(messaggio, MAXN, '\n');    //acquisizione stringhe C utilizzabile solo in C++
    //gets(messaggio);                      //acquisizione stringhe C
    //minuscolo(messaggio1);
    cout << "Ciao " << messaggio1 << endl;
    system("PAUSE");
    return 0;
}

void minuscolo(char s[]){
    int i;
    while(s[i]!='\0'){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
        i++;
    }
    return;
}
