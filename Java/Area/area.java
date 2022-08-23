import java.util.Scanner;

public class area{
    public static void main(String[] args){
        int lato, figura;
        float risultato;
        System.out.println("Scegli di che figura vuoi sapere l'area\n1 Quadrato\n2 Cerchio\n3 Triangolo equilatero\n");  
        Scanner scanIn =new Scanner(System.in); //inzializza lo scanIn, da chiudere quando finisce il programma
        figura = scanIn.nextInt(); 
        System.out.println("Inserisci il lato o il raggio");
        lato = scanIn.nextInt();
        if(figura == 1){
            risultato = (float)(lato * lato);
        } else{
            if(figura == 2){
                risultato = (float)((lato * lato) * 3.14);
            } else {
                risultato = (float)((lato * lato) / 2);
            }
        }
        System.out.println("il risultato è " + risultato);
        //in.close(); //chiude lo scanIn 
    }

}