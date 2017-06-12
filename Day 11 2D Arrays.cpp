#include <vector>
#include <iostream>
#include <climits>
using namespace std;


int main() {
	vector< vector<int> > arr(6, vector<int>(6));
	for (int arr_i = 0; arr_i < 6; arr_i++) {
		for (int arr_j = 0; arr_j < 6; arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}

	int res = INT_MIN;
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			int value = 0;

			for (int k = j - 1; k <= j + 1; k++) {
				value += arr[i - 1][k];
				value += arr[i + 1][k];
			}
			value += arr[i][j];

			if (value > res) {
				res = value;
			}
		}
	}

	cout << res;

	return 0;
}