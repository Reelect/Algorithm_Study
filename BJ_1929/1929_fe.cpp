#include <iostream>

using namespace std;

int main() {
	int m, n;
	
	cin >> m;
	cin >> n;
	for (m; m <= n; m++) {
		int i = 2;
		if (m == 2 || m == 3) {
			cout << m << endl;
			continue;
		}
		while(i*i < m) {
			if ((m % i) == 0) {
				break;
			}
			i++;
			if (i * i > m) {
				cout << m << endl;
				break;
			}
		}
	}
	return 0;
}