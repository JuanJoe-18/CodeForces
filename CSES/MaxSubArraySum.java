
import java.util.*;

public class MaxSubArraySum {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] arreglo = new int[n];
        for (int i = 0; i < n; i++) {
            arreglo[i] = rd.nextInt();
        }
        System.out.println(maxSubArraySum(arreglo));
    }

    public static int maxSubArraySum(int[] A) {
        int max = Integer.MIN_VALUE;
        int currentSum = 0;
        for (int i = 0; i < A.length; i++) {
            if (i == 0) {
                currentSum = A[i];
            } else {
                currentSum = Math.max(A[i], currentSum + A[i]);
            }
            max = Math.max(max, currentSum);
        }
        return max;
    }
}
