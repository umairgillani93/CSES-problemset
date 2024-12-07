#include <bits/stdc++.h>

using namespace std;

int dp(int n) {
	if (n < 0) {return 0;}
	if (n == 1) {return 1;}
	int ans = 0;
	for (int i = 1; i <= 6; i++) {
		ans += dp(n - i);
	}
	return ans;

}

int main() {
	int n;
	cin >> n;
	int res = dp(n);
	cout << res << '\n';
	return 0;
}

