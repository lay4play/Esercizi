import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        equazione equazione = new equazione();
        System.out.print("Inserisci a: ");
        equazione.setA(in.nextFloat());
        System.out.print("Inserisci b: ");
        equazione.setB(in.nextFloat());
        System.out.print("Inserisci c: ");
        equazione.setC(in.nextFloat());
        equazione.calcolaRisultato();
    }
}