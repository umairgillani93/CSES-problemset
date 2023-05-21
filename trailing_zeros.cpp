#include <iostream>
#include <bits/stdc++.h>
//#include <string>

using namespace std;

long long fact(long long &x) {
	long long f = 1;
	for (int i = 1; i <= x; i++) {
		f *= i;
	}

	return f;
}

int main() {
	long long x;
	cin >> x;

	long long f = fact(x);

	cout << f << '\n';

	string fs = to_string(f);
	string new_fs;

	for (int i = fs.size(); i >= 0; i--) {
		new_fs += fs[i];
	}

	for (auto s : new_fs) {
		cout << s << '\n';
	}

	long long count = 0;
	char c = '0';
	for (int j = 0; j < new_fs.size(); j++) {
		if (new_fs[j] == c) {
			cout << "yes" << '\n';
			count++;
		}
		else {
			break;
		}
	}

	cout << count << '\n';

	return 0;
}
