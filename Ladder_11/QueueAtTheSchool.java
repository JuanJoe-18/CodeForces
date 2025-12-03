package Ladder_11;

import java.util.Scanner;

public class QueueAtTheSchool {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int t = rd.nextInt();
        rd.nextLine();
        String cola = rd.nextLine();
        char[] colainicial = cola.toCharArray();
        for (int i = 0; i < t; i++) {
            for (int j = 1; j < colainicial.length; j++) {
                if (colainicial[j - 1] == 'B' && colainicial[j] == 'G') {
                    colainicial[j - 1] = 'G';
                    colainicial[j] = 'B';
                    j++;
                }
            }
        }
        String col = new String(colainicial);
        System.out.println(col);
    }
}