#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> weights(n);
	for (int i = 0; i < n; i++) {
		cin >> weights[i];
	}

	sort(weights.begin(), weights.end());

	int ans = 0;
	int i = 0; 
	int j = n - 1;

	while (i <= j) {
		if (weights[i] + weights[j] <= x) {
			i++;
		}

		ans++;
		j--;

	}

	cout << ans << '\n';
	return 0;
}

