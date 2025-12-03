package Ladder_11;

import java.util.*;

public class YoungPhysist {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] vectores = new int[3 * n];
        for (int i = 0; i < 3 * n; i++) {
            vectores[i] = rd.nextInt();
        }
        System.out.println(enReposo(vectores));
    }
    public static String enReposo(int[] V){
        int sumX = 0;
        int sumY = 0;
        int sumZ = 0;
        for (int i = 0; i < V.length; i+=3) {
            sumX += V[i];
        }
        for (int i = 0; i < V.length; i+=3) {
            sumY += V[i];
        }
        for (int i = 0; i < V.length; i+=3) {
            sumZ += V[i];
        }
        if (sumX == 0 && sumY == 0 && sumZ == 0) {
            return "YES";
        }
        return "NO";
    }

}
