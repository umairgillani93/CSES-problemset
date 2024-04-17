#include <bits/stdc++.h>

using namespace std;

void sol() {
	string s;
	getline(cin, s);

	int i = 0; 
	int j = s.size() -1;

	while (i <= j) {
		if (s[i] == s[j]) {
			i++;
			j--;
		}
		else {
			cout << "NOT PALINDROME" << '\n';
			return;
		}
		
	}
	cout << "PALINDROM" << '\n';

}

int main() {
	sol();
	return 0;
}
