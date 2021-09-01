package arrays;

public class binarySearchInfinite {
    public static void main(String args[]) {
        int arr[] = { 1, 3, 5, 8, 11, 25, 34, 36, 42, 47, 49, 51, 53, 56, 58, 59, 61, 68, 69, 75, 84, 96 };

        System.out.println(searchInfinite(arr, 34));
    }

    static int bruteForces(int[] arr, int key) {
        int i = 0;
        while (arr[i] <= key) {
            if (arr[i] == key)
                return i;

            i++;
        }
        System.out.println(i);
        return -1;
    }

    static int recursiveBinarySearch(int arr[], int l, int h, int key){
        if(l > h) return -1;
        
        int m = (l+h)/2;

        if(arr[m] == key) return m;
        if(key > arr[m]) return recursiveBinarySearch(arr, m+1, h, key);
        return recursiveBinarySearch(arr, l, m-1, key);
    }

    static int searchInfinite(int arr[], int key){
        int low = 0, high = 1;

        while (arr[high] < key) {
            low = high;
            high *= 2;
        }
        return recursiveBinarySearch(arr, low, high, key);
    }
}
