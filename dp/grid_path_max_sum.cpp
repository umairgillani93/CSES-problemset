#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	vector<vector<int>> dp(n, vector<int>(n, 0));

	dp[0][0] = a[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) {
				continue;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
			}
		}
	}
	cout << dp[n - 1][n - 1] << '\n';
	return 0;
}


