#include <iostream>
using namespace std;

int main(void){
	int num;
	cin >> num;
	if (num == 1) return 0;
	for (int i = 2; i*i <= num; i++) {
		while (num % i == 0) {
			cout << i << endl;
			num /= i;
		}
	}
	if (num != 1) {
		cout << num << endl;
	}
}