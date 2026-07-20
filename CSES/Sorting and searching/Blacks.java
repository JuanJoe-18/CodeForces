

import java.util.Scanner;

public class Blacks {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int t = rd.nextInt();
        for (int i = 0; i <t; i++) {
            int n = rd.nextInt();
            int k = rd.nextInt();
            String array = rd.next().toUpperCase();
            System.out.println(howManyBlacksToChangeColor(array,k));
        }
    }


    public static int howManyBlacksToChangeColor(String array, int k) {
        int count = 0;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < array.length(); i++) {
            if (array.charAt(i) == 'W') {
                count++;
            }
            if (i >= k) {
                if (array.charAt(i - k) == 'W') {
                    count--;
                }
            }
            if (i >= k - 1) {
                min = Math.min(min, count);
            }
        }
        return min;
    }























}
