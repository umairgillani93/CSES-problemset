#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//int min(vector<int> arr) {
//	int min = arr[0];
//	for (int i = 0; i < arr.size(); i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//
//		else {continue;}
//	}
//
//	return min;
//}

int main() {
	int n;
	cin >> n;
	int mx = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		mx = max(x, mx);
		ans += mx - x;
	}

	cout << ans << '\n';
	return 0;
	


}
