package Ladder_13;

import java.util.Map;
import java.util.Scanner;
public class Res {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int m  = rd.nextInt();
        int n = rd.nextInt();
        for (int x = 0; x < n; x++) {
            System.out.println((m*(x+1) %n));
        }
    }


}

