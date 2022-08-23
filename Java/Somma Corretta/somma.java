import java.util.Scanner;

public class somma{
    public static void main(String[] args){
    //Inserire due numeri e chiedere la somma finche' non viene inserita correttamente
    int[] numero;
    int i;
    numero = new int[3];
    Scanner scanIn =new Scanner(System.in);
    for(i=0;i<2;++i){
        System.out.println("Inserisci il numero " + i);
        numero[i]= scanIn.nextInt();
    }
    do{
        System.out.println("Inserisci la somma dei due numeri");
        numero[2] = scanIn.nextInt();
        if(numero[2]!=(numero[0]+numero[1])){
            System.out.println("La somma e' errata, riprovare");
        } else {
            System.out.println("La somma e' corretta!");
        }
    } while(numero[2]!=(numero[0]+numero[1]));
    //in.close();
    }

}