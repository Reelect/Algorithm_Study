#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	int prime_count = 0;
	string pal;
	bool ok;
	int i, j;

	cin >> N;

	if (N ==1) {
		cout << 2;
		return 0;
	}

	bool* ast = new bool[1003002];

	for (i = 2; i <= 1003001; i++) {
		ast[i] = true;
	}
	for (i = 2; i * i <= 1003001; i++) {
		if (ast[i]) {
			for (j = 2 * i; j <= 1003001; j += i) {
				ast[j] = false;
			}//여기서 prime_count를 구하면 중복되는 게 있어서 안 됨.
		}
	}

	int* prime = new int[500000];

	j = 0;
	for (i = N; i <= 1003001; i++) {
		if (ast[i]) {
			prime[j] = i;
			prime_count++;
			j++;
		}
	}
	for (i = 0; i < prime_count; i++) {
		pal = to_string(prime[i]);
		ok = true;
		for (j = 0; j < (pal.size() / 2); j++)
		{
			if (pal[j] != pal[pal.size() - j - 1]) {
				ok = false;
				break;
			}
		}
		if (ok) {
			cout << prime[i];
			break;
		}
	}

	delete[] prime;
	delete[] ast;
	return 0;
}