#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	vector<long long> t_vec;
	long long half = t * (t + 1) / 2 / 2;

	for (int i = 1; i <= t; i++) {
		t_vec.push_back(i);
	}

	long long s = 0;
	vector<long long> other;
	vector<long long> first;
	for (int j = 0; j < t_vec.size(); j++) {
		if (s > half) {
			other.push_back(t_vec[j]);
		}

		else {
			s += t_vec[j];
			first.push_back(t_vec[j]);
		}
	}

	for (int i = 0; i < first.size(); i++) {
		cout << first[i] << '\n';
	}

	return 0;
}

