package BJ_1978_LJC;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int a, cnt = 0;
		for(int i=0;i<N;i++) {
			a = sc.nextInt();
			if(testprime(a)) cnt++;
			else continue;
		}
		System.out.print(cnt);
	}
	
	public static boolean testprime(int n) {
		if(n == 1) return false;
		boolean flag = true;
		for(int i=2;i*i<=n; i++) {
			if(n%i==0) flag = false;
			else continue;
		}
		return flag;
	}

}
