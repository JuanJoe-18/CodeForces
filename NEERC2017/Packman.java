package NEERC2017;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;

public class Packman {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        String arreglo = rd.next();
        rd.close();
        ArrayList<Integer> packmens = new ArrayList<>();
        ArrayList<Integer> asterisks = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            if (arreglo.charAt(i) == 'P') {
                packmens.add(i);
            } else if (arreglo.charAt(i) == '*') {
                asterisks.add(i);
            }
        }

        int left = 0, right = n, result = n;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (todos(packmens, asterisks, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        System.out.println(result);
    }

    private static boolean todos(ArrayList<Integer> packmens, ArrayList<Integer> asteriscos, int tiempo) {
        int j = 0;
        for (int i = 0; i < packmens.size() && j < asteriscos.size(); i++) {
            int packman = packmens.get(i);
            int inicio = j;
            while (j < asteriscos.size() && Math.abs(packman - asteriscos.get(j)) <= tiempo) {
                j++;
            }
            if (j == inicio) {
                return false;
            }
        }
        return j == asteriscos.size();
    }


}
