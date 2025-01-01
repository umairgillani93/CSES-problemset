#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> &arr) {
	int sum = arr[0];
	vector<int> pref_sum;
	pref_sum.push_back(sum);

	for (int i = 1; i < arr.size(); i++) {
		pref_sum.push_back(pref_sum[i - 1] + arr[i]);	
	}

	return pref_sum;

}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> p = f(arr);

	for (auto &s: p) {
		cout << s << " ";
	}
	cout << '\n';
	return 0;

}
