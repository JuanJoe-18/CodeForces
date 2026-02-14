
import java.util.*;

public class MaxSubArraySum {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        long n = rd.nextInt();
        long[] arreglo = new long[(int) n];
        for (int i = 0; i < n; i++) {
            arreglo[i] = rd.nextInt();
        }
        System.out.println(maxSubArraySum(arreglo));
    }

    public static long maxSubArraySum(long[] A) {
        long max = Long.MIN_VALUE;
        long currentSum = 0;
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
