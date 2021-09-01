package dsa;
public class powerRecur {
    public static void main(String args[]){
        System.out.println(powerFunc(3, 4));

    }

    static int powerFunc(int a, int b){
        if (b == 1) {
            return a;
        }

        return powerFunc(a, b-1) * a;
    }
}
