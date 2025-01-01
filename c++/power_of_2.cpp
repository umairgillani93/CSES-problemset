#include <bits/stdc++.h>

using namespace std;

bool isPower(int n) {
	if (n == 1) {
		return true;
	}
	if (n & 1) {
		return false;
	}
	else {
		return isPower(n / 2);
	}
}

int main() {
	int n;
	cin >> n;
	bool res = isPower(n);
	cout << res << '\n';
	return 0;
}
