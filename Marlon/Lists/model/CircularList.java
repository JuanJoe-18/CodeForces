package Marlon.Lists.model;

public class CircularList<Gen> {
    private Node head;
    private Node tail;

    public CircularList() {
        this.head = null;
        this.tail = null;
    }

    public void add(Gen data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
            tail.setNext(head);
            head.setPrev(tail);
        } else {
            tail.setNext(newNode);
            newNode.setPrev(tail);
            newNode.setNext(head);
            head.setPrev(newNode);
            tail = newNode;
        }
    }

    public boolean isEmpty() {
        return head == null;
    }

    public void printList() {
        if (head == null) return;
        Node current = head;
        do {
            System.out.println(current.getData());
            current = current.getNext();
        } while (current != head);
    }

    public void delete(Gen data) {
        if (head == null) return;
        Node current = head;
        do {
            if (current.getData().equals(data)) {
                if (current == head) {
                    head = current.getNext();
                    tail.setNext(head);
                    head.setPrev(tail);
                } else if (current == tail) {
                    tail = current.getPrev();
                    tail.setNext(head);
                    head.setPrev(tail);
                } else {
                    current.getPrev().setNext(current.getNext());
                    current.getNext().setPrev(current.getPrev());
                }
                return;
            }
            current = current.getNext();
        } while (current != head);
    }

    public boolean search(Gen data) {
        if (head == null) return false;
        Node current = head;
        do {
            if (current.getData().equals(data)) {
                return true;
            }
            current = current.getNext();
        } while (current != head);
        return false;
    }
}