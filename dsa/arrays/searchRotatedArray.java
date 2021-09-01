package arrays;

import javax.xml.crypto.dsig.keyinfo.RetrievalMethod;

public class searchRotatedArray {
    public static void main(String[] args) {
        int arr[] = { 120, 130, 40, 50, 60, 70, 80, 90, 100, 110 };

        ;System.out.println(searchElement(arr, 40));

    }

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.print("\n");
    }

    static int searchElement(int[] arr, int key){
        int l = 0, h = (arr.length -1);

        while (l <= h) {
            int m = (l+h)/2;

            if(arr[m] == key) return m;

            if (arr[l] < arr[m]) {
                // Left part sorted
                if (key < arr[m] && key >= arr[l]) h = m -1;
                else l = m+1;
            }

            else{
                // Right part sorted
                if(key > arr[m] && key <= arr[h]) l = m + 1;
                else h = m - 1;
            }
        }
        return -1;
    }
    
}
