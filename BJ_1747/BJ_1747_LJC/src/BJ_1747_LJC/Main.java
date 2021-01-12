package BJ_1747_LJC;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int stage = 1;
		int max = 1003002;
		int length;
		int tmp;
		Loop1:
		while(true) {
			tmp = 2*stage*n;
			if(tmp >= max) length = max;
			else length = tmp;
			boolean[] testprime = new boolean[length];
			for(int i=0;i<length;i++) testprime[i] = true;
			testprime[0] = false;
			testprime[1] = false;
			testprime[2] = true;
			for(int i=2;i*i<length;i++) {
				if(testprime[i]) {
					for(int j=2;j*i<length;j++) {
						testprime[i*j] = false;
					}
				}
			}
			
			if(stage == 1) {
				for(int i = n; i<length;i++) {
					if(testprime[i]&&isPal(i)) {
						System.out.print(i);
						break Loop1;
					}
				}
			}
			else {
				for(int i = 2*(stage-1)*n; i<length;i++) {
					if(testprime[i]&&isPal(i)) {
						System.out.print(i);
						break Loop1;
					}
				}
			}
			stage++;
		}
		
	}
	
	public static boolean isPal(int n) {
		String n_tmp = Integer.toString(n);
		for(int i = 0;i<(n_tmp.length()+1)/2;i++) {
			if(n_tmp.charAt(i) !=n_tmp.charAt(n_tmp.length()-1-i)) return false;
			else continue;
		}
		return true;
	}
	
	

}