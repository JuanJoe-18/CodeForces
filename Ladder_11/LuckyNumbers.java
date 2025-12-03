package Ladder_11;

import java.util.*;

public class LuckyNumbers {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        String number = rd.nextLine();
        System.out.println(detLucky(number));
    }

    public static String detLucky(String num) {
        int lenght = num.length();
        int count = 0;
        for (int i = 0; i < lenght; i++) {
            if (num.charAt(i) == '4' || num.charAt(i) == '7') {
                count++;
            }
        }
        return (count == 7 || count == 4) ? "YES":"NO";
    }


}
