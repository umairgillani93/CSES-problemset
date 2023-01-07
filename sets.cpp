#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	vector<long long> t_vec;
	long long half = t * (t + 1) / 2 / 2;
	vector<long long> first;
	vector<long long> second;

	for (long long i = 1; i <= t; i++) {
		t_vec.push_back(i);
	}

	long long s = 0;

	for (long long i = t_vec.size(); i >= 0; i--) {
		s += t_vec[i];
		if (s > half) {
			if (t_vec[i] == 0 ) {continue;}
			else {
			second.push_back(t_vec[i]);
			s -= t_vec[i];
			}
		}
		else {
			if (t_vec[i] == 0) {continue;}
			else {
			first.push_back(t_vec[i]);
			}
		}
	}

	long long f_sum = accumulate(first.begin(), first.end(), 0);
	long long s_sum = accumulate(second.begin(), second.end(), 0);
	if (f_sum == s_sum) {
		cout << "YES" << '\n';
		cout << first.size() << '\n';
		for (long long i = 0; i < first.size(); i++) {
			cout << first[i] << " ";
		}
		cout << '\n';
		cout << second.size() << '\n';
		for (long long j = 0; j < second.size(); j++) {
			cout << second[j] << " ";
		}
	}

}
