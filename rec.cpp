#include <bits/stdc++.h>

using namespace std;

int fibon(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	else {
		return fibon(n - 2) + fibon(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	cout << fibon(n) << '\n';
	return 0;
}
