public class arraycontrario{
    public static void main(String[] args){
        int i, c;
        int[] array, arraycontrario;
        array = new int[6];
        arraycontrario = new int[6];
        for(i=0;i<6;i++){
            array[i] = (int)((Math.random() * 101) -1); //generate a random number from 0 to 100
            System.out.print(array[i] + " ");
        }
        c = 0;
        System.out.println("\n-----------------");
        for(i=5;i>=0;i=i-1){
            arraycontrario[c] = array[i];
            System.out.print(arraycontrario[c] + " ");
            c++;
        }
        System.out.print("\n");
    }
}