#include <bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;

void dp(vector<int> &arr, int k, vector<int> &c, int &res, vector<int> &memo) {
	if (k == 0) {
		res++;
		return;
	}
	if (memo[k] != -1) {
		res += memo[k];
		return;
	}
	int orig_res = res;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > k) continue;
		c.push_back(arr[i]);
		dp(arr, k - arr[i], c, res, memo); // allow reusing same element
		c.pop_back();
	}
	memo[k] = res - orig_res;
}


int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> memo(k + 1, -1);
	vector<int> c;
	int res = 0;
	dp(a, k, c, res, memo);

	cout << res << '\n';
	return 0;
}

