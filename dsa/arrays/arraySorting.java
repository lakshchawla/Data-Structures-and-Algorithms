package arrays;

import javax.naming.ldap.SortKey;

public class arraySorting {

    static void swap(int arr[], int a, int b) {
        int tmp = arr[a]; 
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.print("\n");
    }

    /*static int[] insertAtHead(int arr[], int item){
    try {
    for (int i = arr.length-2; i > -1; i--) {
    arr[i+1] = arr[i];
    }
    arr[0] = item;
    } catch (Exception e) {
    System.err.println("Oops! Something went wrong, check the array size.");
    }
    return arr;
    }

    static int[] insertAtTail(int arr[], int item){
    try {
    for (int i = arr.length-1; i < -1; i++) {
    arr[i]
    }
    } catch (Exception e) {
    System.err.println("Oops! Something went wrong, check the array size.");
    }
    return arr;
    }*/

    public static void main(String[] args) {
        int arr[] = { 4, 1,9,2,3,6 };

        // rightShift(arr, 0);
        // arr[0] = 3;
        // printArray(arr);

        selectionSort(arr);
    }

    static void bubleSort(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {

                if (arr[j] > arr[j + 1]) {
                    swap(arr, j, j + 1);
                }
            }
        }

        printArray(arr);
    }

    static void insertionSort(int arr[]) {
        for (int i = 1; i < arr.length; i++) {
            int tmp = arr[i];

            int j = i-1;
            while (j > -1 && arr[j] > tmp) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = tmp;
        }
        printArray(arr);
    }
    
    static void selectionSort(int arr[]){
        
        for (int i = 0; i < arr.length-1; i++) {
            int smallElement = i;
 
            //Loop to find the smallest element.
            for (int j = i+1; j < arr.length; j++) {
                if (arr[j] < arr[smallElement]) {
                    smallElement = j;
                }
            }
            
            if (smallElement != i) {
                swap(arr, smallElement, i);
            }
        }
        printArray(arr);
    }

    static int partition(int arr[], int l, int h) {
        int pivot = arr[h];

        int i = (l - 1);
     
        for(int j = l; j < h; j++)
        {
             
            if (arr[j] < pivot)
            {
                 
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, h);
        return (i + 1);
    }

    static void quickSorting(int arr[], int l, int h) {
        if (l < h)
        {
             
            int pivot = partition(arr, l, h);
     
            quickSorting(arr, l, pivot - 1);
            quickSorting(arr, pivot + 1, h);
        }
    }
}
