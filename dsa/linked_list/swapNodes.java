package linked_list;

public class swapNodes {
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

    public static void swap(int a, int b) {
        Node ptra = head, ptrb = head;
        int i = 0, j = 0;
        while (i < a) {
            ptra = ptra.next;
            i++;
        }
        while (j < b) {
            ptrb = ptrb.next;
            j++;
        }
        
        if(ptrb.next == null){
            ptrb.next = ptra.next;
            ptra.next = null;
        }

        Node tmp = new Node(-1);
        tmp.next = ptra.next;
        ptra.next = ptrb.next;
        ptrb.next = tmp.next;
    }

    public static void main(String[] args) {

        append(10); //0
        append(20); //1
        append(25); //2
        append(30); //3

        swap(20, 30);

        traverseList();
    }
}
