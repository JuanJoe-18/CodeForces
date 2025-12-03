package LeetCode;

import java.util.*;
public class Roman_Numbers_HT {
    public static void main(String[] args) {
        System.out.println(intToRoman(1994));
    }

    public static String intToRoman(int num) {
        Hashtable<Integer, String> romanos = new Hashtable<>();
        romanos.put(1, "I");
        romanos.put(4, "IV");
        romanos.put(5, "V");
        romanos.put(9, "IX");
        romanos.put(10, "X");
        romanos.put(40, "XL");
        romanos.put(50, "L");
        romanos.put(90, "XC");
        romanos.put(100, "C");
        romanos.put(400, "CD");
        romanos.put(500, "D");
        romanos.put(900, "CM");
        romanos.put(1000, "M");
        int[] valores = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        StringBuilder res = new StringBuilder();
        for (int valor : valores) {
            while (num >= valor) {
                res.append(romanos.get(valor));
                num -= valor;
            }
        }
        return res.toString();
    }
}
