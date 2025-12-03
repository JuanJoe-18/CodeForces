package Dayli;

import java.util.*;

public class CAB {
    public Scanner rd;


    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        Integer size = rd.nextInt();
        Integer size1 = size;
        Integer[] array = new Integer[size];
        for (int i = 0; i < size; i++) {
            array[i] = rd.nextInt();
        }

// encontrar la cantidad de elementos distintos de un arreglo
        Set<Integer> enteSet = new HashSet<>(Arrays.asList(array));
        Set<Integer> interseccion = new HashSet<>(enteSet);

        System.out.println(interseccion.size());







    }





















}
