#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, s = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int x;
		cin >> x;
		s += x;
	}
	cout << n * (n + 1) / 2 - s << '\n';
	return 0;
}



