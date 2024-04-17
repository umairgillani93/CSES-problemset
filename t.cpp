#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int sum = 7;
	
	for (int mask = 0; mask < (1 << n); mask++) {
		int cs = 0;
		for (int j = 0; j < arr.size(); j++) {
			if (mask & (1 << j) == sum) {
				cout << mask << " : " << j << '\n';
			}

		}
		cout << cs << '\n';
	}

	
	return 0;

}
