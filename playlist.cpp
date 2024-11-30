/* - Two pointers
 * - Sliding window
 * - Hash table
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	int best = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	unordered_map<int, int> count;

	int start = 0;

	for (int end = 0; end < n; end++) {
		count[a[end]]++;

		while (count[a[end]] > 1) {
			count[a[start]]--;
			start++;
		}

		best = max(best, end - start + 1);
	}
	cout << best << '\n';
	return 0;
}
