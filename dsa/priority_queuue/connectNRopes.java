package priority_queuue;

import java.util.PriorityQueue;

public class connectNRopes {
    public static void main(String[] args) {
        int arr[] = {2,5,4,8,6,9};
        calculateLowCost(arr);
    }

    public static void emptyQueue(PriorityQueue <Integer> pq) {
        while (pq.isEmpty() == false) pq.poll();
    }

    public static void calculateLowCost(int[] arr) {
        int cost = 0, sm1 = 0, sm2 = 0;
        PriorityQueue <Integer> pq = new PriorityQueue<>();
        for (int i = 0; i < arr.length; i++) pq.add(arr[i]);
        
        while (pq.size() != 1) {
            sm1 = pq.peek();
            pq.poll();
            sm2 = pq.peek();
            pq.poll();
            cost += sm1 + sm2;
            pq.add(sm1+sm2);
        }
        System.out.println(cost);
    }
}
