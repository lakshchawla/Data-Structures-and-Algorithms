package heap;

public class insert {
    public static void main(String args[]) {
        int arr[] = new int[50];
        // arr[] = {-1,50,40,45,30,20,35,10};

        arr[0] = -1;
        arr[1] = 50;
        arr[2] = 40;
        arr[3] = 45;
        arr[4] = 30;
        arr[5] = 20;
        arr[6] = 25;
        arr[7] = 35;
        arr[8] = 10;

        insertNode(arr, 8, 60);
    }

    static void swap(int arr[], int a, int b) {
        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    static void printTree(int arr[]) {
        int i = 1;

        while (arr[i] != 0) {
            System.out.print(arr[i] + ", ");

            i++;
        }
    }

    static void insertNode(int[] arr, int n, int node) {
        n += 1;
        arr[n] = node;

        int i = n;
        while (i > 1 && arr[i] > arr[i / 2]) {
            swap(arr, i, i / 2);

            i = i / 2;
        }

        printTree(arr);
    }
}
