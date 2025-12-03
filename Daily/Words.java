package Dayli;

import java.util.Scanner;

public class Words {
    public static Scanner rd;

    public static void main(String[] args) {
        rd = new Scanner(System.in);
        String word = rd.nextLine();
        if (word.length() > 1){
            if (word.length() > 10) {
                System.out.println(String.valueOf(word.charAt(0)) + String.valueOf(word.length()) + String.valueOf(word.charAt(word.length() - 1)));
            } else {
                System.out.println(word);
            }
        }
    }
}