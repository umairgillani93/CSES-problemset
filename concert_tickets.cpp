#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	multiset<int> tickets;
	vector<int> customers(m);

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x; 
		tickets.insert(x);
	}

	for (int i = 0; i < m; i++) {
		int price;
		cin >> price;
		auto it = tickets.upper_bound(price);

		if (it != tickets.begin()) {
			it--;
			cout << *it << '\n';
			tickets.erase(it);
		}
		else {
			cout << -1 << '\n';
		}
	}

	return 0;
}

