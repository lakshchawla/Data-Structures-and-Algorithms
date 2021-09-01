package arrays;

public class quickSort {

    public static void main(String[] args) {
        int arr[] = { 7, 1, 5, 2, 3, 6, 8, 4 };

        quickSorting(arr, 0, arr.length-1);
        printArray(arr);
        

        // System.out.println(partition(arr, 0, arr.length));
    }

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
