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
		s += main[i];
		
		if (s > half) {
			s -= main[i];
			second.push_back(main[i]);
		}
		
		else {
			first.push_back(main[i]);
		}
	}


	int sum_first = accumulate(first.begin(), first.end(), 0);
	int sum_second = accumulate(second.begin(), second.end(), 0);

	if (sum_first == sum_second) {
		cout << "YES" << '\n';
		cout << first.size() << '\n';
		for (auto k : first) {
			cout << k << " ";
		}

		cout << '\n';
		
		cout << second.size() << '\n';
		for (auto k : second) {
			cout << k << " ";
		}

	}

	else {
		cout << "NO" << '\n';
	}

	return 0;

}
