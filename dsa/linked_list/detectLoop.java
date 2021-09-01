package linked_list;

import java.util.*;

public class detectLoop {
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

    public static void findLoop() {
        Node currNode = head;
        HashSet<Node> set = new HashSet<Node>();

        while (currNode != null) {
            if(set.contains(currNode)) break;

        set.add(currNode);
        currNode = currNode.next;
        }
        
        System.out.println(set.);
    }

    public static void main(String[] args) {

        append(10);
        append(20);
        append(30);
        append(40);
        traverseList();

        System.out.println();
        head.next.next.next.next = head;
        findLoop();
    }
}
