package BJ_4948_LJC;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n;
		int i,j, cnt= 0;
		while(true) {
			n = sc.nextInt();
			if(n==0) break;
			else {
				boolean[] test = new boolean[2*n+1];
				for(i=0;i<=2*n;i++) test[i] = true;
				for(i=2;i*i<=2*n;i++) {
					if(test[i]) {
						for(j=2;j*i<=2*n;j++) {
							test[i*j] = false;
							cnt++;
						}
					}
				}
				test[1] = false;
				System.out.println(n-cnt);
				cnt = 0;
			}
		}
	}

}
