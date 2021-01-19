#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int input;
	
	cin >> input;

	int* seq = new int[input + 1];
	int* DP = new int[input + 1]; //최대 sequence 길이

	for (i = 1; i <= input; i++) {
		cin >> seq[i];
	}

	int result = 0;

	for (i = 1; i <= input; i++) { 
		DP[i] = 1;
		for (j = 1; j < i; j++) {
			if (seq[i] > seq[j]) {
				DP[i] = (DP[i] > DP[j] + 1) ? DP[i] : (DP[j] + 1);
			}
		}
		result = (result > DP[i]) ? result : DP[i];
	}

	cout << result;
	
	delete[] seq;
	delete[] DP;

	return 0;
}


/*
for (i = 2; i <= input; i++) {
		smaller_max = 0;
		for (j = 1; j < i; j++) {
			if (seq[j]<seq[i]) {
				if (DP[j] > smaller_max) {
					smaller_max = DP[j];
				}
			}
		}
		DP[i] = smaller_max + 1;
		if (DP[i] > max) {
			max = DP[i];
		}
	}

	cout << max;
*/