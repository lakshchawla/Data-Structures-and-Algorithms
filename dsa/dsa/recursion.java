package dsa;
public class recursion{

    public static void main(String args[]){
        recurFunc(5);
    }

    static void recurFunc(int n){
        
        if (n == 0) {
            return;
        }
        
        System.out.println("Hello World");
        
        recurFunc(n-1);
    }

}