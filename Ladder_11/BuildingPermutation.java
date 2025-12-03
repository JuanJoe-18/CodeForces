package Ladder_11;

import java.util.*;

public class BuildingPermutation {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = rd.nextInt();
        }
        System.out.println(minMovesForPermutation(numbers,n));
    }

    public static int minMovesForPermutation(int[] N, int n) {
        int moves = 0;
        if (N[0] == 0 && N[n-1] ==0) {
            return n*(n+1)/2;

        }
        if (N[0] <= N[n - 1]) { //escribir la permutación de menor a mayor
            for (int i = 0; i < n; i++) {
                moves += Math.abs(i + 1 - N[i]);
            }
        } else {
            Integer[] SP = new Integer[n];
            for (int i = 0; i < n; i++) {
                SP[i] = i + 1;
            }
            Arrays.sort(SP, Collections.reverseOrder());
            for (int i = 0; i < n; i++) {
                moves += Math.abs(SP[i] - N[i]);
            }
        }
        return moves;
    }
}
