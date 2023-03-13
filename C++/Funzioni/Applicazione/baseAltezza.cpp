#include <iostream>
#define MAXN 30

using namespace std;

void ordina(int [], int);

void caricavettore(int [], int);

int genera(int, int);

int ricerca_bin(int [], int, int, int);

void visualizza(int [], int);

void cerca_max(int [], int, int, int &);

int main(){
    srand(time(NULL));
    int n, ricerca, max=-1;
    int numeri[MAXN];
    cout << "Inserisci la grandezza del vettore" << endl;
    cin>>n;
    caricavettore(numeri, n);
    ordina(numeri, n);
    visualizza(numeri, n);
    cout << "Inserisci il numero da ricercare nel vettore"<<endl;
    cin >> ricerca;
    cout<<ricerca_bin(numeri,0,n,ricerca)+1<<endl;  
    cerca_max(numeri, n, 0, max);
    cout << "Il numero maggiore e': " << max << endl;  
    return 0;
}

void visualizza(int vet[], int n){
    for(int i=0;i<n;i++){
        cout << "Posizione " << i << " -> "<<vet[i] << endl;
    }
    return;
}
int genera(int min, int max){
    return min+rand()%(min-max+1);
}

void caricavettore(int vet[], int n){
    for(int i=0;i<n;i++){
        vet[i]=genera(1,100);
    }
    return;
}

void ordina(int vet[], int num){
	int i=0;
	bool continua;
	do{
		continua=false;
		for(int j=0;j<num-1-i;j++){
			if(vet[j]>vet[j+1]){
				swap(vet[j],vet[j+1]);
				continua=true;
			}	
		}
		i++;
	}while(i<num-1&&continua);
}

int ricerca_bin(int vet[], int primo, int ultimo, int elemento) {
    int med;
    if (primo > ultimo) {
        return -1;
    }
    med = (primo + ultimo) / 2;
    if (elemento == vet[med]) {
        return med;
    }
    else if (elemento > vet[med]) {
        return ricerca_bin(vet, med+1, ultimo, elemento);
    } else {
        return ricerca_bin(vet, primo, med-1, elemento);
    }
}

// int ricerca_bin_quarato(int v[], int x, int inizio, int fine){
//     int centro=inizio + (fine-inizio)/2;
//     if(inizio > fine || v[cento]==n){
//         if(v[centro]==n){
//             return centro;
//         } else {
//             return -1;
//         }
//     } else {
//         if(v[centro]>x){
//             fine=centro+1;
//         } else {
//             inizio=centro+1;
//         }
//         return ricerca_bin_quarato(v,x,inizio,fine);
//     }
// }

void cerca_max(int v[], int n, int pos, int &max){
    if(pos>n-1){
        return;
    } else {
        if(v[pos]>max){
            max=v[pos];
        } 
        pos++;
        cerca_max(v,n,pos,max);
    }
    return;
}