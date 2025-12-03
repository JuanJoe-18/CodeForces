package NEERC2017;

import java.util.Scanner;

public class H_LoadingTest {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] requests = new int[n];

        for (int i = 0; i < n; i++) {
            requests[i] = rd.nextInt();
        }
        System.out.println(additionalRequests(requests));
    }

    /* Solucion 1 faliled en en el ejemplo 3
    public static int additionalRequests(int[] R) {
        // caso uno, Ya es una montaña
        if (R.length == 1) {
            return 0;
            // Casos dos, hay solo dos elementos y si alguno de son iguales solo se agrega uno, de lo contrario no hay que agregar nada
        } else if (R.length == 2 && R[0] != R[1]) {
            return 0;
        } else if (R.length == 2 && R[0] == R[1]) {
            return 1;
        } else {
            int mayor = 0;
            //paso 1, encontrar el pico de la montaña
            for (int i = 0; i < R.length; i++) {
                if (R[i] > mayor) {
                    mayor = R[i];
                }
            }
            // paso 2, iterar el arreglo y contar los elementos que son menores al pico
            int i = 1;
            while (R[i] > R[i - 1]) {
                i++;
            }
            int j = R.length - 2;
            while (R[j] > R[j + 1]) {
                j--;
            }
            // paso 3, contar los elementos que no cumplen con la condición de montaña
            int additionalRequests = 0;
            for (int k = 0; k < i; k++) {
                if (R[k] >= R[k + 1]) {
                    additionalRequests += (R[k] - R[k + 1] + 1);
                    R[k + 1] = R[k] + 1;
                }
            }
            for (int k = R.length - 1; k > j; k--) {
                if (R[k] >= R[k - 1]) {
                    additionalRequests += (R[k] - R[k - 1] + 1);
                    R[k - 1] = R[k] + 1;
                }
            }
            return additionalRequests;
        }

    }*/

    public static int additionalRequests(int[] R) {
        int n = R.length;
        if (n <= 1) return 0;
        long[] creciente = new long[n];
        long[] decreciente = new long[n];

        long[] costoCreciente = new long[n]; // costos minimos acumulados
        long[] costoDecreciente = new long[n];

        // de izquierda a derecha, estrictamente creciente
        creciente[0] = R[0];
        costoCreciente[0] = 0;
        for (int i = 1; i < n; i++) {
            if (R[i] <= creciente[i - 1]) {
                creciente[i] = creciente[i - 1] + 1;
                costoCreciente[i] = costoCreciente[i - 1] + (creciente[i] - R[i]);
            } else {
                creciente[i] = R[i];
                costoCreciente[i] = costoCreciente[i - 1];
            }
        }

        //  De derecha a izquierda debe ser estrictamente decreciente
        decreciente[n - 1] = R[n - 1];
        costoDecreciente[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (R[i] <= decreciente[i + 1]) {
                decreciente[i] = decreciente[i + 1] + 1;
                costoDecreciente[i] = costoDecreciente[i + 1] + (decreciente[i] - R[i]);
            } else {
                decreciente[i] = R[i];
                costoDecreciente[i] = costoDecreciente[i + 1];
            }
        }

        //  Encontrar el costo total minimo y dividiendo en cada pico posible
        long costoMinimo = Math.min(costoCreciente[n - 1], costoDecreciente[0]);
        for (int i = 0; i < n - 1; i++) {
            long costoCombinado = costoCreciente[i] + costoDecreciente[i + 1];
            if (costoCombinado < costoMinimo) {
                costoMinimo = costoCombinado;
            }
        }
        return (int) costoMinimo;
    }



}

