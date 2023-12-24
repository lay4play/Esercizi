public class Menu
{
    private String[] voci;
    public Menu(String[] voci){
    this.voci=voci;
    }
    
    public void visualizza(){
        for(int i=0;i<this.voci.length;i++){
            System.out.println(this.voci[i]);
        }
    }
    
    public int scelta(){
        java.util.Scanner in = new java.util.Scanner(System.in);
        return in.nextInt();
    }
}
