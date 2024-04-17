#include <bits/stdc++.h>

using namespace std;

void fibon(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	cout << fibon(n - 1) + fibon(n - 2);
}

int main() {
	int n;
	cin >> n;
	cout << fibon(n) << '\n';
	return 0;
}
