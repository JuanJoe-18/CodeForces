package Dayli;

import java.util.Scanner;
public class Watermelon {
    public static Scanner rd;

    public static void main(String[] args) {
        rd = new Scanner(System.in);
            int number = rd.nextInt();
            if (number > 2) {
                if (number % 2 == 0 && ((((number/2)-1) + ((number/2)-1))) % 2 == 0){
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            } else {
                System.out.println("NO");
            }
    }
}