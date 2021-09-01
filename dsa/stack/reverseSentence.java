package stack;

import java.util.Scanner;

public class reverseSentence {
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
    
    public static void pushToStack(Stack senStack, String sentence) {
        int p = 0;
        for (int i = 0; i < sentence.length(); i++) {

            if(sentence.charAt(i) == ' '){
                senStack.push(sentence.substring(p, i));
                p = i;
            } else if(sentence.charAt(i) != ' ' && i == sentence.length()-1) senStack.push(sentence.substring(p, i+1));
        }
    }
    
    public static void main(String[] args) {
        // String sentence = sc.nextLine();
        String sentence = "I am Lakshay";
        Stack senStack = new Stack();

        // System.out.println(sentence.substring(0,3));
        pushToStack(senStack, sentence);
        
        senStack.printStack();


    }

    
}
