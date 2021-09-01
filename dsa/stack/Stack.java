package stack;
import java.util.*;

public class Stack{
    static int maxElements = 100;
    static int top;
    static int arr[] = new int[maxElements];
    
    boolean isEmpty(){
        return (top < 0);
    }
    
    Stack(){
        top = -1;
    }

    static void push(int x){
        if(top >= (maxElements - 1)) throw new ArithmeticException("Stack Overflow");
        
        arr[++top] = x;
        System.out.println(x + " pushed into stack");
    }

    static int peek(){
        if (top < 0) throw new ArithmeticException("Stack Underflow");
        return arr[top];
    }

    static void pop(){
        if (top < 0) throw new ArithmeticException("Stack Underflow");

        int x = arr[top--];
        System.out.println("\nElement popped.");
        return;
    }

    static void printStack(){
        for(int i = top;i>-1;i--) System.out.print(" "+ arr[i]);
        System.out.println();
    }

    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(5);
        s.push(6);
        s.push(56);
        s.push(9);
        s.push(7);
        s.push(10);

        pop();
        pop();

        printStack();
    }
}