#include "stdafx.h"          // per VisualStudio 2017 
#include <iostream>
#include <string>        // strcpy
//#include <cstring>     
#include <stdlib.h>      // srand, rand 
#include <ctype.h>
using namespace std;

void cmp(const string &s1, const string &s2){
  string azz = "pippo";
  cout << s1;
  if (s1 == s2) cout << " == ";
  else
    if (s1 < s2) cout << " < ";
    else cout << " > ";
    cout << s2 << "\n";
}

void contaCaratteri(const string &s1){
  int caratteri = 0, numeri = 0, altro = 0;
  int maiu = 0, minu = 0;
  for (int x = 0; x < s1.size(); x++){
    char c = s1[x];
    if (isalpha(c)){
      caratteri++;
      if (islower(c))   //isupper()
        minu++;
      else
        maiu++;  
    }
    else if (isdigit(c))
      numeri++;
    else
      altro++;
  }
  cout << "\nAnalizzata la frase : " << s1 << "\n";
  cout << "- caratteri : " << caratteri << "\n";
  cout << " - maiuscole: " << maiu << "\n";
  cout << " - minuscole: " << minu << "\n";
  cout << "- numeri    : " << numeri << "\n";
  cout << "- altro     : " << altro << "\n";
 }

int main() {

  char strChar1[11];               // vuota: può contenere una stringa di 10 caratteri 
  cout << "array di 10 char: ";
  cin >> strChar1;
  cout << strChar1 << endl;
  
  // definizioni e inizializzazioni array di caratteri    
  cout << "\n" << endl;
  // array di caratteri 
  char nome[] = "paolo";           // oppure {"paolo"};  
 // char strChar1[11];             // vuota: può contenere una stringa di 10 caratteri 
  int mioData[] = {11, 6, 1960};
  cout << nome << endl;            // visualizza il contenuto 
  cout << mioData << endl;         // visualizza l'indirizzo di memoria
  cout << "inserisci il nome array char: ";
  cin >> strChar1;
  cout << strChar1 << endl;
  cout << strlen(strChar1) << endl;
    cout << "\n" << endl;

  // oggetti string  

  string stringa1;                  // vuota: può contenere qualsivoglia nr. di caratteri
  cout << "variabile string: ";
  cin >> stringa1;
  cout << stringa1 << "\n\n" << endl;

  string s1 = "Pino";
  string s2 = "Antonio";
  string s3 = "Antonio";
  cmp(s1, s2);          // scrive  “Pino > Antonio”
  cmp(s2, s3);          // scrive “Antonio == Antonio”
  cmp(s3, s1);          // scrive “Antonio < Pino”
  cout << "\n\n" << endl;
  
  // input
  cout << "inserisci il nome string: ";
  cin >> stringa1;
  cout << stringa1 << endl;


  s1 = "Hello";
  s2 = "world";
  s3 = s1 + " " + s2;
  cout << s1 << "\n";
  cout << s2 << "\n";
  cout << s3 << "\n\n";


  //pos. 0123456789*123456789*12345
  s1 = "ciao mondo";
  s2 = "ciao";
  s3 = "pera nera";
  cout << s1.compare(s2) << "\n";
  cout << s1.compare(0, 4, s2) << "\n";
  cout << s3.compare(1, 3, s3, 6, 3) << "\n";
  cout << s3.compare(0, 4, "pera") << "\n\n";

  s1 = "ciao";
  s2 = "ciao a tutti";
  cout << s1.size() << "\n";
  cout << s2.size() << "\n\n";

  s1 = "ciao mondo";
  s2 = "al ";
  cout << s1.insert(5, s2) << "\n";
  cout << s1.insert(13, " tondo") << "\n\n";

  //pos:0123456789*123456789*12345
  s1 = "ciao mondo";
  s2 = "a tutti";
  s3 = "buongiorno buonasera";
  cout << s1.replace(5, 9, s2) << "\n";
  cout << s1.replace(0, 3, s3, 0, 9) << "\n";
  cout << s1.replace(0, 13, "hallo ") << "\n";
  cout << s1.replace(5, 6, "") << "\n";        // rimuove 
  cout << s3.replace(0, 11, "") << "\n\n";

  // substr() 0123456789*123456789*12345
  s1 = "ciao mondo";
  s2 = "buongiorno buonasera";
  cout << s1.substr(5, 9) << "\n";
  cout << s2.substr(0, 10) << "\n\n";

  // find() 
  s1 = "ciao mondo";
  s2 = "mondo";
  cout << s1.find(s2) << "\n";
  cout << s1.find("do") << "\n";
  cout << s1.find("zz") << "\n\n";          //??

  // stringa in numero
  s1 = "123";
  s2 = "12.3";
  int k1 = atoi(s1.c_str());
  float k2 = atof(s2.c_str());
  cout << k1 << "\n";
  cout << k2 << "\n\n";

  
  // numero in stringa
  long   n1 = 1234;
  double n2 = 123.4;
  float  n3 = 0.0001;
  string n1_str = to_string(n1);
  string n2_str = to_string(n2);
  string n3_str = to_string(n3);
  cout << n1_str << '\n';
  cout << n2_str << '\n';
  cout << n3_str << "\n\n";
  




  // funzione che analizza carttere per carattere 
  contaCaratteri("Ali Baba e i 40 ladroni!");
  contaCaratteri(s1);
  cout << s1.size() << endl;
  cout << "\n" << endl;












  system("pause");
}