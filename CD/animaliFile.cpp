//CONSEGNA: Scrivere un programma che èpermetta la gestione di record relativi ad animali.
//1) Far inserire dall'utente nome, razza ed anno di nascita con le funzioni nel menù relative all'inserimento, alla lettura
// cancellazione totale, ricerca nel file e sostituzione.
//2) Visualizzare solo l'anno di nascita degli animali.
//3) Ordinare tutti i record in ordine di età
#include <stdio.h>
#include <stdlib.h>
#define N 100
void inserisci();
void leggi();
void cancella();
void cerca();
void sostituisci();
void visualizzaAnni();
void ordinaFile();
typedef struct
{
        char nome[50];
        char razza[50];
        int eta;
} animale;
int main(int argc, char *argv[])
{
    int r; 
   // printf("Questo programma permette la gestione di record relativi ad animali\n");
    do
    {
       do
       { 
           printf ("\n\nMenu' funzioni:");
           printf ("\n1=Inserisci animale");
           printf ("\n2=Esamina il contenuto del file");
           printf ("\n3=Cancella l'intero contenuto del file");
           printf ("\n4=Cerca");
           printf ("\n5=Sostituisci record");  
           printf ("\n6=Visualizzare gli anni degli animali");  
           printf ("\n7=Ordina l file in base all'eta'");  
           printf ("\n8=Esci");
           printf ("\n\nInserire il  numero corrispondente all'operazione da eseguire (1-8): ");
           scanf ("%d", &r);
           
           switch(r)
           {
              case 1: inserisci();
              break;
              case 2:leggi();
              break;
              case 3: cancella();
              break;
              case 4: cerca();
              break;
              case 5: sostituisci();
              break;
              case 6: visualizzaAnni();
              break;              
              case 7: ordinaFile();
              break;
              case 8:
              break;
           default:
              printf("Valore non valido, riprovare!\n");
           }
           printf("\n\n");
           system("PAUSE");
           system("CLS");
       }
       while(r!=1&&r!=2&&r!=3&&r!=6&&r!=8);
       fflush(stdout);					
 }while(r==1||r==2||r==3||r==4||r==5||r==6||r==7);
    printf ("\n\n");
  system("PAUSE");	
  return 0;
  
}
void inserisci()
{
     FILE*pf;
     animale bufani;
     fflush(stdin);
     pf=fopen("DatiAnimali.dat","ab");
     if(pf==NULL)
     {
        printf("Errore!\n");
     }
     else
     {
        printf("Nome: ");
        gets(bufani.nome);
        printf("Razza: ");
        gets(bufani.razza);
        printf("Anno di nascita: ");
        scanf("%d",&bufani.eta);
        fwrite(&bufani,sizeof(animale),1,pf);
     }
fclose(pf);
     
     
}
void leggi()
{
     FILE*pf;
     animale bufani;
     fflush(stdin);
     pf=fopen("DatiAnimali.dat","rb");
     if(pf==NULL)
     {
        printf("Errore!\n");
     }
     else
     {
         printf("Record contenuti\n\n");
         fflush(stdout);
        fread(&bufani,sizeof(animale),1,pf);
        while(!feof(pf)){
        {
                        
            puts(bufani.nome);
            puts(bufani.razza);
            printf("%d\n\n",bufani.eta);
            fread(&bufani,sizeof(animale),1,pf);
        }
     }
     fclose(pf);
     
}}
void cancella()
{
     FILE*pf;
     pf=fopen("DatiAnimali.dat","wb");
     fclose(pf);
}
void cerca()
{
   FILE*pf;
   animale bufani;
   int i=0;
   int p=0;
   pf=fopen("DatiAnimali.dat","rb+");
   if(pf==NULL)
   {
        printf("Errore!\n");
   }
   else
   {
     printf("Posizione da visualizzare: ");
     scanf("%d",&p);
     p=(p-1)*sizeof(animale);
     fseek(pf,p,SEEK_SET);
     fread(&bufani,sizeof(animale),1,pf);
     puts(bufani.nome);
     puts(bufani.razza);
     printf("%d",bufani.eta);
   }
   fclose(pf);
}
void sostituisci()
{
   FILE*pf;
   animale bufani;
   int i=0;
   int p=0;
   pf=fopen("DatiAnimali.dat","rb+");
   if(pf==NULL)
   {
        printf("Errore!\n");
   }
   else
   { 
       printf("Posizione da modificare: ");
       scanf("%d",&p);
       p=(p-1)*sizeof(animale);
       printf("Nuovo record: \n");
       fflush(stdin);
       printf("Nome: ");
       gets(bufani.nome);
       printf("Razza: ");
       gets(bufani.razza);
       printf("Anno di nascita: ");
       scanf("%d",&bufani.eta);
       fseek(pf,p,SEEK_SET);
       fwrite(&bufani,sizeof(animale),1,pf);
    }
    fclose(pf);       
}
void visualizzaAnni()
{
   FILE*pf;
   animale bufani;
   int i=0;
   int p=0;
   int n=0;
   pf=fopen("DatiAnimali.dat","rb");
   if(pf==NULL)
   {
        printf("Errore!\n");
   }
   else
   { 
       printf("Elenco anni di nascita degli animali:\n");
       fflush(stdin);
       fflush(stdout);      
       //QUANDO LEGGI DEL FILE DEVI METTERE IL RECORD, quindi &bufani e non &n
       while(fread(&bufani,sizeof(animale),1,pf))
       {
         printf("%d\n",bufani.eta);
       }
    }
}
void ordinaFile()
{
   FILE*pf;
   //SOLUZIONE 1:
   //DICHIARO ARRAY DI STRUTTURE...MI SA CHE NON LO AVETE MAI FATTO!!
   animale bufani[N];
   animale buf_tmp;
   int i=0;
   int j=0;
   int n=0;
   pf=fopen("DatiAnimali.dat","rb");
   if(pf==NULL)
   {
        printf("Errore!\n");
   }
   else
   { 
       //LEGGO I DATI DEL FILE E LI METTO IN UN ARRAY DI ANIMALI
       while(fread(&bufani[i],sizeof(animale),1,pf))
       {
         i++; 
       }
       n=i;
       i=0;
       //Ordino l'array di animali
       for(i=0;i<n-1;i++)
       {
          for(j=i+1;j<n;j++)
          {
             if(bufani[i].eta>bufani[j].eta) 
             {
             //Scambio
                buf_tmp=bufani[i];
                bufani[i]=bufani[j];
                bufani[j]=buf_tmp;
             }
          }
       }     
   }   
   fclose(pf);  
   //Riapro il file in modo distruttivo
   pf=fopen("DatiAnimali.dat","wb");
   //Lo ripopolo con i record ordinati
   for(i=0;i<n;i++)
      fwrite(&bufani[i],sizeof(animale),1,pf);
   fclose(pf);
}
