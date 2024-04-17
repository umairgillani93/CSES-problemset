// Tower of Hanoi
# include <bits/stdc++.h>

using namespace std;

void hanoi(int n, char source, char target, char auxi) {
	if (n > 0) {
		hanoi(n - 1, source, auxi, target);
		hanoi(n -1, auxi, target, source);
	}
}

int main() {
	int n;
	cin >> n;
	cout << hanoi(n, 'A', 'B', 'C') << '\n';
	return 0;
}

