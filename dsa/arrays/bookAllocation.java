package arrays;

public class bookAllocation {
    public static void main(String[] args){
        int arr[] = {10,20,5,15,5};

        System.out.println(minPages(arr, 2));
        // System.out.println(mod(-5));
    }

    static int maxOf(int[] arr){
        int maxNum = 0;

        for (int i = 0; i < arr.length; i++) {
            maxNum = Math.max(maxNum, arr[i]);
        }
        return maxNum;
    }

    static int sumOf(int[] arr){
        int sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    static Boolean isFeasible(int[] arr, int k, int res){
        int student = 1, sum = 0;

        for (int i = 0; i < arr.length; i++) {
            if (sum + arr[i] >= res) {
                student++;
                sum = arr[i];
            }
            else sum += arr[i];
        }
        return student<=k;
    }

    static int minPages(int[] arr, int k){
        int min = maxOf(arr);
        int max = sumOf(arr);
        int res = 0;

        while (min <= max) {
            int mid = (max + min)/2;
    
            if(isFeasible(arr, k, mid)){
                res = mid;
                max = mid-1;
            }
            else min = mid + 1; 
        }
        return res;
    }
}
