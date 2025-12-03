
package Ladder_16;

import java.util.ArrayList;
import java.util.Scanner;

public class PeriodicRecurrence {
    static class Pair {
        int first, second;

        Pair(int f, int s) {
            first = f;
            second = s;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int k = 0; k < t; k++) {
            int M = sc.nextInt();
            int a0 = sc.nextInt();
            int a1 = sc.nextInt();
            int A = sc.nextInt();
            int B = sc.nextInt();

            ArrayList<Pair> sequence = new ArrayList<>();
            sequence.add(new Pair(a0, a1));

            int x = a0, y = a1;
            long count = 0;
            while (true) {
                int temp = (int) (((long) A * x + (long) B * y) % M);
                x = y;
                y = temp;
                count++;

                if (x == a0 && y == a1) {
                    System.out.println(count);
                    break;
                }
                sequence.add(new Pair(x, y));
            }
        }
        sc.close();
    }
}