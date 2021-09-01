package linked_list;

import java.util.*;

public class reverse {
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

    public static void reverseList() {
        Node pre = null, curr = head, next = null;
        while (curr != null) {
            next = curr.next;
            curr.next = pre;
            pre = curr;
            curr = next;
        }
        head = pre;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i = 0; i < n; i++){
            int tmp = sc.nextInt();
            append(tmp);
        }

        reverseList();

        traverseList();
    }
}
