#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> suff_vector;

	for (int i = 0; i < s.size(); i++) {
		string new_s = "";
		for (int j = 0; j < i; j++) {
			new_s += s[j];	
			sort(new_s.begin(), new_s.end());
		}

		cout << new_s << '\n';
	}


		
	return 0;
}	
