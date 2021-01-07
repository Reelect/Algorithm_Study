#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n == 1) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			n = n / i;
			printf("%d\n", i);
			i--;
		}
	}
	printf("%d", n);
}