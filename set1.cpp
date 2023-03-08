#include <iostream>
#include <bits/stdc++.h>

using ll = int64_t;
using namespace std;


// [7, 6, 5, 4, 3, 2, 1] = 28
// s = 0;
// s += 7; s = 7
// if s <= half



int main() {
	ll t;
	cin >> t;
	ll half = t * (t + 1) / 2 / 2;

	vector<int> main;
	vector<int> first;
	vector<int> second;

	for (int i = t; i > 0; i--) {
		main.push_back(i);
	}

	ll s = 0;

	for (int i = 0; i < main.size(); i++) {
		if (s <= half) {
			s += main[i];
			
			if (s <= half) {
				first.push_back(main[i]);
			}

			else {
				second.push_back(main[i]);
			}
		}
	}

	for (int i = 0; i < first.size(); i++) {
		cout << first[i] << '\n';
	}

	return 0;

}
