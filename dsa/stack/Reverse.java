package stack;

import java.util.Scanner;

public class Reverse {
    static class Stack {
        int maxElements = 100;
        int top;
        int arr[] = new int[maxElements];

        boolean isEmpty() {
            return (top < 0);
        }

        Stack() {
            top = -1;
        }

        void push(int x) {
            if (top >= (maxElements - 1))
                System.out.println("Stack Overflow");

            arr[++top] = x;
            System.out.println(x + " pushed into stack");
        }

        int peek() {
            if (top < 0)
                System.out.println("Stack Underflow");
            return arr[top];
        }

        void pop() {
            if (top < 0)
                System.out.println("Stack Underflow");

            int x = arr[top--];
            System.out.println("\nElement popped.");
            return;
        }

        void printStack() {
            for (int i = top; i > -1; i--)
                System.out.print(" " + arr[i]);
            System.out.println();
        }
    }

    static Scanner sc = new Scanner(System.in);

    static void insertAtBottom(Stack st, int ele) {
        if (st.isEmpty()) {
            st.push(ele);
            return;
        }

        int topEle = st.peek();
        st.pop();
        insertAtBottom(st, ele);

        st.push(topEle);
    }

    static void reverse(Stack st) {
        if(st.isEmpty()) return;

        int ele = st.peek();
        st.pop();
        reverse(st);
        insertAtBottom(st, ele);
    }

    public static void main(String[] args) {
        Stack st = new Stack();

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);

        System.out.println("Original: ");
        st.printStack();

        reverse(st);

        System.out.println("Reversed: ");
        st.printStack();
    }
}
