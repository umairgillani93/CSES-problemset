#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n - 1; i++) {
		cin >> nums[i];
	}

	long long actual_sum = n * ((n + 1) / 2);
	long long miss_sum = accumulate(nums.begin(), nums.end(), 0);

	cout << actual_sum - miss_sum << '\n';

}


int main() {
	sol();
	return 0;

}
