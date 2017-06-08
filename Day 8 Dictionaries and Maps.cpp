#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
	string s;
	int n;
	cin >> n;

	map<string, int> m;

	for (int i = 0; i < n; i++) {
		int j;
		cin >> s >> j;
		m[s] = j;
	}

	while (cin >> s) {
		if (m.find(s) == m.end()) {
			cout << "Not found" << endl;
		}
		else {
			cout << s << "=" << m[s] << endl;
		}
	}
	return 0;
}
