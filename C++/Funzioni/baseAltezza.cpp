#include <iostream>

using namespace std;

void acquisisci(int &, int &);

void calcola(int, int, int &, int &);

void visualizza(int, int);

int main()
{
	int base, altezza, area, perimetro;
	acquisisci (base, altezza);
	calcola (base, altezza, area, perimetro);
	visualizza (area, perimetro);
	return 0;
}
void acquisisci (int &b, int &h)
{
	do
	{
		cout<<"dammi la base del rettangolo"<<endl;
		cin>> b;
	} while (b<=1);
	do
	{
		cout<<"dammi l'altezza del rettangolo"<<endl;
		cin>>h;
	} while (h<1);
    return;
}
void calcola (int b, int h, int &a, int &p)
{
	a=b*h;
	p=2*(b+h);
    return;
}
void visualizza (int a, int p)
{
	cout<<"l'area del rettangolo e': "<<a<<endl;
	cout<<"il perimetro del rettangolo e': "<<p<<endl;
    return;
}