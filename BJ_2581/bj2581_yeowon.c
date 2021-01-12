#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int n, m, minp, k = 0, a = 3, h = 0, tot = 0, p[1300] = { 2, 3, 5, }, q[10000] = { 0, };
	q[2] = 1, q[3] = 1, q[5] = 1;
	scanf("%d %d", &m, &n);
	for (int i = 7; i <= n; i += 2) {  // 소수 배열, 자연수 중 소수 표시 배열을 만들자
		for (int j = 3; j * j <= i; j++) {
			k = 0;
			if (i % j == 0) {
				k = 1;
				break;
			}
		}
		if (k == 0) {
			p[a] = i;
			q[i] = 1;
			a++;
		}
	}
	for (int i = m; i <= n; i++) {
		if (q[i] == 1) {
			if (tot == 0) {
				minp = i;
			}
			tot += i;
		}
	}
	if (tot == 0) {
		printf("-1");
	}
	else {
		printf("%d", tot);
		printf("\n%d", minp);
	}
}