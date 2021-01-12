#include <iostream>

using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int i, j;

	cin >> m >> n;
	int min = n;

	bool list[10000];

	list[1] = false;
	for (i = 2; i <= n; i++) {
		list[i] = true;
	}
	for (i = 2; i * i <= n; i++) {
		if (list[i]) {
			for (j = 2 * i; j <= n; j += i) {
				list[j] = false;
			}
		}
	}
	for (i = m; i <= n; i++) {
		if (list[i]) {
			sum += i;
			if (i < min) {
				min = i;
			}
		}
	}
	if (sum == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << "\n";
	cout << min;

	return 0;
}