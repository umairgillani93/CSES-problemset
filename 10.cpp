#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n;
	cin >> n;

	if (n == 5) {
		cout << 1 << '\n';
	}

	else {
	
	int zeros = 0;

	for (int i = 5; i < n; i *= 5) {
		zeros += n / i;
	}
	cout << zeros << '\n';
}
}

int main() {
	sol();
	return 0;
}
