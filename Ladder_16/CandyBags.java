package Ladder_16;

import java.util.*;

public class CandyBags {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt(); //n es par
        int n2 = (int) Math.pow(n, 2);
        int promCandies = (n2 / 2) * (n2 + 1) / n; //suma de gauss que es lo que le toca a cada hermano
        int[] A = new int[n2];
        // inicializar el arrelo:
        Arrays.fill(A, 0);
        // Ahora necesito construir el arreglo de manera intercalada(inicio-final)

        reparticion(n2, A);
        imprimirPorHermanos( n,n2);
    }

    public static void reparticion(int n2, int[] A) {
        int i = 0;
        int j = n2;
        while (i < n2) {
            if (i == 0) {
                A[i] = 1;
                i++;
            } else if (i % 2 == 0 && i > 0) {
                A[i] = i;
                i++;
            } else if (i % 2 == 1) {
                A[i] = j;
                i++;
                j--;
            }
        }

    }

    public static void imprimirPorHermanos(int n,int n2) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int primero = i * (n / 2) + j + 1;
                int segundo = n2 - (i * (n / 2) + j);
                System.out.print(primero + " " + segundo + " ");
            }
            System.out.println();
        }
    }

}//👌


