#include <iostream>

using namespace std;

int main() {
	int m, n;
	int i, j;

	cin >> m >> n;
	bool list[1000000];

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
		if (list[i] == true) {
			cout << i << "\n";
		}
	}
	return 0;
}