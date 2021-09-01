package arrays;

public class insertionSort {
    
    static int[] insertAtHead(int arr[], int item){
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

    static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.print("\n");
    }

    public static void main(String[] args){
        int arr[] = {4,3,7,1,5};

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < arr[0]) {
                arr = insertAtHead(arr, arr[i]);
            }
        }

        printArray(arr);
    }
}
