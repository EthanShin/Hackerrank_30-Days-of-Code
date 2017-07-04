#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int da, ma, ya;
	int de, me, ye;

	cin >> da >> ma >> ya;
	cin >> de >> me >> ye;

	if (ya > ye) cout << 10000;
	else if (ya == ye && ma > me) cout << 500 * (ma - me);
	else if (ya == ye && ma == me && da > de) cout << 15 * (da - de);
	else cout << 0;

	return 0;
}