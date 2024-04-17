#include <bits/stdc++.h>

using namespace std;


void sol() {
	int n;
	cin >> n;

	while (n > 1) {
		if (n % 2 == 0) {
			n /= 2;
		}

		else {
			n = n * 3 + 1;
		}

		cout << n << '\n';
	}

	
}


int main() {
	sol();
	return 0;
}

