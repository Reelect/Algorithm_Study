#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 2; i <= sqrt(num); i++) {
		while((num%i)==0){
			cout << i << endl;
			num /= i;
		}
	}
}

/*
bool prime(int p) {
	if (p == 2) {
		return true;
	}
	for (int a = 2; a < p; a++) {
		if ((p % a) == 0) {
			return false;
		}
	}
	return true;
}
*/


/*
	int i = 2;
	while (num != 1) {
		if (prime(i)) {
			while (num % i == 0) {
				cout << i << endl;
				num = num / i;
			}
		}
		i++;
	}
	return 0;
	*/