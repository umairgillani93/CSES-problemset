#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

long long factorial(long long n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	else {
		return n * factorial(n - 1);
	}

	return 0;
}

int main() {
	long long n;
	cin >> n;

	long long fact = factorial(n);
	cout << "fact is: " << fact << '\n';
	string fact_str;
	fact_str = to_string(fact);

	vector<char> rev;	

	long long ans = 0;


	for (int i = fact_str.size(); i > 0; i--) {
		rev.push_back(fact_str[i]);
	}

	int cnt = 0;
	for (int j = 0; j < rev.size(); j++) {
		if (rev[j] == '0') {
			cnt++;
		}
		else {
			break;
		}
	}
	cout << cnt << '\n';
	return 0;
}
