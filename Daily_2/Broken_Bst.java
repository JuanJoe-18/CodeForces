package Daily_2;

import java.util.*;
public class Broken_Bst {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        Node[] nodes = new Node[n];
        int[][] hijos = new int[n][2];

        for (int i = 0; i < n; i++) {
            int v = rd.nextInt();
            int l = rd.nextInt();
            int r = rd.nextInt();
            nodes[i] = new Node(v);
            hijos[i][0] = (l == -1) ? -1 : l - 1;
            hijos[i][1] = (r == -1) ? -1 : r - 1;
        }

        int[] esHijo = new int[n];
        for (int i = 0; i < n; i++) {
            if (hijos[i][0] != -1) esHijo[hijos[i][0]] = 1;
            if (hijos[i][1] != -1) esHijo[hijos[i][1]] = 1;
        }

        int rootIndex = -1;
        for (int i = 0; i < n; i++) {
            if (esHijo[i] == 0) {
                rootIndex = i;
                break;
            }
        }

        Node root = nodes[rootIndex];
        for (int i = 0; i < n; i++) {
            if (hijos[i][0] != -1) nodes[i].left = nodes[hijos[i][0]];
            if (hijos[i][1] != -1) nodes[i].right = nodes[hijos[i][1]];
        }

        Set<Integer> encontrados = new HashSet<>();
        dfs(root, Long.MIN_VALUE, Long.MAX_VALUE, encontrados);

        int count = 0;
        for (Node node : nodes) {
            if (!encontrados.contains(node.value)) {
                count++;
            }
        }
        System.out.println(count);
    }

    static void dfs(Node node, long min, long max, Set<Integer> encontrados) {
        if (node == null) return;
        if (node.value > min && node.value < max) {
            encontrados.add(node.value);
        }
        dfs(node.left, min, Math.min(max, node.value), encontrados);
        dfs(node.right, Math.max(min, node.value), max, encontrados);
    }
}

class Node {
    int value;
    Node left, right;

    Node(int x) {
        value = x;
    }
}