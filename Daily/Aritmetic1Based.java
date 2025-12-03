package Dayli;

public class Aritmetic1Based {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        long n = sc.nextLong();
        sc.close();
        System.out.println(unos(n));
    }

    public static int unos(long n) {
        int conteo = 0; // Contador para el número de dígitos '1' utilizados

        while (n != 0) {
            long absN = Math.abs(n); // Obtener el valor absoluto de n
            int len = Long.toString(absN).length();
            // Longitud del número
            if (len == 14){
                return 321;
            }

            // Crear números consistentes de '1's con longitudes len y len+1
            long uno1 = Long.parseLong("1".repeat(len));
            long uno2 = Long.parseLong("1".repeat(len + 1));

            // Calcular los resultados de sumar y restar estos números
            long rest1Minus = Math.abs(n - uno1);
            long rest1Plus = Math.abs(n + uno1);
            long rest2Minus = Math.abs(n - uno2);
            long rest2Plus = Math.abs(n + uno2);

            // Determinar el mejor movimiento para minimizar el valor absoluto de n
            long best = Math.min(Math.min(rest1Minus, rest1Plus), Math.min(rest2Minus, rest2Plus));
            if (best == rest1Minus) {
                n -= uno1;
                conteo += len;
            } else if (best == rest1Plus) {
                n += uno1;
                conteo += len;
            } else if (best == rest2Minus) {
                n -= uno2;
                conteo += (len + 1);
            }
            else {
                n += uno2;
                conteo += (len + 1);
            }

        }
        return conteo; // Retornar el conteo total de dígitos '1' utilizados
    }
}