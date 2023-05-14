#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	vector<pair<int, int>> P;

	for (int i = 0; i < t; i++) {
		pair<int, int> p;
		int x;
		int y;
		cin >> x;
		cin >> y;
		p.first = x;
		p.second = y;
		P.push_back(p);
	}

	for (int j = 0; j < t; j++) {
		if (P[j].first == 0 || P[j].second == 0) {
			cout << "NO" << '\n';
		}
		else if (P[j].first == 2 && P[j].second == 2) {
			cout << "NO" << '\n';
		}

		else if (P[j].first == 3 && P[j].second == 3) {
			cout << "YES" << '\n';
		}

		else if ((P[j].first == 2 && P[j].second == 1) || (P[j].first == 1 && P[j].second == 2)) {
			cout << "YES" << '\n';
		}
		
		else if (P[j].first == 4 && P[j].second == 4) {
			cout << "NO" << '\n';
		}

		else {
			if (P[j].first % 2 == 0 && P[j].second % 2 == 0) {
				cout << "YES" << '\n';
			}

			else {
				cout << "NO" << '\n';
			}
		}
	}

	return 0;
}
