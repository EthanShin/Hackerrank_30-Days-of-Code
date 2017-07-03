#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		int check = 0;
		for (int j = 2; j <= sqrt(n); j++) {
			if (n % j == 0) {
				check = 1;
				break;
			}
		}

		if (check || n == 1) cout << "Not prime" << endl;
		else cout << "Prime" << endl;
	}
	return 0;
}