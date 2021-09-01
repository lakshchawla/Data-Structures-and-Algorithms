package linked_list;

import java.util.*;

public class pallindrome {
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static Node head1;
    static Node head2;

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

    public static void append(int value) {
        if (head1 == null) {
            head1 = new Node(value);
            return;
        }

        Node newNode = new Node(value);
        Node curNode = head1;

        while (curNode.next != null)
            curNode = curNode.next;
        curNode.next = newNode;
    }

    public static Node findMid() {
        Node p = head1;
        Node q = head1;

        while (q != null && q.next != null) {
            q = q.next.next;
            p = p.next;
        }
        head2 = p.next;
        return p;
    }

    public static void reversePartition() {
        Node pre = null, curr = head1, next = null, h = findMid();
        while (curr != h) {
            next = curr.next;
            curr.next = pre;
            pre = curr;
            curr = next;
        }
        head1 = pre;
    }

    public static boolean checkPallindrome() {
        reversePartition();
        Node list1 = head1, list2 = head2;

        while (list1 != null && list2 != null) {
            if (list1.data != list2.data) return false;
            
            list1 = list1.next;
            list2 = list2.next;
        }
        return true;
    }

    public static void main(String[] args) {

        append(1);
        append(2);
        append(3);
        append(4);
        append(5);
        append(4);
        append(3);
        append(2);
        append(1);

        System.out.println(checkPallindrome());
    }
}
