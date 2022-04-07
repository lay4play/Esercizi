import java.util.Scanner;
public class sommaArray{
    public static void main(String[] args){
        float[] array1, array2, sommaArray;
        array1 = new float[10];
        array2 = new float[10];
        sommaArray = new float[10];
        int contatore;
        try (Scanner scanIn = new Scanner(System.in)) {
            for(contatore=0;contatore<10;contatore++){
                System.out.println("Inserisci il numero per il primo array");
                array1[contatore] = scanIn.nextFloat();
            }
            System.out.println("---------------");
            for(contatore=0;contatore<10;contatore++){
                System.out.println("Inserisci un numero per il secondo array");
                array2[contatore] = scanIn.nextFloat();
            }
        }
        for(contatore=0;contatore<10;contatore++){
            sommaArray[contatore] = array1[contatore] + array2[contatore];
            System.out.println(contatore + " indice " + sommaArray[contatore]);
        }
    }
}