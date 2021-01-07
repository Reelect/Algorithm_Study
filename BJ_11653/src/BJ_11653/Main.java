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

}
