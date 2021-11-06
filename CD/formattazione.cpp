// Programma per mostrare diversi modi di stampare su video
// Sviluppato con  : Dev-C++ 5.4.1   
#include <iostream>
using namespace std;
int main()
{
  cout << "Prima riga ";	
  cout << "seguito della riga" << endl;	
  cout << "Nuova riga molto lunga"
          " la riga continua ancora su video"
          "\n questo viene stampato su una nuova riga" 
       << endl;	 
  cout << "\n "; 
    
//  system("PAUSE");
  return 0;
}
/*
 Se si compila, e si lancia l'esecuzione del programma, si ottiene:
 Prima riga seguito della riga
 Nuova riga molto lunga la riga continua ancora su video questo viene stampato su una nuova riga
 Nella 1 si incanala (per mezzo dell'operatore di inserimento <<) nello stream cout la stringa Prima riga.
 Tutto ci� che � racchiuso fra � e � (il carattere doppio apice), come si nota nell'esecuzione, 
verr� visualizzato su video cos� come �. Il ; chiude l'istruzione.
 Nella 2, nonostante si tratti di una nuova istruzione, la stringa, come si pu� notare nell'esecuzione, 
� visualizzata di seguito alla prima. Lo stream � utilizzato in modo sequenziale. 
 Per andare a riga nuova si � accodato (operatore <<) il modificatore endl (end-line) che, 
appunto, termina la linea e fa passare alla prossima riga nel video.
 L'istruzione 3 � suddivisa in pi� righe di listato. L'istruzione termina, 
al solito, con il ; e consente di distribuire il testo da visualizzare su pi� righe fisiche.
 In ognuna si � scritta una stringa racchiusa dai soliti caratteri: 
questo viene ... verr� visualizzata la riga successiva a quella che visualizza Nuova riga... 
 Per passare ad una nuova riga su video, si � utilizzato in questo caso il carattere di 
controllo \n dentro la stringa da visualizzare.
 Lo spazio successivo al carattere di controllo non � necessario ma � stato introdotto solo per evidenziarlo.
 In definitiva per poter passare alla linea successiva si pu� accodare allo stream 
di output endl o inserire nella stringa da stampare il carattere di controllo \n.
*/
