#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int n;
	int max = 0;

	cin >> n;
	int* input = new int[n];

	for (i = 0; i < n; i++) {
		cin >> input[i];
		if (max < input[i]) {
			max = input[i];
		}
	}

	int* DP = new int[max + 1];

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	for (i = 4; i <= max; i++) {
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
	}

	for (i = 0; i < n; i++) {
		cout << DP[input[i]] << "\n";
	}

	return 0;
}
