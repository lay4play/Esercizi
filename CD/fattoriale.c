#include <stdio.h>
#include <stdlib.h>
int main(){
  long numero, conta, fatt = 0; 
  for (int x = 0; x < 5; x++){   
   printf("\ninserisci il numero : ");      
   scanf("%d",&numero);
   if (numero < 0)
     printf("\nattenzione: il numero deve essere positivo!"); 
   else
     fatt = 1;                     // inizializza il fattoriale           
     if (numero > 0)
       for (conta = numero; conta > 1; conta--){              
         fatt = fatt*conta;                             // calcolo del fattoriale
      }
    printf("il fattoriale di %4d e' %12d",numero,fatt);// stampa il fattoriale
  }
  printf("\n\n");
}
