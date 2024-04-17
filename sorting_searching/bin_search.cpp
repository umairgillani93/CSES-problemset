#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];	
	}

	sort(arr.begin(), arr.end());
	
	int i = 0; 
	int j = n - 1;

	while (i <= j) {
		int mid = (i + j) / 2;

		if (x == arr[mid]) {
			cout << mid << '\n';
			return mid;
		}

		else if (x > arr[mid]) {
			i = mid + 1;
			i++;
		}

		else  {
			j = mid - 1;
			j--;
		}
	}

	return 0;
}
