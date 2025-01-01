#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int i = 0; 
	int j = arr.size() - 1;
	while (i < j) {
		if (arr[i] + arr[j] == k) {
			cout << i << " " << j << '\n';
			return 0;
		}
		else if (arr[i] + arr[j] > k) {
			j--;
		}
		else {
			i++;
		}
	}
	return -1;
}
	
