import java.util.Scanner;
//dati nun numeri inseriti dall'utente 
//controllare che siano maggiori di 0 e calcolare la media solo dei numeri positivi
public class numeroMaggioreEMedia{
    public static void main(String[] args){
        int i, n, i1, somma, num;
        float media;
        i1 = somma = 0;
        try (Scanner scanIn = new Scanner(System.in)) {
            System.out.println("Inserisci quanti numeri vuoi inserire");
            n = scanIn.nextInt();
            for(i=0;i<n;i++){
                System.out.println("Inserisci un numero");
                num = scanIn.nextInt();
                if(num>0){
                    i1++;
                    somma = somma + num;
                }
            }
        }
        media = (float)somma / i1;
        System.out.println("La media è " + media);

    }
}