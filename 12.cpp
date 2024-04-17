#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> ans;

	sort(s.begin(), s.end());

	do {
		ans.push_back(s);
	}

	while (next_permutation(s.begin(), s.end()));

	cout << ans.size() << '\n';

	for (auto c: ans) {
		cout << c << '\n';
	}

	return 0;
		
}
