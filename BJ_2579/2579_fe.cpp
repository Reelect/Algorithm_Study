#include  <iostream>

using namespace std;

int main()
{
	int i, j;
	int stair_num;
	cin >> stair_num;

	int* stair = new int[stair_num+1];

	for (i = 1; i <= stair_num ; i++)
	{
		cin >> stair[i];
	}

	int* up_one = new int[stair_num+1];
	int* up_twice = new int[stair_num + 1];

	up_one[1] = stair[1];
	up_one[2] = up_one[1] + stair[2];
	
	up_twice[1] = 0;
	up_twice[2] = stair[2];

	int a, b;

	for (int i = 2; i < stair_num; i++) {
		up_one[i + 1] = up_twice[i] + stair[i + 1]; 

		a = up_one[i - 1] + stair[i + 1];
		b = up_twice[i - 1] + stair[i + 1];
		up_twice[i + 1] = a > b ? a : b;
	}

	if (up_one[stair_num] >= up_twice[stair_num]) {
		cout << up_one[stair_num];
	}
	else {
		cout << up_twice[stair_num];
	}

	return 0;
}