public class Mioinput {
    public static int leggiNum(String msg){
        int num;
        java.util.Scanner in = new java.util.Scanner(System.in);
        System.out.println(msg);
        num=in.nextInt();
        return num;
    }

    public static String leggiString(String msg){
        java.util.Scanner in = new java.util.Scanner(System.in);
        System.out.println(msg);
        return in.nextLine();
    }
    public static float leggiFloat(String msg){
        java.util.Scanner in = new java.util.Scanner(System.in);
        System.out.println(msg);
        return in.nextFloat();
    }
    public static float leggiFloat(String msg, float min, float max){
        java.util.Scanner in = new java.util.Scanner(System.in);
        float input;
        System.out.println(msg);
        do {
            input = in.nextFloat();
            if(input>max || input < min){
                System.out.println("Inserire un valore compreso tra "+min+" e "+max);
            }
        } while (input>max || input<min);
        return input;
    }

    public static int leggiNum(String msg, int x){
        int num;
        java.util.Scanner in = new java.util.Scanner(System.in);

        do{
            System.out.println(msg);
            num=in.nextInt();
            if(num==x){
                System.out.println("Valore inserito non accettato");
                System.out.println("Inserire un valore diverso da "+x+".");
            }
        }while(num==x);
        return num;
    }
    public static int leggiNum(String msg, int min, int max){
        int num;
        java.util.Scanner in = new java.util.Scanner(System.in);

        do{
            System.out.println(msg);
            num=in.nextInt();
            if(num<min || num>max){
                System.out.println("Valore inserito non accettato");
                System.out.println("Inserire un valore compreso tra "+min+" "+max+".");
            }
        }while(num<min || num>max);
        return num;
    }
    public static String leggiStr(String messaggio){
        String aux;
        java.util.Scanner in = new java.util.Scanner(System.in);
        System.out.println(messaggio);
        aux=in.nextLine();
        return aux;
    }
}
