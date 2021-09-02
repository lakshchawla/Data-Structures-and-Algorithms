package stack;

import java.util.Scanner;

public class Reverse{
    public static class Stack{
        int max = 100;
        int top;
        String arr[] = new String[100];

        Stack(){
            top = -1;
        }

        boolean isEmpty(){
            return (top < 0);
        }

        void push(String value){
            if (top >= max - 1) {
                System.out.println("Stack Overflow");    
                return;
            }
            arr[++top] = value;
        }

        void pop(){
            if (top <= -1) {
                System.out.println("Stack Underflow");    
                return;
            }
            top--;
        }

        void printStack(){
            for(int i = top; i > -1; i--) System.out.println(arr[i]);
            System.out.println();
        }
    }

    static Scanner sc = new Scanner(System.in);
        
    public static void main(String[] args) {
        
    }   
}
