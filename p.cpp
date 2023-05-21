#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	//long long t = 2432902008176640000;
	//string ts = to_string(t);

	//long long cnt = 0;
	//for (int i = ts.size(); i >= 0; i--) {
	//	char c = '0';
	//	if (ts[i] == c) {
	//		cnt++;
	//		cout << "yes"  << '\n';
	//	}

	//	else {break;}
	//}

	//cout << cnt << '\n';
	
	string s = "00123";
	char c = '0';
	long long cnt = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			cout << "yes" << '\n';
			cnt ++;
		}
		
		else {continue;}
	}

	cout << cnt << '\n';


	return 0;
}
