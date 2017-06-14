#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
	vector<int> elements;

public:
	int maximumDifference;

	// Add your code here
	Difference(vector<int> e) {
		elements = e;
	}

	void computeDifference() {
		int max_value = elements.at(0), min_value = max_value;
		for (int i = 1; i < elements.size(); i++) {
			if (max_value < elements.at(i)) max_value = elements.at(i);
			if (min_value > elements.at(i)) min_value = elements.at(i);
		}

		maximumDifference = max_value - min_value;
	}
}; // End of Difference class

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}