#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j += 2) {
			cout << s.at(j);
		}
		cout << " ";
		for (int j = 1; j < s.length(); j += 2) {
			cout << s.at(j);
		}
		cout << endl;
	}
	return 0;
}