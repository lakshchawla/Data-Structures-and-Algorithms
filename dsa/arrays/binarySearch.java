package arrays;

public class binarySearch {
    public static void main(String[] args) {
        int arr[] = { 5, 6, 11, 16, 22, 29, 32 };

        System.out.println(recursiveBinarySearch(arr, 0, arr.length-1,6));
    }

    static int iterativeBinarySearch(int arr[], int key) {
        int l = 0, h = arr.length - 1;

        while (l <= h) {
            int mid = (l + h) / 2;

            if (arr[mid] == key) return mid;
            else if (key > arr[mid]) h = mid-1;
            else h = mid+1;
        }
        return -1;
    }

    static int recursiveBinarySearch(int arr[], int l, int h, int key){
        if(l > h) return -1;
        
        int m = (l+h)/2;

        if(arr[m] == key) return m;
        if(key > arr[m]) return recursiveBinarySearch(arr, m+1, h, key);
        return recursiveBinarySearch(arr, l, m-1, key);
    }
}
