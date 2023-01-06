#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> opt;
	
	if (n == 1) {
		cout << 1 << '\n';
	}

	if (n == 2 || n == 3) {
		cout << "NO SOLUTION" << '\n';
	}

	// 2 4 1 3
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			opt.push_back(i);
			
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			opt.push_back(i);
		}
	}

	for (int j = 0; j < n; j++) {
		cout << opt[j] << "  ";
	}

	return 0;
	

}


