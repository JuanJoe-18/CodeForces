package NEERC2017;

import java.util.*;

public class Recovering_BST {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        int[] numeros = new int[n];
        for (int i = 0; i < n; i++) {
            numeros[i] = rd.nextInt();
        }
        boolean found = false;
        for (int i = 0; i < n; i++) {
            BST arbol = new BST();
            arbol.buildWithRoot(numeros, i);
            if (arbol.check()) {
                found = true;
                break;
            }
        }
        System.out.println(found ? "YES" : "NO");
    }

    static class Nod {
        int value;
        Nod left, right;
        Nod(int x) {
            value = x;
        }
    }

    static class BST {
        Nod root;

        public BST() {
            root = null;
        }

        public void buildWithRoot(int[] arreglo, int raizIdx) {
            int n = arreglo.length;
            root = new Nod(arreglo[raizIdx]);
            root.left = buildSubtree(arreglo, 0, raizIdx - 1);
            root.right = buildSubtree(arreglo, raizIdx + 1, n - 1);
        }

        private Nod buildSubtree(int[] arr, int l, int r) {
            if (l > r) return null;
            int mid = (l + r) / 2;
            Nod node = new Nod(arr[mid]);
            node.left = buildSubtree(arr, l, mid - 1);
            node.right = buildSubtree(arr, mid + 1, r);
            return node;
        }

        public boolean proof(Nod a, Nod b) {
            if (a == null || b == null) return false;
            return gcd(a.value, b.value) > 1;
        }

        private int gcd(int x, int y) {
            if (y == 0) return x;
            return gcd(y, x % y);
        }

        public boolean check() {
            return check(root);
        }

        private boolean check(Nod nodo) {
            if (nodo == null) return true;
            boolean left = check(nodo.left);
            boolean right = check(nodo.right);
            boolean valid = true;
            if (nodo.left != null) valid &= proof(nodo, nodo.left);
            if (nodo.right != null) valid &= proof(nodo, nodo.right);
            return left && right && valid;
        }
    }
}