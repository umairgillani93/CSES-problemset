#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> apples(n);
	for (int i = 0; i < n; i++) {
		cin >> apples[i];
	}

	// sort the vector initially
	sort(apples.begin(), apples.end());
	long long sum = 0;

	for (int k = 0; k < n; k++) {
		sum += apples[k];
	}

	long long ans = 0;
	
	// iterate over all possible combinations
	for (int i = 0; i < (1 << n); i++) {
		long long cs = 0;
		for (int j = 0; j < apples.size(); j++) {
			if (i & (1 << j)) {
				cs += apples[j];
			}
		}

		if (cs <= sum / 2) {
			ans = max(ans, cs);
		}
	}
	
	cout << sum - 2*ans<< '\n';

	return 0;
}
