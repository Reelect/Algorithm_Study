package BJ_1929_LJC;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt();
		for(int i=M; i<=N ; i++) {
			if(testprime(i)) {
				System.out.println(i);
			}
			else continue;
		}
	}
	
	public static boolean testprime(int a) {
		if(a == 1) return false;
		boolean flag = true;
		for(int i = 2; i*i<=a;i++) {
			if(a%i == 0) {
				flag = false;
			}
			else {
				continue;
			}
		}
		if(flag) return true;
		else return false;
	}
}
