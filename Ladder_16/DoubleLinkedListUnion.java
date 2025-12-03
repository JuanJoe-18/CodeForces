//package Ladder_16;
//
//import Daily_2.Node;
//
//import java.util.*;
///* Ejemplo simple n = 7
//  (1)  4 7
//  (2)  5 0
//  (3)  0 0
//  (4)  6 1
//  (5)  0 2
//  (6)  0 4
//  (7)  1 0
//
////Solucion(output)
// (1)    4 7
// (2)    5 6
// (3)    0 5
// (4)    6 1
// (5)    3 2
// (6)    2 4
// (7)    1 0
// // Solucion grafica: (3) <-> (5) <-> (2) <-> (6) <-> (4) <-> (1) <-> (7)
//                      * */
//public class DoubleLinkedListUnion {
//    private Map<Integer, Node> nodeMap = new HashMap<>();
//
//    public static void main(String[] args) {
//        Scanner rd = new Scanner(System.in);
//        int n = rd.nextInt();
//        int[][] nodes = new int[n][2];
//        for (int i = 0; i < n; i++) {
//            nodes[i][0] = rd.nextInt();
//            nodes[i][1] = rd.nextInt();
//        }
//        System.out.println(linkedUnion(nodes));
//    }
//
//    public static String linkedUnion(int[][] nodeArray) {
//
//        DoubleList lista = new DoubleList();
//        for (int i = 0; i < nodeArray.length; i++) {
//            int id = i + 1;
//            lista.add(id);
//            nodeMap.put(id, lista.get(id));
//        }
//        for (int i = 0; i < nodeArray.length; i++) {
//            int id = i + 1; // nodo actual
//            int prevId = nodeArray[i][0];
//            int nextId = nodeArray[i][1];
//
//            DoubleList.Node current = nodeMap.get(id);
//
//            if (prevId != 0) {
//                current.setPrev(nodeMap.get(prevId));
//            }
//            if (nextId != 0) {
//                current.setNext(nodeMap.get(nextId));
//            }
//        }
//        return lista.toString();
//    }
//    public static class DoubleList {
//        private Node head;
//        private Node tail;
//
//        private static class Node {
//            private Integer data;
//            private Node next;
//            private Node prev;
//
//            public Node(Integer data) {
//                this.data = data;
//            }
//
//            public Integer getData() {
//                return data;
//            }
//
//            public Node getNext() {
//                return next;
//            }
//
//            public Node getPrev() {
//                return prev;
//            }
//
//            public void setNext(Node next) {
//                this.next = next;
//            }
//
//            public void setPrev(Node prev) {
//                this.prev = prev;
//            }
//        }
//
//        public DoubleList() {
//            this.head = null;
//            this.tail = null;
//        }
//
//        public void add(Integer data) {
//            Node newNode = new Node(data);
//            if (head == null) {
//                head = tail = newNode;
//            } else {
//                tail.setNext(newNode);
//                newNode.setPrev(tail);
//                tail = newNode;
//            }
//        }
//
//        public Node get(Integer data) {
//            Node current = head;
//            while (current != null) {
//                if (current.getData().equals(data)) {
//                    return current;
//                }
//                current = current.getNext();
//            }
//            return null;
//        }
//        public boolean isEmpty() {
//            return head == null;
//        }
//
//        public void printList() {
//            Node current = head;
//            while (current != null) {
//                System.out.println(current.getData());
//                current = current.getNext();
//            }
//        }
//
//
//        @Override
//        public String toString() {
//            StringBuilder sb = new StringBuilder();
//
//            // Solución: recorrer el mapa de nodos en orden
//            for (int i = 1; i <= 7; i++) {
//                Node node = get(i);
//                int prev = (node.getPrev() != null) ? node.getPrev().getData() : 0;
//                int next = (node.getNext() != null) ? node.getNext().getData() : 0;
//                sb.append("(").append(prev).append(" ").append(next).append(")\n");
//            }
//
//            return sb.toString();
//        }
//
//    }
//
//
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
