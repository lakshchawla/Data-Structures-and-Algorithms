package hackerrank.ds;

import java.util.Scanner;

public class arrayRev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        ReverseArray(arr, n);
        printArray(arr);
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
    }

    static void ReverseArray(int[] arr, int n){
        for (int i = 0; i < n/2; i++) swap(arr, i, n-1-i);
    }
}
