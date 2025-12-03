package Ladder_11;

import java.util.*;

public class B_Dinks {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] drinks = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            drinks[i] = rd.nextInt();
            sum+= drinks[i];
        }
        double res = (double) sum / n;
        System.out.println(res);//Demasiadoooo facillll
    }
}
