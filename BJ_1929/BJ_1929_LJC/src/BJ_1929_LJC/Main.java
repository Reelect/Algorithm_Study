package BJ_1929_LJC;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	/*
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
	 */
		//sol 1
		
	/*
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
			if(testprime(i)) {
				if(a%i == 0) {
					flag = false;
				}
				else {
					continue;
				}
			}
		}
		if(flag) return true;
		else return false;
	}
}
	 */
		//sol 2
		
	
	 Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt();
		boolean ifprime = true;
		for(int i=M; i<=N ; i++) {
			if(i==1) continue;
			for(int j = 2; j*j<=i; j++) {
				if(i%j == 0) {
					ifprime = false;
				}
				else continue;
			}
			if(ifprime) System.out.println(i);
			ifprime = true;
		}
	}
}
	 
		//sol 3
		
	/*
		Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt();
		boolean[] ifprime = new boolean[N+1];
		for(int i=M;i<N+1;i++) {
			ifprime[i]=true;
		}
		for(int j = 2;j*j<N;j++) {
			for(int i = M; i<N+1;i++) {
				if(i%j == 0) {
					ifprime[i] = false;
					ifprime[j] = true;
				}
				else continue;
			}
		}
		ifprime[1] = false;
		for(int i=M;i<N+1;i++) {
			if(ifprime[i]) {
				System.out.println(i);
			}
		}	
	}
}*/	
		//sol 4
	