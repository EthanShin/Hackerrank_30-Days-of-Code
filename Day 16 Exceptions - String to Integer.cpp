#include <iostream>

using namespace std;

int main() {
	string S;
	cin >> S;

	try {
		cout << stoi(S);
	}
	catch (exception e) {
		cout << "Bad String";
	}

	return 0;
}