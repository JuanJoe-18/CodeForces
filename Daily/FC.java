package Dayli;

import java.util.Scanner;

public class FC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            System.out.println(findMeetingTime(x, y, a, b));
        }
    }

    private static int findMeetingTime(int x, int y, int a, int b) {
        int distance = y - x;
        int speedSum = a + b;
        if (distance % speedSum == 0) {
            return distance / speedSum;
        } else {
            return -1;
        }
    }
}