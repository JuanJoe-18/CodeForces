package Ladder_11;

import java.util.*;

public class StonesOnTheTable {


    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        rd.nextLine();
        String ST = rd.nextLine();
        System.out.println(neighbors(n,ST));
    }

    public static int neighbors(int n, String stones) {
        int neighbors = 0;
        for (int i = 1; i < n; i++) {
            if (stones.charAt(i - 1) == stones.charAt(i)) {
                neighbors++;
            }
        }
        return neighbors;
    }
}
