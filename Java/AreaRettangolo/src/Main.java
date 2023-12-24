// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        Rettangolo rettangolo = new Rettangolo();
        System.out.print("Inserisci la base e l'altezza del rettangolo");
        rettangolo.input();
        System.out.print("Area: ");
        System.out.println(rettangolo.area());
    }
}