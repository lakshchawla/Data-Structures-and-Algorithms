package arrays;

import java.util.Scanner;

public class arrayReversal {
    public static void main(String args[]){
        int n;
        
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        RevArr(arr, n);
    }

    static void swap(int arr[], int a, int b) {
        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        // System.out.print("\n");
    }

    static void RevArr(int[] arr, int n){

        for (int i = 0; i < n/2; i++) {
            swap(arr, i, n-1-i);
        }

        printArray(arr);   
        // return arr;
    }
}
