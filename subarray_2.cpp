#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long curr = 0;
	long long best = 0;

	int i = 1;
	for (int j = 0; j < n - b; j++) {
		curr = max(a[i], curr + a[i]);

		if (j == b) {
			best = max(curr, best);
		}	
	}
	cout << best << '\n';
	return 0;
}

