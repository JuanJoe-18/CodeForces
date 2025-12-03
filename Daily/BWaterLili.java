package Dayli;

import java.util.Scanner;

public class BWaterLili {

    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int H = rd.nextInt();
        int L = rd.nextInt();
        double result = (Math.pow(L,2) - Math.pow(H,2) ) / (2 * H);
        System.out.println(result);


    }
}
