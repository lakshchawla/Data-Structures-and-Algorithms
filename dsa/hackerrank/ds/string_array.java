package hackerrank.ds;

import java.util.Scanner;

import java.util.*;

public class string_array {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int n1 = sc.nextInt();
        String[] mainArr = new String[n1];
        inputArray(mainArr, n1);
        
        int n2 = sc.nextInt();
        String[] ArrQueries = new String[n2];
        inputArray(ArrQueries, n2);

        Solution(mainArr, ArrQueries);
    }

    public static void inputArray(String[] arr, int n) {
        for (int i = 0; i < n; i++) sc.next();
    }

    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) System.out.println(arr[i]);
    }

    public static void Solution(String[] mainArr, String[] queries) {
        int[] queriesArr = new int[queries.length];
        
        for (int i = 0; i < queries.length; i++) {
            for (int j = 0; j < mainArr.length; j++) {
                if(queries[i] == mainArr[j]) queriesArr[i]++;
            }
        }
        printArray(queriesArr);
    }
}
