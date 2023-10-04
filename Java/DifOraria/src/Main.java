import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ore or1 = new ore();
        ore or2 = new ore();
        System.out.print("Inserisci il primo orario: ");
        or1.input();
        or1.visualizza();
        System.out.print("Inserisci il secondo orario: ");
        or2.input();
        or2.visualizza();
        int dif=or2.minuti()-or1.minuti();
        System.out.print("La differenza tra i due orari e' di: "); System.out.print(dif); System.out.println(" Minuti");
    }
}
