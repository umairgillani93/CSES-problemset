#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> dp(k + 1, 0);
	
	dp[0] = 1; // define initial state
	for (int i = 0; i < n; i++) {
		for (int j = a[i]; j <= k; j++) {
			if (j >= a[i]) {
				dp[j] = (dp[j] + dp[j - a[i]]) % MOD;
			}
		}
	}
	cout << dp[k] << '\n';
	return 0;
}
