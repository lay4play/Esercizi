#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std;

float input(string messaggio);

string stringaEquazione(float ax,float bx,float terminenoto);

float discriminante(float ax,float bx,float terminenoto);

float x1(float ax,float bx,float terminenoto);

float x2(float ax,float bx,float terminenoto);

string stringaSoluzioni(float ax,float bx,float terminenoto);

int main(){
	float ax,bx,terminenoto,delta;
	//Valori dell'equazione di 2 grado
	ax=input("Inserisci il coefficiente di ax^2: ");
	if(ax==0){
		cout<<"Non e'un'equazione di secondo grado"<<endl;
	}else{
		bx=input("Inserisci il coefficiente di bx: ");
		terminenoto=input("Inserisci il termine noto: ");
		cout<<"L'equazione e' "<<stringaEquazione(ax,bx,terminenoto)<<endl;
		delta=discriminante(ax,bx,terminenoto);
		if(delta<0){
			cout<<"L'equazione non ammette soluzioni."<<endl;
		}else if(delta==0){
			cout<<"L'equazione ammette due soluzioni coincidenti che sono "<<stringaSoluzioni(ax,bx,terminenoto)<<endl;
		}else{
			cout<<"L'equazione ammette due soluzioni differenti che sono "<<stringaSoluzioni(ax,bx,terminenoto)<<endl;
		}
	}
	system("pause");
	return 0;
}

float input(string messaggio){
	float risposta;
	//Input utente
	cout<<messaggio;
	cin>>risposta;
    return risposta;
}

string stringaEquazione(float ax,float bx,float terminenoto){
	string aux=to_string(ax)+"x^2";
	//Variabile ausiliria per convertire l'equazione in stringa
	if(ax == 1 || ax == -1){
		if(ax==-1){
			aux="-";
		} else {
			aux=to_string(ax);
		}
	}
	if(b=0){
		
	}

	// if(bx>-1){
	// 	aux+="+"+to_string(bx)+"x";
	// }else{
	// 	aux+=to_string(bx)+"x";
	// }if(terminenoto>-1){
	// 	aux+="+"+to_string(terminenoto);
	// }else{
	// 	aux+=to_string(terminenoto);
	// }
	return aux;
}

float discriminante(float ax,float bx,float terminenoto){
	float delta=bx*bx-4*ax*terminenoto;
	//Variabile che contiene il calcolo del delta
	return delta; 
}

float x1(float ax,float bx,float terminenoto){
	float xuno=(-bx-sqrt(discriminante(ax,bx,terminenoto)))/(2*ax);
	//Prima soluzione
	return xuno; 
}

float x2(float ax,float bx,float terminenoto){
	float xdue=(-bx+sqrt(discriminante(ax,bx,terminenoto)))/(2*ax);
	//Seconda soluzione
	return xdue;
}

string stringaSoluzioni(float ax,float bx,float terminenoto){
	string aux=to_string(x1(ax,bx,terminenoto))+" e "+to_string(x2(ax,bx,terminenoto));
	//Variabile ausiliria per convertire le soluzioni in stringa
	return aux;
}

int input(string messaggio){
    short int input;
    cout << messaggio << endl;
    cin >> input;
    return input;
}
