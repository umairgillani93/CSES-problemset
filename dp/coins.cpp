#include <bits/stdc++.h>

using namespace std;

int dp(vector<int> &arr, int k, vector<bool> &seen, vector<int> &cache) {
	if (k == 0) return 0; // no more countings
	if (k < 0)  return INT_MAX; // in-valid combination
	if (seen[k]) return cache[k];

	int ans = INT_MAX;
	for (int i = 0; i < arr.size(); i++) {
		int res = dp(arr, k - arr[i], seen, cache);
		if (res  != INT_MAX) {
			ans = min(ans, 1 + res);
		}
	}
	cache[k] = ans;
	seen[k] = true;
	return ans;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<bool> seen(k + 1, false);
	vector<int> cache(k + 1, -1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int res = dp(a, k, seen, cache);
	cout << ((res < INT_MAX) ? res : -1) << '\n';
	return 0;

}


