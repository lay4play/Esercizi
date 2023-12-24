public class Mioinput
{
    
    public static String inputString(String msg){
        java.util.Scanner in = new java.util.Scanner(System.in);
        String aux;
        System.out.println(msg);
        aux = in.nextLine();
        return aux;
    }
    
    public static int inputInt(String msg){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int aux;
        System.out.println(msg);
        aux = in.nextInt();
        return aux;
    }
    
    public static int inputInt(String msg, int min){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int aux;
        do{
            System.out.println(msg);
            aux = in.nextInt();
            if(aux<min){
                System.out.println("Valore inserito non accettato, valore minimo" + min);
            } 
        }while (aux<min);
        return aux;
    }
    
    public static int inputInt(String msg, int min, int max){
        java.util.Scanner in = new java.util.Scanner(System.in);
        int aux;
        do{
            System.out.println(msg);
            aux = in.nextInt();
            if(aux>max || aux <min){
                System.out.println("Valore inserito non accettabile valore minimo " + min + " valore massimo " + max);            
            }
        } while(aux>max || aux < min);
        return aux;
    }
}
