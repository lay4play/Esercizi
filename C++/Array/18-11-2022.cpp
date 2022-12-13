#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAXA 30

using namespace std;

int input(string, int, int);

void carica(string, int [], int, int, int);

float media(int [], int);

void visualizza(int [], int);

void caricamentoCasuale(int [], int, int, int);

int numeroCasuale(int min, int max);

int somma(int [], int);

int occorrenze(int [], int, int);

int valoreMAX(int [], int);

int valoreMIN(int [], int);

int cercaVettore(int [], int, int);

void selSort(int [], int);

void scambia(int &, int &);

void bubblesort(int [], int);

int main(){
    int voti[MAXA], alunni;
    srand(time(NULL));
    alunni=input("Inserisci il numero degli alunni presenti nella classe ", 10, MAXA);
    caricamentoCasuale(voti, alunni, 1, 100);
    visualizza(voti, alunni);
//    selSort(voti,alunni);
    bubblesort(voti, alunni);
    visualizza(voti,alunni);
//    cout << "La media dei voti e': " << media(voti, alunni) << endl;
//    cout << "Alunni che hanno preso 3 " << occorrenze(voti, 3, MAXA) << endl;
//    cout << "Il voto piu' basso e': " << valoreMIN(voti, alunni) << endl;
//    cout << "Il voto piu' alto e': " << valoreMAX(voti, alunni) << endl;
//    cout << "Il voto specificato si trova in posizione: " << cercaVettore(voti, alunni, input("Inserisci il voto da cercare ", 1, 10)) << endl;
    system("PAUSE");
    return 0;
}

int input(string messaggio, int min, int max){
    int val;
    do {
        cout << messaggio;
        cin >> val;
        if (val < min || val > max) {
            cout << "Valore inserito non accettabile." << endl;
            cout << "Il valore deve essere compreso fra " << min << " e " << max << endl;
        }
    } while (val < min || val > max);
    return val;
}

void carica(string messaggio, int v[], int valori, int min, int max){
    // for(short int i=0; i<valori; i++){
    //     do{
    //         cout << "Inserisci  il voto per l'alunno " << i+1 << " : ";
    //         cin >> v[i];
    //         if(v[i]>10 || v[i] < 1){
    //             cout << "Valore inserito non valido, ripetere l'inserimento";
    //         }
    //     } while(v[i]>10 || v[i] < 1);
    // }
    for(int i=0;i<valori;i++){
        v[i]=input(messaggio,min,max);
    }
    return;
}

void visualizza(int v[], int valori){
    for(int i=0;i<valori;i++){
        cout << v[i] << endl;
    }

}

int somma(int array[], int valori){
    int aux=0;
    for(short int i=0; i<valori; i++){
        aux+=array[i];
    }
    return aux;
}

float media(int array[], int alunni){
    return (float)somma(array, alunni)/alunni;
}

void caricamentoCasuale(int v[], int valori, int min, int max){
    // for(short int i=0; i<valori; i++){
    //     do{
    //         cout << "Inserisci il voto per l'alunno " << i+1 << " : ";
    //         cin >> v[i];
    //         if(v[i]>10 || v[i] < 1){
    //             cout << "Valore inserito non valido, ripetere l'inserimento";
    //         }
    //     } while(v[i]>10 || v[i] < 1);
    // }
    for(int i=0;i<valori;i++){
        v[i]=min+rand()%(max-min);
    }
    return;
}

int numeroCasuale(int min, int max){
    return min+rand()%(max-min+1);
}

int occorrenze(int v[], int x, int n){
    int cont=0;
    for(short int i=0; i<n; i++){
        if(v[i]==x){
            cont ++;
        }
    }
    return cont;
}

int valoreMAX(int v[], int alunni){
    short int max;
    for(short int i=0; i<alunni; i++){
        if(i==0){
            max=v[i];
        } else {
            if(max<v[i]){
                max=v[i];
            }
        }
    }
    return max;
}

int valoreMIN(int v[], int alunni){
    short int min;
    for(short int i=0; i<alunni; i++){
        if(i==0){
            min=v[i];
        } else {
            if(min>v[i]){
                min=v[i];
            }
        }
    }
    return min;
}

int cercaVettore(int v[], int alunni, int cerca){
    short int posizione;
    for(short int i=0; i<alunni; i++){
        if(v[i]==cerca){
            return i;
        }
    }
    return -1;
}

void scambia(int &x, int &y){
    short int aux=x;
    x=y;
    y=aux;
}
void selSort(int v[], int alunni){
    int contaconfronti=0, contascambi=0, min, posmin;
//    for(int i=0; i<alunni-1;i++){
//        contaconfronti++;
//        for(int j=i+1; j<alunni; j++){
//            if(v[j]<v[i]){
//                contascambi++;
//                scambia(v[i], v[j]);
//            }
//        }
//    }
    for(int i=0; i<alunni-1; i++){
        min=v[i];
        posmin=i;
        for(int j=i+1; j<alunni; j++){
            contaconfronti++;
            if(v[j]<min){
                min=v[j];
                posmin=j;
            }
        }
        scambia(v[i], v[posmin]);
        contascambi++;
    }
    cout << "Confronti effettuati = " << contaconfronti << ". Scambi effettuati =" << contascambi << endl;
}

void bubblesort(int v[], int n){
    int contascambi=0, contaconfronti=0, i=0;
    bool continua;
//    for(int i=0; i<n-1; i++){
//        for(int j=0; j<n-1; j++){
//            contaconfronti++;
//            if(v[j]>v[j+1]){
//                scambia(v[j], v[j+1]);
//                contascambi++;
//            }
//        }   
//    }
    do{
        continua=false;
        for(int j=0; j<n-1; j++){
            contaconfronti++;
            if(v[j]>v[j+1]){
                scambia(v[j], v[j++]);
                contascambi++;
                continua=true;
            }
        }
    i++;
    } while(i<n-1 && continua);
    cout << "Confronti effettuati = " << contaconfronti << ". Scambi effettuati =" << contascambi << endl;
}