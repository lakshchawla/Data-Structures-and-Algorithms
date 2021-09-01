public class app {
    public static void main(String args[]) {
        System.out.println(RecursiveSum(10));
    }

    static int RecursiveSum(int num) {
        int sum = sum + num;

        if (num == 0) {
            return sum;
        }


        return RecursiveSum(num-1);
    }
}
