#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '?') {
			count++;
		}
	}

	int ans = 0;
	ans = count * 4 + (48 - count) - (2 * 4) - (5 * 4);
	cout << ans << '\n';

	return 0;
}
