#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//sort(arr.begin(), arr.end());
	
	int i = 0; 
	int j = n - 1;
	while (i < j) {
		if (arr[i] + arr[j] == x) {
			i++;
			j++;
			cout << i << " " << j << '\n';
			return 0;
		}
		else if (arr[i] + arr[j] > x) {
			j--;
		}
		else {
			i++;
		}
	}
	cout << "IMPOSSIBLE" << '\n';
	return 0;
}
