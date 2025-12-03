
import java.util.Scanner;

public class Main {

    public static double tiempoPaMatar(int vidaO, int daño, int recarga) {
        int disparos = (vidaO + daño - 1) / daño;
        return (disparos - 1) * recarga + 0.5;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int h1 = sc.nextInt();
        int d1 = sc.nextInt();
        int t1 = sc.nextInt();
        
        int h2 = sc.nextInt();
        int d2 = sc.nextInt();
        int t2 = sc.nextInt();
        
        double tMuerte1 = tiempoPaMatar(h2, d1, t1);
        double tMuerte2 = tiempoPaMatar(h1, d2, t2);
        
        if (Math.abs(tMuerte1 - tMuerte2) < 1e-6) {
            System.out.println("draw");
        } else if (tMuerte1 < tMuerte2) {
            System.out.println("player one");
        } else {
            System.out.println("player two");
        }
        
        sc.close();
    }
}