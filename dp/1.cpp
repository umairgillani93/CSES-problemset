#include <bits/stdc++.h>
using namespace std;


void f(vector<int> &arr, int k, vector<int> &c, vector<vector<int>> &res) {
	
	if (k == 0) {
		res.push_back(c);
		return;
	}
	
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > k) {
			continue;
		}
		c.push_back(arr[i]);
		f(arr, k - arr[i], c, res);
		c.pop_back();
	}
}

int main() {
	vector<int> arr = {1,2,3,4,5,6};
	vector<vector<int>> res;
	int k = 3;
	vector<int> c;
	f(arr, k, c, res);
	for (auto &s: res) {
		for (int num : s) {
			cout << num << " ";
		}
		cout << '\n';
	}
	return 0;
}
