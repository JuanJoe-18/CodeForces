package Ladder_11;

import java.util.*;

public class ArrivalOfTheGeneral {

    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] soldiers = new int[n];
        for (int i = 0; i < n; i++) {
            soldiers[i] = rd.nextInt();
        }
        System.out.println(minSecondsToForm(n, soldiers));
        ;
    }

    public static int minSecondsToForm(int n, int[] SD) {
        int tallerSD = 0; // Índice del soldado más alto
        int lowerSD = 0; // Índice del soldado más bajo
        int seconds = 0;

        for (int i = 0; i < n; i++) {
            if (SD[i] > SD[tallerSD]) {
                tallerSD = i; // Actualizar índice del más alto
            }
            if (SD[i] <= SD[lowerSD]) {
                lowerSD = i; // Actualizar índice del más bajo
            }
        }
        //una vez localizados hacemos un intercambio a la vez
        int movesToFront = tallerSD;
        int movesToEnd = (n - 1 - lowerSD);
        if (tallerSD > lowerSD) {
            seconds = movesToFront + movesToEnd - 1;
        } else {
            seconds = movesToFront + movesToEnd;
        }
        return seconds;
    }


}
