#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int c;
	int best;
	c = 0;
	best = 0;
	cin >> s;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == s[i + 1]) {
			c += 1;
		}
		else {
			best = max(c, best);
			c = 0;

		}

	}
	best = max(c, best) + 1;
	cout << best << '\n';
	return 0;
}
