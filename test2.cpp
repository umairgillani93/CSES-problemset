#include <bits/stdc++.h>

using namespace std;

string binary(int n) {
	string bin_str;

	if (n == 0) {
		return "0";
	}

	while (n > 0) {
		bin_str += (n % 2 == 0) ? '0' : '1';
		n /= 2;
	}

	reverse(bin_str.begin(), bin_str.end());

	return bin_str;
}

int main() {
	int n;
	cin >> n;
	string bin_str;
	vector<string> res;
	for (int i = 0; i < 2 << n - 2; i++) {
		res.push_back(binary(i));
	}

	for (int i = 0; i < res.size(); i++) {
		if (res[i].size() != n) {
			int var = n - res[i].size();

			for (int i = 0; i < var; i++) {
				res[i]  = "0" + res[i];
			}

			}
		else {continue;}

		}

	
	for (auto c: res) {
		cout << c << '\n';
	}
	return 0;

}


