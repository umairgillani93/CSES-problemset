#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int med = a[n / 2]; // taking the median of the array
						// as median minimized the "SUM OF THE ABSOLUTE DISTANCES"
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += abs(a[i] - med);
	}
	cout << ans << '\n';
	return 0;

}
