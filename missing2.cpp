#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	cin >> n;

	vector<long long> second(n - 1);

	long long sum = 0;

	for (int i = 0; i < second.size(); i++) {
		cin >> second[i];
	}

	for (int i = 0; i < second.size(); i++) {
		sum += second[i];
	}
	
	long long our_sum = 0;

	our_sum = n * (n + 1) / 2;
	cout << our_sum - sum << '\n';

	return 0;

}
