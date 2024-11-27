#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pair<int, int> p;
		p.first = a;
		p.second = b;
		arr.push_back(p);
	}

	sort(arr.begin(), arr.end(), [&](pair<int, int> &x, pair<int, int> &y) {
			return x.second < y.second;
			});

	int start = 0;
	int end = 0;
	int ans = 0;

	for (auto &s: arr) {
		if (s.first >= end) {
			ans++;
			end = s.second;
		}
	}
	cout << ans << '\n';
	
	return 0;
}

