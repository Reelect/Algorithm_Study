package BJ_9020_LJC;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int i,j,k;
		for(k=0;k<T;k++) {
			int N = sc.nextInt();
			boolean[] a = new boolean[N+1];
			for(i=0;i<=N;i++) a[i] = true;
			for(i=2;i*i<=N;i++) {
				if(a[i]) {
					for(j=2;j*i<=N;j++) a[i*j] = false;
				}	
			}
			a[1] = false;
			for(i=N/2;i>0;i--) {
				if(a[i] && a[N-i]) {
					System.out.println(i+ " " + (N-i));
					break;
				}
				else continue;
			}
		}
	}
}

