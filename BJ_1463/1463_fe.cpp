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

	// index�� ������ �� �� input���� ū�� ������ Ȯ���� ������.
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