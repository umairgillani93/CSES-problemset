#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	while (true) {
		x -= 2;
		if (x == 0 || x < 0) {
			break;
		}

		else {
			x -= 1;
			if (x == 0 || x < 0) {
				break;
			}
		}

	}
	cout << x << '\n';

	return 0;
}

