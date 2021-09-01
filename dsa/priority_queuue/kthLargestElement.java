package priority_queuue;

import java.util.PriorityQueue;

public class kthLargestElement {
    public static void main(String[] args) {
        int arr[] = { 20, 10, 60, 30, 50, 40 };

        findKthLargestElement(arr, 3);
    }

    public static void findKthLargestElement(int[] arr, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 0; i < k; i++)
            pq.add(arr[i]);

        for (int i = k; i < arr.length; i++) {
            if (pq.peek() < arr[i]) {
                pq.poll();
                pq.add(arr[i]);
            }
        }
        System.out.println(pq.peek());
    }
}
