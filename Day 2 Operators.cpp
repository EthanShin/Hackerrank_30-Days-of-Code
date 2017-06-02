#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	float mealCost, totalCost;
	int tipPercent, taxPercent;

	cin >> mealCost >> tipPercent >> taxPercent;
	totalCost = mealCost + (mealCost * (tipPercent + taxPercent) / 100);
	totalCost = round(totalCost);
	cout << "The total meal cost is " << totalCost << " dollars.";
	return 0;
}