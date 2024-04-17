#include <bits/stdc++.h>

using namespace std;


void sol() {
	int n;
	cin >> n;
	
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION" << '\n';
	}

	else {
		vector<int> arr(n);
		vector<int> evens;
		vector<int> odds;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				evens.push_back(i);
			}	

			else {
				odds.push_back(i);
			}
		}

		for (auto e: evens) {
			cout << e << " ";
		}

		for (auto o: odds) {
			cout << o << " ";
		}

		//for (int i = evens.size() - 1; i >= 0; i--) {
		//	cout << evens[i] << " ";
		//}

		//for (int j = odds.size() - 1; j >= 0; j--) {
		//	cout << odds[j] << " ";
		//}
		

	}
}


int main() {
	sol();
	return 0;
}
