package linked_list;

import javax.xml.crypto.Data;

public class delete {
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static Node head;

    public static void traverseList() {
        Node currNode = head;

        while (currNode != null) {
            System.out.print(currNode.data + "  ");
            currNode = currNode.next;
        }
    }

    public static void deleteNodeWith(int key) {
        Node tmp = head;

        if (head.data == key) {
            head = head.next;
            return;
        }

        while (tmp.next != null && tmp.next.data != key) tmp = tmp.next;
        tmp.next = tmp.next.next;
    }

    public static void deleteNodeAt(int postition) {
        Node tmp = head;

        if (postition == 1) {
            head = head.next;
            return;
        }

        int i = 0;
        while (tmp.next != null && i < postition-1) {
            tmp = tmp.next;
            i++;
        }

        tmp.next = tmp.next.next;
    }

    public static void append(int value) {
        if (head == null) {
            head = new Node(value);
            return;
        }

        Node newNode = new Node(value);
        Node curNode = head;

        while (curNode.next != null)
            curNode = curNode.next;
        curNode.next = newNode;
    }

    public static void main(String[] args) {

        append(10);
        append(20);
        append(25);
        append(30);

        deleteNodeAt(2);

        traverseList();
    }
}
