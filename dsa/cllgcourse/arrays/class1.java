package cllgcourse.arrays;

import java.util.Scanner;

public class class1 {
    static Scanner sc = new Scanner(System.in);

    public static void main(String args[]) {
        int arr[] = new int[10];

        startProgram(arr);
    }

    static void startProgram(int[] arr) {
        int ans;

        System.out.println("\n\n 1. Read the elements of the array.");
        System.out.println(" 2. Insert a new element in the middle of the array.");
        System.out.println(" 3. Delete the first element of the array.");
        System.out.println(" 4. Find the location of last element.");
        System.out.println("-1. Terminate");

        do {
            System.out.print("\nEnter function: ");
            ans = sc.nextInt();

            switch (ans) {
                case 1:
                    traverseArray(arr);
                    break;

                case 2:
                    insertElement(arr);
                    break;

                case 3:
                    deleteFirstElement(arr);
                    break;

                case 4:
                    findLastElement(arr);
                    break;

                case -1:
                    break;
            }
        } while (ans != -1);
    }

    static void traverseArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
        System.out.println();
    }

    static void insertElement(int[] arr) {
        System.out.print("\nEnter Element: ");
        int node = sc.nextInt();

        System.out.print("Enter position: ");
        int i = sc.nextInt();

        arr[i] = node;
        System.out.println("\nElement entered successfully");
    }

    static void deleteFirstElement(int[] arr) {
        arr[0] = 0;
        System.out.println("\nElement deleted successfully");
    }

    static void findLastElement(int[] arr) {
        try {
            int i = arr.length - 1;
            while (arr[i] == 0){
                i--;
            }
                
            System.out.println("\nLast element is at index " + i);

        } catch (Exception e) {
            System.err.println("Empty array, last index cannot be specified.");
        }
    }
}
