package linked_list;

import java.util.*;
public class lengthOfLoop {
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

    public static void findLength() {
        Node p = head.next, q = head;

        while (p != q) {
            p = p.next.next;
            q = q.next;
        }

        int n = 2;
        q = q.next;
        while(p != q){
            q = q.next;
            n++;
        }

        System.out.println(n);
    }

    public static void main(String[] args) {

        append(10);
        append(20);
        append(30);
        append(40);
        append(50);
        append(60);
        append(70);
        append(80);
        append(90);
        // traverseList();
        
        head.next.next.next.next.next.next.next.next = head.next.next.next;
        findLength();
    }
}
