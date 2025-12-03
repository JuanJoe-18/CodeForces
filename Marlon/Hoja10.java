package Marlon;

import java.util.LinkedList;
import java.util.Random;

public class Hoja10 {

    public static void main(String[] args) {
        Hoja10 exe = new Hoja10();
        exe.ejercicio1(4, 5);
        int[] A = {1, 2, 3, 4, 5};
        exe.ejercicio2(A);
        exe.ejercicio3(A);
        exe.ejercicio4(A);
        exe.ejercicio5C(16);
        exe.analizarComplejidad(5);
    }

    public Hoja10() {// Calcule la complejidad Big O de este algoritmo
    }

    //Solución O(N+M)
    public void ejercicio1(int N, int M) {
        int a = 0, b = 0;
        for (int i = 0; i < N; i++) { //
            a = a + rand();
        }
        for (int j = 0; j < M; j++) {
            b = b + rand();
        }
    }

    private int rand() {
        Random aleatorio = new Random();
        return aleatorio.nextInt((int) (System.currentTimeMillis() % 100));
    }

    //Calcule la complejidad Big O de este algoritmo
    //Solución O(n^2)
    public int ejercicio2(int[] arr) {
        int a = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = arr.length - 1; j > i; j--) {
                a = a + i + arr[j];
            }
        }
        return a;
    }

    //Calcule la complejidad Big O de este algoritmo
    //Solución O(nlog(n))
    public int ejercicio3(int[] arr) {
        int i, j, k = 0;
        int n = arr.length;
        for (i = n / 2; i <= n; i++) {
            for (j = 2; j <= n; j = j * 2) {
                k = k + n / 2;
            }
        }
        return k;
    }

    //Calcule la complejidad Big O de este algoritmo
    //Solución O(n^2)
    public int ejercicio4(int[] arr) {
        int k = 0;
        int j = 2;
        int n = arr.length;
        int i = n / 2;

        while (i <= n) { //n/2
            while (j <= n) { //(n-1)(n/2)
                k = i + j + k;
                ++j;
            }
            ++i;
        }
        return k;


    }

    //Calcule la complejidad Big O de este algoritmo
    //Solución O(2n+n^2sqrt(n))
    public static LinkedList<Integer> ejercicio5C(int n) {
        boolean[] A = new boolean[n + 1];
        for (int i = 0; i < n; i++) { //n
            A[i] = true;
        }
        for (int p = 2; p * p <= n; p++) {//sqrt(n)
            if (A[p] == true) {
                for (int i = p * 2; i <= n; i += p) { //O(n/2)
                    A[i] = false;
                }
            }
        }

        LinkedList<Integer> B = new LinkedList<>();
        for (int i = 1; i < A.length; i++) {//O(n)
            if (A[i])
                B.add(i);
        }

        return B;
    }

    public static void analizarComplejidad(int n) {
        int i = 1; // Línea 1
        int cnt=1;
        while (i <= n) { // Línea 2
            int k = i;
            cnt+=1;// Línea 3
            while (k <= n) { // Línea 4
                k += 1; // Línea 5
            }
            k = 1;// Línea 5 (No cambia k, posible error lógico)
            while (k <= i) { // Línea 7
                k +=1; // Línea 8 (Mismo problema que en línea 5)
            }
            i = i + 1; // Línea 9
        }


    }
}






