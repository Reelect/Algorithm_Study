#include <iostream>

using namespace std;

int main() {
	int input;
	int max = 0;
	int prime_count=0;
	int i, j, k;

	cin >> input;
	int* input_arr = new int[input];
	
	for (i = 0; i < input; i++) {
		cin >> input_arr[i];
		if (max < input_arr[i]) {
			max = input_arr[i];
		}
	}

	bool* list = new bool[max - 1];

	list[1] = false;
	for (i = 2; i <= max-2; i++) {
		list[i] = true;
	}
	for (i = 2; i * i <= max - 2; i++) {
		if (list[i]) {
			for (j = 2 * i; j <= max - 2; j += i) {
				list[j] = false;
				prime_count++;
			}
		}
	}
	prime_count = (max - 3) - prime_count;

	int* prime = new int[prime_count];
	
	j = 0;
	for (i = 2; i <= max - 2; i++) {
		if (list[i]) {
			prime[j] = i;
			j++;
		}
	}

	int max_prime_index;
	int gap;
	int a=0, b=0, c=0, d=0;

	for (i = 0; i < input; i++) {
		gap = 10000;
		j = 0;
		while (input_arr[i] > prime[j]) {
			max_prime_index = j;
			j++;
		}
		for (j = 0; j <= max_prime_index; j++) {
			a = prime[j];
			for (k = j; k <= max_prime_index;k++ ) {
				b = prime[k];
				if ((input_arr[i] - a == b) && (gap > (b - a))) {
					c = a;
					d = b;
				}
			}
		}
		cout << c << " " << d << "\n";
	}
	return 0;
}
