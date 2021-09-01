import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        // System.out.println(getSum(65, 12));
        System.out.println(fastPower(5, 4));
    }

    static int fastPower(int a, int b) {

        int res = 1;
        
        while(b>0)
        {
            if ((b & 1) != 0) {
                res *= a;
            }
            
            a *= a;
            b = b>>1;
        }

        return res;
    }
}