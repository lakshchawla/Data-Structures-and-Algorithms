package linked_list;

import java.util.*;

public class removeDuplicates_sorted {
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
            System.out.print(currNode.data);
            if(currNode != null && currNode.next != null) System.out.print(" -> ");
            currNode = currNode.next;
        }
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

    public static void removeDuplicates() {
        Node currNode = head;
        int i = 0;
        while (currNode.next != null) {
            if (currNode.data == currNode.next.data) {
                deleteNodeAt(i+1);
                continue;
            }

            i++;
            currNode = currNode.next;
        }
    }

    public static void main(String[] args) {

        append(1);
        append(2);
        append(3);
        append(3);
        append(4);
        append(5);
        append(5);
        append(5);
        append(6);
        append(7);
        append(8);
        append(9);

        removeDuplicates();
        traverseList();
    }    
}
