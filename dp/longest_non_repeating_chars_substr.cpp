#include <bits/stdc++.h>

using namespace std;

int main() {
	string s = "aaabbcc";
	int n = s.size();
	vector<int> dp(n, 0);

	dp[0] = 1;

	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		}
		else {
			dp[i] = 1;
		}
	}

	int res = *max_element(dp.begin(), dp.end());
	cout << res << '\n';
	return 0;
}

