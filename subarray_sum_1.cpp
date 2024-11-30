#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long curr = 0;
	int count = 0;

	int i = 0;

	for (int j = 0; j < n; j++) {
		curr += a[j];
		
		while (curr > k && i <= j) {
			curr -= a[i];
			i++;
		}

		if (curr == k) {
			count++;
		}
	}
	cout << count << '\n';

	return 0;
}

