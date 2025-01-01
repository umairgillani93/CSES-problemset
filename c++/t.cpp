#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<string> arr = {"flight", "flower", "flow"};

	int k = INT_MAX;
	for (int i = 0; i < arr.size(); i++) {
		k = min(k, (int)arr[i].length());
	}
	cout << k << '\n';
	
	int best = 0;
	for (int i = 0; i < arr.size() - 1; i++) {
		string str1 = arr[i];
		string str2 = arr[i + 1];

		int lo = 0;
		int hi = k - 1;
		int res = 0;
	
		while (lo <= hi) {
			int mid = lo + (hi - lo) / 2;
			if (str1.substr(0, mid) == str2.substr(0, mid)) {
				res = mid;
				lo = mid + 1;
			}
			else {
				hi = mid - 1;
			}
		}

		if (res > best) {
			best = res;
		}
		
	}
	cout << best << '\n';
	return 0;
}

