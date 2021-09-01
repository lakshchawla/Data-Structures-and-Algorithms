package linked_list;

public class intro{
    
    static class Node{
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    public static void traverseList(Node head) {
        Node currNode = head;
        
        while (currNode != null) {
            System.out.print(currNode.data + "  ");
            currNode = currNode.next;
        }
    }

    public static void main(String[] args) {
        Node n1 = new Node(10);
        Node n2 = new Node(20);
        Node n3 = new Node(30);
        
        Node head = n1;
        head.next = n2;
        n2.next = n3;
        n3.next = null;

        traverseList(head);
    }
}