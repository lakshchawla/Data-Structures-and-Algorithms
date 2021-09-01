package arrays;

public class stocks {
    public static void main(String[] args){
        int arr[] = {3,5,1,7,4,9,3};

        CalcManyStock(arr);
    }

    static int calMax(int num1, int num2){
        if (num1 > num2) {
            return num1;
        }
        return num2;
    }

    static void bruteForces(int arr[]){
        int currDiff = 0;
        int maxDiff = 0;

        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                currDiff = arr[j] - arr[i];

                maxDiff = calMax(maxDiff, currDiff);
            }
        }

        System.out.println(maxDiff);
    }

    static void CalcStock(int arr[]){
        int minSoFar = arr[0], buyIndex = 0;
        int maxProfit = 0, sellIndex = 0;

        for (int i = 0; i < arr.length; i++) {
            if (minSoFar > arr[i]) {
                minSoFar = arr[i];
                buyIndex = i+1;
            }
            int currProfit = arr[i] - minSoFar;
            if (maxProfit < currProfit) {
                maxProfit = currProfit;
                sellIndex = i+1;
            }
        }
        System.out.println("To obtain maximum profit, buy stock on Day " + buyIndex + ", and sell on Day " + sellIndex);
    }

    static void CalcManyStock(int arr[]){
        int profit = 0;

        for (int i = 1; i < arr.length; i++) {
            if(arr[i-1] < arr[i]){
                profit += arr[i] - arr[i-1];
            }
        }

        System.out.println(profit);
    }
}
