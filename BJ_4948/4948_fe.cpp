#include <iostream>

using namespace std;

int main() {
	int input[1000], toss=1, max = 0, num = 0, prime_count;
	int i, j;

	for (i = 0; toss!= 0; i++) {
		cin >> toss;
		if (toss != 0) {
			input[i] = toss;
			num++;
			if (input[i] > max) {
				max = input[i];
			}
		}
	}
	
	bool* list=new bool [2*max+1];

	list[1] = false;
	for (i = 2; i <= 2*max; i++) {
		list[i] = true;
	}
	for (i = 2; i * i <= 2*max; i++) {
		if (list[i]) {
			for (j = 2 * i; j <= 2*max; j += i) {
				list[j] = false;
			}
		}
	}
	for (j = 0; j < num; j++) {
		prime_count = 0;
		for (i = input[j] + 1; i <= (2 * input[j]); i++) {
			if (list[i]) {
				prime_count++;
			}
		}
		cout << prime_count << "\n";
	}
	return 0;
}