package heap;

import javax.security.auth.kerberos.KeyTab;

public class delete {
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

        deleteNode(arr, 8, 40);
        printTree(arr);
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

    static int findElement(int[] arr, int key){
        int i = 1;
        
        while (arr[i] != 0) {
            if (arr[i] == key) return i;

            i++;
        }
        return -1;
    }

    static int leftChildIndex(int i){
        return 2*i;
    }
    
    static int rightChildIndex(int i){
        return (2*i)+1;
    }

    static void deleteNode(int[] arr, int n, int node){
        int tmp = arr[n], d = findElement(arr, node), i = d;

        arr[d] = tmp;
        arr[n] = 0;
        n--;

        int grtrChildIndex = leftChildIndex(i);
        if (arr[rightChildIndex(i)] > arr[leftChildIndex(i)]) grtrChildIndex = rightChildIndex(i);

        while (tmp < arr[rightChildIndex(i)] || tmp < arr[leftChildIndex(i)]) {
            swap(arr, i, grtrChildIndex);

            i = grtrChildIndex;
        }
    }
}