package Ladder_11;

import java.util.*;

public class IQtest {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        char[][] Matrix = new char[4][4];
        for (int i = 0; i < 4; i++) {
            String line = rd.nextLine(); // Leer cada línea
            for (int j = 0; j < 4; j++) {
                Matrix[i][j] = line.charAt(j); // Aignar cada carácter a la matriz
            }
        }
        System.out.println(detResoluble(Matrix));
    }

    public static String detResoluble(char[][] M) {
        int fills = 0;
        int blacks1 = 0;
        int whites1 = 0;
        for (int f = 0; f <= 1; f++) {
            for (int c = 0; c <= 1; c++) {
                if (M[f][c] == '#') {
                    blacks1++;
                } else {
                    whites1++;
                }
            }
        }
        int fill1 = Math.max(blacks1, whites1);
        if (fill1 >= 3) {
            fills++;
        }
        int blacks2 = 0;
        int whites2 = 0;
        for (int f = 0; f <= 1; f++) {
            for (int c = 1; c <= 2; c++) {
                if (M[f][c] == '#') {
                    blacks2++;
                } else {
                    whites2++;
                }
            }
        }
        int fill2 = Math.max(blacks2, whites2);
        if (fill2 >= 3) {
            fills++;
        }
        int blacks3 = 0;
        int whites3 = 0;
        for (int f = 0; f <= 1; f++) {
            for (int c = 2; c <= 3; c++) {
                if (M[f][c] == '#') {
                    blacks3++;
                } else {
                    whites3++;
                }
            }
        }
        int fill3 = Math.max(blacks3, whites3);
        if (fill3 >= 3) {
            fills++;
        }
        int blacks4 = 0;
        int whites4 = 0;
        for (int f = 1; f <= 2; f++) {
            for (int c = 0; c <= 1; c++) {
                if (M[f][c] == '#') {
                    blacks4++;
                } else {
                    whites4++;
                }
            }
        }
        int fill4 = Math.max(blacks4, whites4);
        if (fill4 >= 3) {
            fills++;
        }
        int blacks5 = 0;
        int whites5 = 0;
        for (int f = 1; f <= 2; f++) {
            for (int c = 1; c <= 2; c++) {
                if (M[f][c] == '#') {
                    blacks5++;
                } else {
                    whites5++;
                }
            }
        }
        int fill5 = Math.max(blacks5, whites5);
        if (fill5 >= 3) {
            fills++;
        }
        int blacks6 = 0;
        int whites6 = 0;
        for (int f = 1; f <= 2; f++) {
            for (int c = 2; c <= 3; c++) {
                if (M[f][c] == '#') {
                    blacks6++;
                } else {
                    whites6++;
                }
            }
        }
        int fill6 = Math.max(blacks6,whites6);
        if (fill6 >= 3) {
            fills++;
        }
        int blacks7 = 0;
        int whites7 = 0;
        for (int f = 2; f <= 3; f++) {
            for (int c = 0; c <= 1; c++) {
                if (M[f][c] == '#') {
                    blacks7++;
                } else {
                    whites7++;
                }
            }
        }
        int fill7 = Math.max(blacks7, whites7);
        if (fill7 >= 3) {
            fills++;
        }
        int blacks8 = 0;
        int whites8 = 0;
        for (int f = 2; f <= 3; f++) {
            for (int c = 1; c <= 2; c++) {
                if (M[f][c] == '#') {
                    blacks8++;
                } else {
                    whites8++;
                }
            }
        }
        int fill8 = Math.max(blacks8, whites8);
        if (fill8 >= 3) {
            fills++;
        }
        int blacks9 = 0;
        int whites9 = 0;
        for (int f = 2; f <= 3; f++) {
            for (int c = 2; c <= 3; c++) {
                if (M[f][c] == '#') {
                    blacks9++;
                } else {
                    whites9++;
                }
            }
        }
        int fill9 = Math.max(blacks9, whites9);
        if (fill9 >= 3) {
            fills++;
        }
        return (fills >= 1) ? "YES" : "NO";
    }

}

