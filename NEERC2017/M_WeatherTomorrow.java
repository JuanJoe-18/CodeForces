package NEERC2017;

import java.util.Scanner;

public class M_WeatherTomorrow {

    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);

        int n = rd.nextInt();
        int[] progression = new int[n];
        for (int i = 0; i < n; i++) {
            progression[i] = rd.nextInt();
        }
        if (isProgression(progression)) {
            System.out.println(progression[n - 1] + constant(progression));
        } else {
            System.out.println(progression[n - 1]);
        }
    }

    public static boolean isProgression(int[] prog) {
        int cte = constant(prog);
        for (int i = 1; i < prog.length; i++) {
            if (prog[i] - prog[i - 1] != cte) {
                return false;
            }
        }
        return true;
    }

    public static int constant(int[] prog) {
        return prog[1] - prog[0];
    }
}