#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int n;
	cin >> n;
	long long* DP1 = new long long[n + 1];
	long long* DP2 = new long long[n + 1];

	DP1[1] = 0;
	DP2[1] = 1;

	DP1[2] = 1;
	DP2[2] = 0;

	for (i = 3; i <= n; i++) {
		DP1[i] = DP1[i - 2] * 2 + DP2[i - 2];
		DP2[i] = DP1[i - 2] + DP2[i - 2];
	}

	cout << DP1[n]+DP2[n];

	return 0;
}
