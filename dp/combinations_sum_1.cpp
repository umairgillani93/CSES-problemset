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
	vector<long long> dp(k + 1, 0);
	dp[0] = 1; // one one way of creating sum = 0;
	
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] > i) continue;
			dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
		}
	}
	cout << dp[k] << '\n';
	return 0;
}
