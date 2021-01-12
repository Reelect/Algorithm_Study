#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, m, k = 0, a = 3, h = 0, q[246912] = { 0, };
	q[2] = 1, q[3] = 1, q[5] = 1;
	scanf("%d", &n);
	while (n != 0) {
		for (int i = 7; i <= 2 * n; i += 2) {
			for (int j = 3; j * j <= i; j++) {
				k = 0;
				if (i % j == 0) {
					k = 1;
					break;
				}
			}
			if (k == 0) {
				q[i] = 1;
			}
		}
		for (int i = n + 1; i <= 2 * n; i++) {
			if (q[i] == 1) {
				h++;
			}
		}
		printf("%d", h);
		h = 0;
		scanf("%d", &n);
	}
}