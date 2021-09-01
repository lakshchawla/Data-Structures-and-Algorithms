package arrays;

public class maxSumSubArray {
    public static void main(String[] args) {
        int arr[] = { -10 , -4, -6, -8, -4 };

        System.out.println(kadanesAlgo(arr));

    }

    static int kadanesAlgo(int arr[]) {
        int currSum = 0;
        int maxSum = -2147483648;

        for (int i = 0; i < arr.length; i++) {
            currSum += arr[i];

            if (maxSum < currSum) {
                maxSum = currSum;
            }

            if (currSum < 0) {
                currSum = 0;
            }

        }
        return maxSum;
    }
}
