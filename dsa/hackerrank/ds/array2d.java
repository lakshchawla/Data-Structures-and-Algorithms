package hackerrank.ds;

import java.util.Scanner;

public class array2d {
    public static void main(String[] args){
        int[][] arr = new int[6][6];

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int maxSum = Integer.MIN_VALUE, finalI = 0, finalJ = 0;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                maxSum = Math.max(calculateSum(arr, i, j), maxSum);
            }
        }

        System.out.println(maxSum);
    }

    static int calculateSum(int[][] arr, int i, int j){
        int sum = arr[i+0][j+0] + arr[i+0][j+1] + arr[i+0][j+2] + arr[i+1][j+1] + arr[i+2][j+0] + arr[i+2][j+1] + arr[i+2][j+2];

        return sum;
    }

}
