package NEERC2017;

import java.util.Scanner;

public class SumaAnidada {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        long k = rd.nextLong();
        rd.close();
        long maxK = (long) n * (n - 1) / 2;

        if (k < 0 || k > maxK) {
            System.out.println("Imposible");
            return;
        }

        StringBuilder result = new StringBuilder(); //aqui use StringBuilder porque es más eficiente que String y tambien  que el arreglo de char o el arrayList
        int profundidad = 0;  // profundidad actual de anidacion

        for (int i = 0; i < n; i++) {
            // agrego  otro '(' y lcanzo la máxima anicacion posible no sobrepasa k, lo agregamos
            if (k >= (profundidad + (n - 1 - i))) {
                result.append("(");
                k -= profundidad; // Agrego un ( para la suma profundidad
                profundidad++;
            } else {
                result.append(")");
                profundidad--;
            }
        }

        // Agrego los parentesis de cierre faltantes
        while (profundidad > 0) {
            result.append(")");
            profundidad--;
        }

        System.out.println(result.toString());
    }
}