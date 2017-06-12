#include <iostream>

using namespace std;

int main() {
	int n, res = 0, cons = 0;
	cin >> n;

	while (n > 0) {
		if (n % 2) {
			cons++;
			if (cons > res) res = cons;
		}
		else {
			cons = 0;
		}
		n = n / 2;
	}

	cout << res;
	return 0;
}