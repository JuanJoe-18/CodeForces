package Ladder_11;

import java.util.*;

public class Domino {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[][] Matriz = new int[n][2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                Matriz[i][j] = rd.nextInt();
            }
        }
    }

    public static int minMovesToComplete(int n, int[][] M) {
        int moves = 0;
        int upperSum = 0;
        int buttomPartSum = 0;
        int[] ifs = new int[2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                if (j == 0) {
                    upperSum++;
                } else {
                    buttomPartSum++;
                }
                if (M[i][0] % 2 == 0 && M[i][1] % 2 != 0) {
                    ifs[0] = i;
                    ifs[1] = 0;
                } else if (M[i][0] % 2 != 0 && M[i][1] % 2 == 0) {
                    ifs[0] = i;
                    ifs[1] = 1;
                } /*else if(M[i][0] % 2 != 0 && M[i][1] % 2 != 0){ ambos impares

                }*/
            }
        }
        if (upperSum % 2 == 0 && buttomPartSum % 2 == 0) {
            return 0;
        } else if (upperSum % 2 != 0 && buttomPartSum % 2 != 0) { // dos impares -> solo un intercambio de ficha par - impar o viceversa
            int temp = M[ifs[0]][ifs[1]];
            M[ifs[0]][ifs[1]] = M[ifs[0]][ifs[1] + 1];
            M[ifs[0]][ifs[1] + 1] = temp;

        }

        return -1;
    }


}

