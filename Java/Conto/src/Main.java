import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Conto cc = new Conto();
        int scelta;
        float deposito, tasso, importo;
        while(true) {
            System.out.println("1) Acquisisci deposito");
            System.out.println("2) Acquisisci tasso");
            System.out.println("3) Visualizza deposito");
            System.out.println("4) Visualizza tasso");
            System.out.println("5) Versamento");
            System.out.println("6) Prelievo");
            System.out.println("7) Aggiorna");
            System.out.println("8) Esci");
            System.out.print("Scelta: \n> ");
            scelta=in.nextInt();
            switch(scelta){
                case 1: System.out.print("Deposito \n> "); deposito=in.nextFloat(); cc.setDeposito(deposito); break;
                case 2: System.out.print("Tasso \n> "); tasso= in.nextFloat(); cc.setTasso(tasso); break;
                case 3: System.out.println(cc.getDeposito()); break;
                case 4: System.out.println(cc.getTasso()); break;
                case 5: System.out.print("Importo da versare\n> "); importo=in.nextInt(); cc.versamento(importo); break;
                case 6: System.out.print("Importo da prelevare\n > "); importo=in.nextInt(); if(!cc.prelievo(importo)){System.out.println("Importo non disponibile sul conto");} break;
                case 7: cc.aggiorna(); break;
                case 8: System.exit(0);
            }
        }
    }
}