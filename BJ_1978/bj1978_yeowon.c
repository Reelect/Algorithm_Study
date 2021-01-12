#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int n, k, t = 0, ba[100] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ba[i]);
	}
	for (int i = 0; i < n; i++) {
		k = 0;
		if (ba[i] == 1) {
			k = 1;
		}
		for (int j = 2; j * j <= ba[i]; j++) {
			k = 0;
			if (ba[i] % j == 0) {
				k = 1;
				break;
			}
		}
		if (k == 0) {
			t++;
		}
	}
	printf("%d", t);
}