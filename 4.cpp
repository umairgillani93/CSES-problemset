#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long moves = 0;


	for (int j = 0; j < n - 1; j++) {
		if (arr[j] > arr[j + 1]) {
			moves += arr[j] - arr[j + 1];
		}
		else {continue;}

	}
	cout << moves << '\n';
}

int main() {
	sol();
	return 0;
}
