import java.util.Scanner;

public class class1{
	public static void main(String args[]){
		System.out.println("ax2 + bx + c = 0");
		System.out.println("Enter values of a, b and c respectively:");

		Scanner sc = new Scanner(System.in);
		int a, b, c;
		System.out.print("a: ");
		a = sc.nextInt();

		System.out.print("b: ");
		b = sc.nextInt();

		System.out.print("c: ");
		c = sc.nextInt();

		checkRoots(a, b, c);

	}

	static void checkRoots(int a, int b, int c){
		int roots = (b*b) - (4*a*c);

		if (roots < 0) {
			System.out.println("The equation entered has no real roots.");
		}

		else if (roots == 0){
			System.out.println("The equation entered has one real root.");
		}

		else{
			System.out.println("The equation entered has two real roots.");
		}
	}
}
