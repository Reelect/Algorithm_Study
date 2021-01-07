#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == j) {
				printf("%d\n", i);
			}
			else if (i % j == 0) {
				break;
			}
		}
	}
}