#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
float a,b,c;
double x1,x2;

float calcolaDelta(){
    float delta = (b*b)-(4*a*c);
    return delta;
}
 
void deltaPiuDiZero(){
        x1=(-b-sqrt(calcolaDelta()))/(2*a);
        x2=(-b+sqrt(calcolaDelta()))/(2*a);
        printf("\nDue soluzioni x1= %5.3lf e x2= %5.3lf \n",x1,x2);
}
 
void deltaZero(){
        x1=(-b)/(2*a); 
        printf("\nDue soluzioni coincidenti x1 e x2: %5.3lf \n",x1);
}
  
int main() {   
    printf("Risoluzione equazioni di secondo grado del tipo ax2+bx+c=0\n");
    printf("Inserisci coefficiente a: ");
    scanf("%f", &a);
    printf("Inserisci coefficiente b: ");
    scanf("%f", &b);
    printf("Inserisci coefficiente c: ");
    scanf("%f", &c); 
    if (a==0){
        if(b==0 && c==0)
            printf("L'equazione inserita è indeterminata");
        else if(b==0){
            printf("\nL'equazione è impossibile da risolvere");
        }
        else {
            printf("L'equazione e' di primo grado\n");
            x1 =-c/b;
            printf("\n x= %lf", x1);
        }
    }
  else {
    printf("Il Delta e' %5.3lf ", calcolaDelta());
    if(calcolaDelta() > 0){
        deltaPiuDiZero();
    }
    else if(calcolaDelta() == 0){
        deltaZero();
    }
    else{
        printf("\nNon esistono soluzioni reali\n");
    }
  }
    return 0;
    system("pause");
}