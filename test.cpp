#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	long long min_diff = 0;
	cout << min_diff << '\n';

	// iterate over all possible combinations
	for (int i = 0; i < (1 << n); i++) {
		long long g1 = 0;
		long long g2 = 0;

		for (int j = 0; j < n; j++) {
			if (i && (1 << j)) {
				g1 += arr[j];
			}

			else {
				g2 += arr[j];
			}
		}

		min_diff = min(min_diff,  abs(g1 - g2));
	}

	cout << min_diff << '\n';
	return 0;
}
