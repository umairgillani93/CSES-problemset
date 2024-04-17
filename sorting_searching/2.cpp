#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	
	vector<int> desired(n);
	for (int i = 0; i < n; i++) {
		cin >> desired[i];
	}
	
	vector<int> actual(m);
	for (int i = 0; i < m; i++) {
		cin >> actual[i];
	}

	sort(desired.begin(), desired.end());
	sort(actual.begin(), actual.end());

	int ans = 0;
	int i = 0; 
	int j = 0; 
	
	while (i < n && j < m) {
		if (abs(desired[i] - actual[j]) <= k) {
			ans++;
			i++;
			j++;
		}

		else if (desired[i] < actual[j]) {
			i++;
		}

		else {
			j++;
		}
				
	}

	cout << ans << '\n';

	return 0;
}
