#include <bits/stdc++.h>

using namespace std;

int main() {
	// sum[i, j] = prefix[j] - prefix[i - 1];
	// prefix[i - 1] = prefi[j] - x;
	// since we know that if prefix[j] - x = prefix[i = 1]
	// it means that this is a valid subarray we need to save count for
	
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<long long, long long> mp;

	mp[0] = 1; // for key equals '0'
				// the whole ideas is we need to check if map[prefix - x] is already there.
	long long pref = 0;
	long long res = 0;

	for (int i = 0; i < n; i++) {
		pref += a[i];
		res += mp[pref - x];
		mp[pref]++;
	}
	cout << res << '\n';
	return 0;
}
