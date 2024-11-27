#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<int, int> map;
    long long best = 0;

    int i = 0;
    for (int j = 0; j < n; j++) {
        map[a[j]]++;

		if (map[a[j]] > 1) {
			map[a[i]]--;
			i++;
		}
        
        best = max(best, (long long)j - i + 1);
    }

    cout << best << '\n';
    return 0;
}

