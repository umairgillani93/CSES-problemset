#include <bits/stdc++.h>

using namespace std;

void sol() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}

	long long curr_sum = 1;
	long long best_sum = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == s[i + 1]) {
			curr_sum ++;	
		}
		else {
			if (curr_sum > best_sum) {
				best_sum = curr_sum;
			}

			curr_sum = 1;
		}
	}
	cout << best_sum << '\n';

}

int main() {
	sol();
	return 0;

}
