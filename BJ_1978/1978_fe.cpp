#include <iostream>

using namespace std;

int main() {
	int input_num, num = 0, max = 0, min = 1000;
	int i, j;

	cin >> input_num;

	int* input_arr = new int[input_num];

	for (i = 0; i < input_num; i++) {
		cin >> input_arr[i];
		if (input_arr[i] > max) {
			max = input_arr[i];
		}
		if (input_arr[i] < min) {
			min = input_arr[i];
		}
	}

	int* ast = new int[max + 1];
	ast[1] = false;
	for (i = 2; i <= max; i++) {
		ast[i] = true;
	}
	for (i = 2; i * i <= max; i++) {
		if (ast[i]) {
			for (j = 2 * i; j <= max; j += i) {
				ast[j] = false;
			}
		}
	}
	for (i = 0; i < input_num; i++) {
		if (ast[input_arr[i]]) {
			num++;
		}
	}
	cout << num;

	delete[]ast;
	delete[]input_arr;
	return 0;
}