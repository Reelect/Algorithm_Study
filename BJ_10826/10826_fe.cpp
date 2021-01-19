#include <iostream>
#include <string>

using namespace std;

int main()
{
	double t;
	int N;
	int i, j;

	cin >> N;

	if (N == 0) {
		cout << 0;
		return 0;
	}

	int** DP = new int* [N + 1];
	for (i = 0; i <= N; i++) {
		DP[i] = new int[2201];
		for (j = 0; j <= 2200; j++) {
			DP[i][j] = 0;
		}
	}

	DP[1][2200] = 1;

	int digit = 1;

	for (i = 2; i <= N; i++) {
		for (j = 2200; j >= (2201 - digit); j--) {
			DP[i][j] = DP[i][j] + DP[i - 1][j] + DP[i - 2][j];
			if (DP[i][j] >= 10) {
				DP[i][j] -= 10;
				DP[i][j - 1]++;
			}
		}
		if (DP[i][2200 - digit] != 0) {
			digit++;
		}
	}

	for (i = 2201 - digit; i <= 2200; i++) {
		cout << DP[N][i];
	}

	return 0;
}






