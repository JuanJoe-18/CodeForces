package NEERC2017;

import java.util.*;

public class ArbolDivino {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long m = sc.nextLong();

            long minSum = n;
            long maxSum = (long) n * (n + 1) / 2;
            if (m < minSum || m > maxSum) {
                System.out.println(-1);
                continue;
            }

            long p = m - n;
            List<Integer> path = new ArrayList<>();
            boolean[] vis = new boolean[n + 1];
            int cur = 0;
            for (int i = n - 1; i >= 0; i--) {
                if (cur + i <= p) {
                    cur += i;
                    path.add(i + 1);
                }
            }
            if (path.isEmpty() || path.get(path.size() - 1) != 1) path.add(1);

            // Marcar visitados
            for (int v : path) vis[v] = true;
            List<Integer> unvis = new ArrayList<>();
            for (int i = 1; i <= n; i++) if (!vis[i]) unvis.add(i);

            // Imprimir raíz
            System.out.println(path.get(0));
            // Imprimir camino principal
            for (int i = 1; i < path.size(); i++)
                System.out.println(path.get(i - 1) + " " + path.get(i));
            // Conectar los no visitados
            if (!unvis.isEmpty()) {
                System.out.println("1 " + unvis.get(0));
                for (int i = 1; i < unvis.size(); i++)
                    System.out.println(unvis.get(i - 1) + " " + unvis.get(i));
            }
        }
    }
}