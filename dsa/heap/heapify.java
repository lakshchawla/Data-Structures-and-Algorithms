package heap;

public class heapify {
    public static void main(String[] args) {
        int arr[] = {10, 20, 14, 27, 8, 41, 53, 42, 67, 19, 24, 21, 13, 5, 7};

        // buildHeap(arr, arr.length);
        heapifyFunction(arr, arr.length, 0);
        printArray(arr);
    }

    static void heapifyFunction(int arr[], int n, int i){

        int leftChildIndex = (2 * i) + 1, rightChildIndex = (2 * i) + 2, largestChild = i;

        if (leftChildIndex < n && arr[leftChildIndex] > arr[largestChild]) largestChild = leftChildIndex;
        if (rightChildIndex < n && arr[rightChildIndex] > arr[largestChild]) largestChild = rightChildIndex;

        if(largestChild != i){
            swap(arr, largestChild, i);
            heapifyFunction(arr, n, largestChild);
        }
    }

    // static void buildHeap(int arr[], int n){
    //     for (int i = (n/2)-1; i >= 0; i--) heapifyFunction(arr, n, i);
    // }

    static void swap(int arr[], int a, int b) {
        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    static void printArray(int arr[]) {
        for (int j = 0; j < arr.length; j++) System.out.print(arr[j] + "  ");
    }

}
