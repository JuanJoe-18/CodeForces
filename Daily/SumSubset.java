package Dayli;

import java.util.*;
import java.util.stream.*;

public class SumSubset {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);

        // Tamaño del array
        int n = rd.nextInt();

        // Leer el array
        Integer[] array = new Integer[n];
        for (int i = 0; i < array.length; i++) {
            array[i] = rd.nextInt();
        }

        // Construir conjunto de partes
        HashSet<HashSet<Integer>> partes = obtenerConjuntoDePartes(array);
        System.out.println("Conjunto de partes: " + partes);

        // Leer el objetivo
        int obj = rd.nextInt();

        // Encontrar subconjuntos cuya suma sea obj
        HashSet<HashSet<Integer>> resultado = encontrarSubconjuntosConSuma(partes, obj);

        System.out.println("Subconjuntos cuya suma es " + obj + ": " + resultado);

        rd.close();
    }

    public static <T> HashSet<HashSet<T>> obtenerConjuntoDePartes(T[] array) {
        List<T> lista = Arrays.asList(array);
        int n = lista.size();
        return IntStream.range(0, 1 << n)
                .mapToObj(i -> IntStream.range(0, n)
                        .filter(j -> (i & (1 << j)) != 0)
                        .mapToObj(lista::get)
                        .collect(Collectors.toCollection(HashSet::new)))
                .collect(Collectors.toCollection(HashSet::new));
    }

    public static HashSet<HashSet<Integer>> encontrarSubconjuntosConSuma(HashSet<HashSet<Integer>> conjuntoDePartes, int x) {
        return conjuntoDePartes.stream()
                .filter(subconjunto -> subconjunto.stream().mapToInt(Integer::intValue).sum() == x)
                .collect(Collectors.toCollection(HashSet::new));
    }
}
