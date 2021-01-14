#include <iostream>

using namespace std;

int main()
{
	int i;
	int input;

	cin >> input;

	int* DP = new int[input+1];
	
	DP[1] = 0;
	for (i = 2; i <= input; i++) {
		DP[i] = input;
	}

	// index에 연산을 한 게 input보다 큰지 작은지 확인을 시켜줌.
	for (i = 1; i <= input; i++) {
		if ((i+1<=input)&&(DP[i] + 1 < DP[i + 1])) {
			DP[i + 1] = DP[i] + 1;
		}
		if ((2*i<=input)&&(DP[i] + 1 < DP[2 * i])) {
			DP[2 * i] = DP[i] + 1;
		}
		if ((3*i<=input)&&(DP[i] + 1 < DP[3 * i])) {
			DP[3 * i] = DP[i] + 1;
		}
	}
	cout << DP[input];
	return 0;
}