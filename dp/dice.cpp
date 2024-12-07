#include <bits/stdc++.h>

using namespace std;

long long MOD = 1e9 + 7;

int dp(int n, vector<bool> &seen, vector<int> &res) {
	if (n < 0) {return 0;}
	if (n == 0) {return 1;}
	if(seen[n]) {return res[n];}

	long long ans = 0;
	for (int i = 1; i <= 6; i++) {
		ans += dp(n - i, seen, res);
		ans = ans % MOD;
	}
	res[n] = ans;
	seen[n] = true;
	return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> res(n + 1, 0);
	vector<bool> seen(n + 1, false);
	long long result = dp(n, seen, res);
	cout << result << '\n';
	return 0;
}
