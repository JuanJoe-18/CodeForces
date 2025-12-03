package Ladder_11;

import java.util.*;

public class BeautyMatrix {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int[][] Matriz = new int[5][5];
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                Matriz[i][j] = rd.nextInt();
            }
        }
        System.out.println(minOps(Matriz));
    }


    public static int minOps(int[][] M) {//solamente tengo que buscar los índices donde se encuentra el 1
        int row = 0;
        int col = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (M[i][j] == 1) {
                    row = i;
                    col = j;
                }
            }
        }
        return Math.abs(row - 2) + Math.abs(col - 2); //min number of operations
    }
}
