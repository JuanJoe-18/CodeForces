package Dayli;

import java.util.Scanner;

public class AdyacentReplacement {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int size = rd.nextInt();
        int[] array = new int[size];


        // Scanning
        for (int i = 0; i < size; i++) {
            array[i] = rd.nextInt();
        }
        // Interchange
        for (int i = 0; i < size; i++) {
            if (array[i] % 2 == 0) {
                array[i] -= 1;
            }
        }
        // Output
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }
}