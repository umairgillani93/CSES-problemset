#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> dp(n + 1, INT_MAX);

	dp[0] = 0; // nothing is required at initial state
	
	for (int i = 1; i <= n; i++) {
		int curr = i;
		while (curr > 0) {
			int d = curr % 10;
			if (d > 0) {
				dp[i] = min(dp[i], dp[i - d] + 1);
			}
			curr /= 10;
		}
	}
	cout << dp[n] << '\n';
	return 0;

}

