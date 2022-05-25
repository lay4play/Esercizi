import java.util.Scanner; 
public class numeriACaso{
    public static void main(String[] args){
        int randomNumber;
        randomNumber = (int)(Math.random() * 101); //genera un numero a caso tra 1 e 100 con casting esplicito forzato ad int
        System.out.println("Il numero a caso di oggi è: " + randomNumber);
    }
}