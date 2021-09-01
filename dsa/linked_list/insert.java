package linked_list;

public class insert {

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

    public static void push(int value) {
        Node newNode = new Node(value);
        newNode.next = head;
        head = newNode;
    }

    public static void insert(int tmp, int value) {
        Node newNode = new Node(value);
        
        Node currNode = head;
        while(currNode.data!= tmp) currNode = currNode.next;
        newNode.next = currNode.next;
        currNode.next = newNode;
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

        push(15);
        push(10);
        push(5);

        insert(15, 20);

        append(25);

        traverseList();
    }
}
