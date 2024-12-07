#include <bits/stdc++.h>

using namespace std;

int dp(vector<int> &arr, int k) {
	if (k == 0) return 0; // no more elements needed to form the sum 
	if (k < 0) return INT_MAX; // invalid combination
	
	int ans = INT_MAX;
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		int res = dp(arr, k - arr[i]);
		if (res != INT_MAX) {
			ans = min(ans, 1 + res);
		}

	}
	return ans;

}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	long long res = dp(arr, k);
	cout << res << '\n';
	return 0;

}
