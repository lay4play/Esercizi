/*
È dato un file di testo PEOPLE.TXT che contiene i dati di una serie di persone (non più di 20), una persona per riga. Più precisamente, ogni riga contiene nell'ordine:

il cognome (non più di 20 caratteri, senza spazi intermedi)
uno o più spazi
il nome (non più di 20 caratteri, senza spazi intermedi)
uno o più spazi
la data di nascita nel formato gg/mm/aaaa
uno e un solo spazio
un carattere ('M' o 'F') che indica il sesso.
Si chiede di scrivere un programma C che, dopo aver definito una struttura persona nel modo appropriato a quanto sopra:
contenga una funzione lettura() che, dato il nome del file (ed eventualmente altri parametri se opportuno), legga i dati delle persone dal file e li metta in un array di persona di nome elenco;

[si mostri a video l'array così costruito]
contenga una funzione compatibili() che, date due persone, restituisca vero se le due persone sono compatibili (intendendo con questo che esse sono di sesso diverso e la differenza di età, riferita solo all'anno, non supera i 5 anni), o falso altrimenti;

[si mostri a video un esempio d'uso della funzione con due persone scelte dall'array a vostro piacere]
chieda all'utente, da console, cognome, nome, sesso e data di nascita
in base a quanto ottenuto al punto precedente, scriva i dati delle persone compatibili con l'utente sia a video sia su un file binario di nome PARTNERS.DAT.


*/
#include <stdio.h> 
#include <stdlib.h>

#define NUMEROPERSONE 20 
#define DIMCOGNOME 21 
#define DIMNOME 21 
 

struct data { 
    int giorno, mese, anno; 
};

struct persona { 
    char cognome[DIMCOGNOME], nome[DIMNOME], sesso; 
    struct data nascita; 
}; 
  
 

/* ---------- domanda 1 -------- */

void lettura(char nomefile[], struct persona v[], int* pindice){ 
  struct persona x; 
  FILE *f = fopen(nomefile, "r"); 
  if (f==NULL) { 
    printf("Impossibile aprire file di ingresso"); 
    exit(1); } /* se non riesce a creare il file 
                visualizza un messaggio di errore ed esce dal programma */

  while (fscanf(f, "%s%s%d/%d/%d %c\n", x.cognome, x.nome, 
                 &x.nascita.giorno, &x.nascita.mese, &x.nascita.anno, 
                    &x.sesso)>0) { 
     v[*pindice] = x; 
     (*pindice)++; 
  } 
  fclose(f); 
}

void mostraElenco(struct persona elenco[], int dim){ 
  int i; 
  for (i=0; i<dim; i++) 
         printf("%s %s nato(a) il %d/%d/%d\n", elenco[i].nome, 
                 elenco[i].cognome,elenco[i].nascita.giorno, 
                  elenco[i].nascita.mese, elenco[i].nascita.anno); 
}

/* ---------- domanda 2 -------- */

int compatibili(struct persona p1, struct persona p2){ 
    int comp_sesso,comp_anno; 
    comp_sesso=p1.sesso!=p2.sesso; 
    if (abs(p1.nascita.anno-p2.nascita.anno)<=5) comp_anno=1; 
    else comp_anno=0; 
    return comp_sesso && comp_anno; 
}

/* ---------- domande 3 e 4 -------- */

main(){ 
  struct persona elenco[NUMEROPERSONE], utente; 
  int indiceElenco = 0, i; 
  FILE *fbin; 
  /* --------------- prova domanda 1 -------------------*/ 
  lettura("PEOPLE.TXT", elenco, &indiceElenco); 
  mostraElenco(elenco, indiceElenco); 
  /* --------------- prova domanda 2 -------------------*/ 
  printf("Le due persone %s %s e %s %s sono %s\n", 
    elenco[0].nome, elenco[0].cognome, elenco[1].nome, elenco[1].cognome, 
    compatibili(elenco[0],elenco[1]) ? "compatibili" : "incompatibili");

  /* ------------------- domanda 3 ---------------------*/

  printf("\n\nInserire il proprio nome e cognome: "); 
  scanf("%s%s", utente.nome, utente.cognome); 
  printf("Inserire la propria data di nascita (gg/mm/aaaa): "); 
  scanf("%d/%d/%d", &utente.nascita.giorno, &utente.nascita.mese, 
                          &utente.nascita.anno); 
  scanf("%*c"); /* sopprime il fine linea rimasto sull'input */ 
  printf("Inserire il sesso (M/F): "); 
  scanf("%c%*c",&utente.sesso);

  /* ------------------ domanda 4 ----------------------*/

  fbin = fopen("PARTNERS.DAT", "wb"); 
  if (fbin==NULL) { 
    printf("Impossibile aprire file di uscita\n"); 
    exit(2); } 
    /* se non riesce a creare il file 
    visualizza un messaggio di errore ed esce dal programma */ 
  printf("\nElenco persone compatibili con %s %s:\n", 
            utente.nome, utente.cognome); 
  for (i=0; i<indiceElenco; i++) 
     if (compatibili(utente,elenco[i])) { 
         fwrite(&elenco[i], sizeof(struct persona), 1, fbin); 
         printf("%s %s nato(a) il %d/%d/%d\n", elenco[i].nome, 
                    elenco[i].cognome, elenco[i].nascita.giorno, 
                  elenco[i].nascita.mese, elenco[i].nascita.anno); 
  } 
  fclose(fbin); 
} 
