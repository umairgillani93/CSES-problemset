#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector<vector<int>> v{{1,2,9,10,25}, {4,3,8,11,24}, {5,6,7,12,23},{16,15,14,13,22},{17,18,19,20,21}};

	for (int i = 0; i < t; i++) {
		int y, x;
		cin >> y >> x;
		cout << v[y][x] << '\n';
 }

	return 0;
}
