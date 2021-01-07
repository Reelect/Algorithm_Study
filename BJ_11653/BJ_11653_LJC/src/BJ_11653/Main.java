package BJ_11653;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt(); 
		int i = 2;
		while(a >= i) { 
			if(a % i == 0) { 
				System.out.println(i); 
				a = a/i; 
			} 
			else i++;  
		}
	}

}//solution1


/* 
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int i, a = sc.nextInt();
		for(i=2;i<Math.sqrt(a)+1;i++) {
			if(a%i == 0) {
				System.out.print(i + "\n");
				a= a/i;
				i=1;
			}
			else continue;
		}
		System.out.print(a);
	}
	//solution 2
}*/
