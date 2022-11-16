#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

float input(string messaggio);

bool controllo(float a);

float delta(float a,float b,float c);

int controllodelta(float a,float b,float c);

float x1(float a,float b,float c);

float x2(float a,float b,float c);

string stringaequazione(float a,float b,float c);

int main(){
	float ax,bx,terminenoto;
	ax=input("Inserisci il coefficiente ax: ");
	if(controllo(ax)==true){
		cout<<"Non e'una equazione di secondo grado"<<endl;
	}else{
		bx=input("Inserisci il coefficiente bx: ");
		terminenoto=input("Inserisci il termine noto: ");
		if(controllodelta(ax,bx,terminenoto)==0){
			cout<<"L'equazione non ammette soluzioni.\n";
		}else if(controllodelta(ax,bx,terminenoto)==1){
			cout<<"L'equazione ammette due soluzioni coincidenti ed e' "<<stringaequazione(ax,bx,terminenoto)<<endl;
		}else{
			cout<<"L'equazione ammette due soluzioni differenti ed e' "<<stringaequazione(ax,bx,terminenoto)<<endl;
		}
	}
	system("pause");
	return 0;
}

float input(string messaggio){
	float risp;
	cout<<messaggio;
	cin>>risp;
    return risp;
}

bool controllo(float a){
	if(a==0){
		return true;
	}
	return false;
}

float delta(float a,float b,float c){
	float d=b*b-4*a*c;
	return d; 
}

int controllodelta(float a,float b,float c){
	if(delta(a,b,c)<0){
		return 0;
	}else if(delta(a,b,c)==0){
		return 1;
	}
	return 2;
}

float x1(float a,float b,float c){
	float xuno=(-b-sqrt(delta(a,b,c)))/(2*a);
	return xuno; 
}

float x2(float a,float b,float c){
	float xdue=(-b+sqrt(delta(a,b,c)))/(2*a);
	return xdue;
}

string stringaequazione(float a,float b,float c){
	string aux=to_string(x1(a,b,c))+" e "+to_string(x2(a,b,c));
	return aux;
}
