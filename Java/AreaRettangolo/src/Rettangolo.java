import java.util.Scanner;
public class Rettangolo {
    private int base, altezza;

    Scanner in;

    public Rettangolo(){}

    public void input(){
        in = new Scanner(System.in);
        base = in.nextInt();
        altezza=in.nextInt();
    }

    public int area(){
        return base*altezza;
    }

}
