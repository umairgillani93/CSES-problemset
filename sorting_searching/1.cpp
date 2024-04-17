#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<long long> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	set<long long> dist;
	
	for (int i = 0; i < n; i++) {
		dist.insert(arr[i]);
	}
	cout << dist.size() << '\n';
	return 0;
}
