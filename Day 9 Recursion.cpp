#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return n;
	}
}

int main() {
	int n, result;
	cin >> n;

	result = factorial(n);
	cout << result;

	return 0;
}