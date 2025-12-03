package Ladder_16;

import java.util.*;

public class Tprimes {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        long[] numeros = new long[n];
        for (int i = 0; i < n; i++) {
            numeros[i] = rd.nextLong();
        }
        for (int i = 0; i < n; i++) {
            if(Es_3TPrimo(numeros[i])){
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
        }
    }
    public static int  determinador_de_divisores(long numero) {
        int divisores = 0;
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }
        return divisores;
    }
    public static boolean Es_3TPrimo(long numero) {
        if (determinador_de_divisores(numero) == 3) {
            return true;
        }
        return false;
    }
}
