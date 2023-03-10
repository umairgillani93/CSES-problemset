#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
	long long n;
	long long s = 1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		s = 2 * s % ((int)1e9 + 7);
	}

	cout << s << '\n';

	return 0;
}
