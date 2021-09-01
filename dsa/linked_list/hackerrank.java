package linked_list;

import java.io.*;
import java.util.*;
import java.util.stream.IntStream;

public class hackerrank {
    static class Node{
        int data;
        Node next;
        
        Node(int value){
            this.data = value;
            this.next = null;
        }
    }
    static Node head1, head2;

    public static void traverseList() {
        Node currNode = head1;

        while (currNode != null) {
            System.out.print(currNode.data + "  ");
            currNode = currNode.next;
        }

        currNode = head2;

        while (currNode != null) {
            System.out.print(currNode.data + "  ");
            currNode = currNode.next;
        }
    }
    
    public static void append(Node head, int value) {
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

    
    static Scanner sc = new Scanner(System.in);
    
    public static void main(String[] args) {
        int tests = sc.nextInt();

        IntStream.range(0, tests).forEach(testsItr -> {
            
            int size1 = sc.nextInt();
            for (int i = 0; i < size1; i++) {
                int value = sc.nextInt();
                append(head1, value);
            }

            int size2 = sc.nextInt();
            for (int i = 0; i < size2; i++) {
                int value = sc.nextInt();
                append(head2, value);
            }

            traverseList();
        });

        
    }
}
