#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int n;
	cin >> n;
	long long * DP = new long long[n + 1];

	if (n == 1) {
		cout << 1;
		return 0;
	}
	else if (n == 2) {
		cout << 2;
		return 0;
	}
	else if (n == 3) {
		cout << 3;
		return 0;
	}

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 3;

	for (i = 4; i <= n; i++) {
		DP[i] = (DP[i - 2] * 2 + DP[i - 3])%10007;
	}

	cout << DP[n];

	return 0;
}