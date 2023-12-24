public class MioInput {
    public int leggiNum(String msg){
        int num;
        java.util.Scanner in = new java.util.Scanner(System.in);
            System.out.println(msg);
            num=in.nextInt();
        return num;
    }

    public int leggiNum(String msg, int x){
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
    public int leggiNum(String msg, int min, int max){
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
}
