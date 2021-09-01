package priority_queuue;
import java.util.*;

public class main {
    public static void main(String[] args){
        PriorityQueue <Integer> pq = new PriorityQueue<>();

        int arr[] = {2,5,4,8,6,9};
        for (int i = 0; i < arr.length; i++) pq.add(arr[i]);

        
        pq.peek(); // returns 1st element of heap 
        pq.poll(); // removes last element of heap

        System.out.println(pq.peek());
    }
}
