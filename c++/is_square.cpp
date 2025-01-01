#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 1; i <= n; i++) {
		arr.push_back(i);
	}

	int lo = 0;
	int hi = n - 1;

	bool found = false;

	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (arr[mid] * arr[mid] == n) {
			cout << "found: " << arr[mid] << '\n';
			found = true;
			break;
		}
		else if (arr[mid] * arr[mid] < n) {
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}

	if (!found) {
		cout << "not found " << '\n';
	}
	return 0;
}
