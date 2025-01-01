#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	int max_sum = 0;

	for (int i = 0; i < a.size() - k; i++) {
		sum += a[i];
		sum += a[i + 1];
		sum += a[i + 2];

		//cout << sum << '\n';

		max_sum = max(sum, max_sum);
		sum = 0;

		/* a = [2, 1, 5, 1, 3, 2]
		 * for i = 0;
		 * sum = 2 + 1 + 5 = 8
		 * for i = 1
		 * sum = 1 + 5 + 1 = 7
		 * for i = 2
		 * sum = 9 *max_sum
		 */
	}
	cout << max_sum << '\n';
		
	return 0;
}
