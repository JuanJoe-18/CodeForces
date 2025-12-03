package Dayli;

import java.util.*;


public class CMedian {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Lectura de entrada
        int n = scanner.nextInt();
        int x = scanner.nextInt();
        List<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(scanner.nextInt());
        }

        // Llamamos a la función y mostramos la salida
        System.out.println(minElementsToAdd(n, x, arr));

        scanner.close();
    }

    public static int minElementsToAdd(int n, int x, List<Integer> arr) {
        arr.add(x); // Agregamos x al arreglo
        Collections.sort(arr); // Ordenamos el arreglo

        int count = 0;
        while (true) {
            int medianIndex = (arr.size() - 1) / 2; // Índice de la mediana (0-based)
            if (arr.get(medianIndex) == x) {
                return count+1; // Si la mediana es x, terminamos
            }
            arr.add(x); // Añadimos x nuevamente
            Collections.sort(arr); // Ordenamos otra vez
            count++; // Contamos los elementos agregados
        }
    }















}
