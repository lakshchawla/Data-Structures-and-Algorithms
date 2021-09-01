package linked_list;

public class nFromEnd {
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

        while (tmp.next != null && tmp.next.data != key)
            tmp = tmp.next;
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

    public static void findNode(int n) {
        Node mainPtr = head, refPtr = head;
        int count = 0;

        if (head != null) {

            while (count < n) {
                if (refPtr == null) {
                    System.out.println("N not valid");
                    return;
                }
                refPtr = refPtr.next;
                n++;
            }

            if (refPtr == null) {
                System.out.println("Element: " + head.data);

            } else {
                while (refPtr != null) {
                    refPtr = refPtr.next;
                    mainPtr = mainPtr.next;
                }
                System.out.println("Element: " + mainPtr.data);
            }
        }

    }

    public static void main(String[] args) {

        append(10);
        append(25);
        append(95);
        append(30);
        append(45);
        append(5);
        append(60);
        append(71);

        findNode(5);
    }
}
