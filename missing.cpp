#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	vector<int> g;
	vector<int> h(t - 1);

	for (int i = 0; i < h.size(); i++) {
		cin >> h[i];
	}

	for (int i = 1; i <= t; i++) {
		g.push_back(i);
	}

	sort(h.begin(), h.end());

	for (int i = 0; i < g.size(); i++) {
		if (g[i] == h[i]) {
			continue;
		}

		else {
			cout <<  g[i] << '\n';
			return 0;

		}
	}

	return 0;

}

