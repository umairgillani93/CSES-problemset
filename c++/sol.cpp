#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> A = {5,6,7,8,0,1,2};
	int lo = 0;
	int hi = A.size() - 1;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		if (A[mid] > A[hi]) {
			lo = mid;
		}
		else {
			hi = mid - 1;
		}
	}
	cout << A[lo] << '\n';

	return 0;
}
