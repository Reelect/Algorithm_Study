package BJ_2581_LJC;
import java.util.Scanner;
public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt();
		int i,j, sum = 0, min = M;
		boolean[] a = new boolean[N+1];
		for(i=0;i<=N;i++) a[i] = true;
		for(i=2;i*i<=N;i++) {
			for(j=2;j*i<=N;j++) a[i*j] = false;
		}
		a[1] = false;
		for(i=M;i<=N;i++) {
			if(a[i]) {
				if(sum == 0) min = i;
				sum += i;
			}
		}
		if(sum == 0) System.out.print(-1);
		else {
			System.out.println(sum);
			System.out.print(min);
		}
	}
}
