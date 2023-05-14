#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void with_add(int &x, int &y) {
	int z;
	z = x;
	x = y;
	y = z;
	cout << x << '\n';
	cout << y << '\n';
}	

void without_add(int x, int y) {
	int z;
	z = x;
	x = y;
	y = z;
	cout << x << '\n';
	cout << y << '\n';
}

int main() {
	int x = 4;
	int y = 5;
	cout << "with address " << '\n';
	with_add(x, y);
	cout << "without address " << '\n';
	without_add(x, y);

	return 0;

}

