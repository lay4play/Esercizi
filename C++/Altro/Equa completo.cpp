#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

float input(string messaggio);
float delta(float a,float b,float c);
float x1(float a,float b,float c);
float x2(float a,float b,float c);

int main(){
	float ax,bx,terminenoto;
	do{
		ax=input("Inserisci il coefficiente ax: ");
		if(ax==0){
			cout<<"Non e' un equazione di secondo grado. \n";
		}
	}while(ax==0);
	bx=input("Inserisci il coefficiente bx: ");
	terminenoto=input("Inserisci il termine noto: ");
	if((delta(ax,bx,terminenoto))<0){
		cout<<"L'equazione non ammette soluzioni.\n";
	}else if((delta(ax,bx,terminenoto))==0){
		cout<<"L'equazione ammette due soluzioni coincidenti: "<<x1(ax,bx,terminenoto)<<endl;
	}else{
		cout<<"L'equazione ammette due soluzioni differenti: "<<x1(ax,bx,terminenoto)<<" "<<x2(ax,bx,terminenoto)<<endl;
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
float delta(float a,float b,float c){
	float d=b*b-4*a*c;
	return d; 
}
float x1(float a,float b,float c){
	float xuno=(-b-sqrt(delta(a,b,c)))/(2*a);
	return xuno; 
}
float x2(float a,float b,float c){
	float xdue=(-b+sqrt(delta(a,b,c)))/(2*a);
	return xdue;
}
