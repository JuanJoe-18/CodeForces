package NEERC2017;

import java.util.Scanner;

public class Burgers {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        String recipe = rd.nextLine();
        int nb = rd.nextInt();
        int ns = rd.nextInt();
        int nc = rd.nextInt();
        int pb = rd.nextInt();
        int ps = rd.nextInt();
        int pc = rd.nextInt();
        long money = rd.nextLong();
        rd.close();
        System.out.println(howManyToMake(nb, ns, nc, pb, ps, pc, money, recipe));
    }

    public static int[] cantidadDeingrecdientes(String recipe) {
        int pan = 0;
        int salc = 0;
        int queso = 0;
        for (int i = 0; i < recipe.length(); i++) {
            if (recipe.charAt(i) == 'B') {
                pan++;
            } else if (recipe.charAt(i) == 'S') {
                salc++;
            } else if (recipe.charAt(i) == 'C') {
                queso++;
            }
        }
        int[] ingredientes = new int[3];
        ingredientes[0] = pan;
        ingredientes[1] = salc;
        ingredientes[2] = queso;
        return ingredientes;
    }

    public static long howManyToMake(int nb, int ns, int nc, int pb, int ps, int pc, long money, String recipe) {
        int[] ingredientes = cantidadDeingrecdientes(recipe);
        int pan = ingredientes[0];
        int salc = ingredientes[1];
        int queso = ingredientes[2];
        long max = money + nb + ns + nc;
        long min = 0;
        long mid;
        while (min <= max) {
            mid = (min + max) / 2;
            long requiredB = Math.max(0, pan * mid - nb);
            long requiredS = Math.max(0, salc * mid - ns);
            long requiredC = Math.max(0, queso * mid - nc);
            long costo = requiredB * pb + requiredS * ps + requiredC * pc;
            if (costo <= money) {
                min = mid + 1;
            } else {
                max = mid - 1;
            }
        }
        return max;
    }



}
