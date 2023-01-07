#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	vector<vector<int>> v{{1,2,9,10,25}, {4,3,8,11,24}, {5, 6, 7, 12, 23}, {16,15,14,13,22}, {17, 18, 19, 20, 21}};
	vector<pair<long long, long long>> p_vec;


	for (int i = 0; i < t; i++) {
		long long y, x;
		cin >> y >> x;
		pair<long long, long long> p;
		p.first = y;
		p.second = x;
		p_vec.push_back(p);
	}

	for (int i = 0; i < p_vec.size(); i++) {
		cout << v[p_vec[i].first - 1][p_vec[i].second - 1] << '\n';
	}

	return 0;
}
