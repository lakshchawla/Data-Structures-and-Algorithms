package hackerrank.ds;

import java.util.Scanner;

public class arrRotation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int d = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        rotateArray(arr, n, d);
        printArray(arr, n);
    }

    static void printArray(int[] arr, int n){
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    static void rotateArray(int[] arr, int n, int d) {
        for (int i = 0; i < d; i++) {
            int tmp = arr[0];

            for (int j = 0; j < n-1; j++) {
                arr[j] = arr[j+1];
            }
            arr[n-1] = tmp;

        }
    }
}
