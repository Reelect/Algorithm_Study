#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int N;

	cin >> N;
	int* Time = new int[N + 1];
	int* Pay = new int[N + 1];
	int* DP = new int[N + 1];

	for (i = 1; i <= N; i++) {
		cin >> Time[i] >> Pay[i];
	}

	DP[0] = 0;
	for (i = 1; i <= N; i++) {
		DP[i] = 0;
		for (j = 1; j <= N; j++) {
			if (i - (j - 1) >=  Time[j]) {
				DP[i] = (DP[i] > DP[j - 1] + Pay[j]) ? DP[i] : DP[j - 1] + Pay[j];
			}
		}
	}

	cout<<DP[N];

	return 0;
}