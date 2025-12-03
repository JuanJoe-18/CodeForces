package Dayli;

import java.util.*;
public class ATeam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            discomponerNumeros(n);
        }
    }
    private static void discomponerNumeros(int n) {
        int multi = 1;
        ArrayList<Integer> rnumbers = new ArrayList<>();
        while (n > 0) {
            int digito = n % 10;
            if (digito != 0) {
                rnumbers.add(digito * multi);
            }
            n /= 10;
            multi *= 10;
        }
        System.out.println(rnumbers.size());
        for (int roundNumber : rnumbers) {
            System.out.print(roundNumber + " ");
        }
        System.out.println();
    }
}







