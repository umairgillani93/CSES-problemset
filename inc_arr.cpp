#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long ans = 0;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mx = max(mx, a);
		ans += mx - a;
	}

	cout << ans << '\n';
	return 0;
}

//int main() {
//	int n;
//	cin >> n;
//	int mx = 0;
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		mx = max(x, mx);
//		ans += mx - x;
//	}
//
//	cout << ans << '\n';
//	return 0;
//	
//}
