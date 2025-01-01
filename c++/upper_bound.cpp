#include <bits/stdc++.h> 

using namespace std;

int main() {
	// upper bound 
	// first value lower than x 
	
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int lo = 0;
	int hi = n - 1;
	int ans = INT_MAX;

	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (arr[mid] <= x) {
			ans = arr[mid];
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}
	cout << ans << '\n';
	return 0;
}
