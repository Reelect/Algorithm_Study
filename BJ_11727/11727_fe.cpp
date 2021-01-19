#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int n;
	cin >> n;
	int* DP = new int[n + 1];

	DP[1] = 1;
	DP[2] = 3;
	DP[3] = 5;

	for (i = 4; i <= n; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
	}

	cout << DP[n];

	return 0;
}