#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> p;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p.push_back({a, b});
	}
	vector<int> arr;
	vector<int> dep;

	for (int i = 0; i < n; i++) {
		arr.push_back(p[i][0]);
		dep.push_back(p[i][1]);
	}

	sort(arr.begin(), arr.end());
	sort(dep.begin(), dep.end());

	int i = 0;
	int j = 0;
	int curr = 0;
	int best = 0;
	while (i < arr.size() && j < dep.size()) {
		if (arr[i] < dep[j]) {
			curr++;
			best = max(curr, best);
			i++;
		}
		else {
			j++;
			curr--;
		}
	}
	cout << best << '\n';

	return 0;
}
