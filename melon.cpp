#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 2) {
		cout << "NO" << '\n';

	}

	else {
		if (n % 2 == 0) {
		cout << "YES" << '\n';
	}

	else {
		cout << "NO" << '\n';
	}
	}
	return 0;
}
