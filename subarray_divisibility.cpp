#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<long long, long long> map;
	long long pref = 0;
	long long res = 0;
	long long ans = 0;
	map[0] = 1;
	for (int i = 0; i < n; i++) {
		pref += a[i];
		int rem = ((pref % n) + n) % n;
		ans += map[rem];
		map[rem]++;
	}
	cout << ans << '\n';
	return 0;
}
