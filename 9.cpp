#include <bits/stdc++.h>

using namespace std;

string deci_to_bin(int n) {
	
	if (n == 0) {
		return "0";
	}
	string s;
	while (n > 0) {
		s += (n % 2 == 0) ? '0' : '1';
		n /= 2;
	}
	reverse(s.begin(), s.end());
	return s;

}

int main() {
	// convert the passed integer to it's binary representation first
	/*
	 * passed number is 1
	 * 2 ^ 1 = 2
	 * numbers are 0, 1
	 * 
	 * passed number is 2
	 * 2 ^ 2 = 4
	 * 0, 1, 1, 0
	 * preappend zeros in first half and 1s in second half
	 * 00, 01, 11, 10
	 *
	 * passed number is 3 
	 * 2 ^ 3 = 8
	 * 000, 001, 010, 011, 100, 101, 110, 111,
	 * 0000, 0001, 0010, 0011, 1001, 1011, 1101, 1111
	 */
	int n;
	cin >> n;

	vector<string> res;

	for (int i = 0; i < 2 << n - 1; i++) {
		res.push_back(deci_to_bin(i));
	}

	for (int i = 0; i < res.size(); i++) {
		if (res[i].size() < n) {
			int m = n - res[i].size();

			for (int j = 0; j < m; j++) {
				res[i] = '0' + res[i];
			}
		}
	}

	if (n < 2) {
		for (auto c: res) {
			cout << c << '\n';
		}
	}

	
	else {
		for (int i = 0; i < res.size(); i++) {
			string out;
			out = res[i][0];

			for (int j = 0; j < res[i].size() - 1; j++) {
				out += (res[i][j] == res[i][j + 1] ? "0" : "1");
			}

			cout << out << '\n';

		}
	}
	


	return 0;

}
