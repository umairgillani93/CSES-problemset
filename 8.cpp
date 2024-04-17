#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	long long s_size = s.size();

	unordered_map<char, int> char_count;

	for (int i = 0; i < s.size(); i++) {
		char_count[s[i]]++;
	}

	int flag = 0;

	for(const auto &p: char_count) {
		int c = p.first;
		int count = p.second;

		if (count % 2 != 0) {
			flag++;

			if (flag > 1) {
				cout << "NO SOLUTION" << '\n';
				return 0;
			}

			else {continue;}
		}

		else {continue;}

		
	}

	vector<char> left, middle, right, res;

	if (s_size % 2 == 0) {
		for (const auto &p: char_count) {
			char c = p.first;
			int count = p.second;
			


			while (count > 0) {
				left.push_back(c);
				right.push_back(c);
				count -= 2;
			}
			
		}

		for (int i = 0; i < left.size(); i++) {
			cout << left[i] << "";
		}

		for (int i = right.size() - 1; i >= 0; i--) {
			cout << right[i] << "";
		}

	
	}
	else {
		for (const auto &p: char_count) {
			char c = p.first;
			int count = p.second;

			if (count % 2 != 0) {
				while (count > 0) {
					middle.push_back(c);
					count--;
				}
			}
			

			while (count > 0 && count % 2 == 0) {
				left.push_back(c);
				right.push_back(c);
				count -= 2;
			}
			
		}

		
	for (auto c: left) {
		cout << c << "";
	}

	for (auto c: middle) {
		cout << c << "";
	}

	for (int i = right.size() - 1; i >= 0; i--) {
		cout << right[i] << "";
	}

	}

	return 0;
}

