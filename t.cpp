#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int> >& customers, int N)
{
    // Store the arrival and departure time in two different
    // arrays
    int arr[N], dep[N];
    for (int i = 0; i < N; i++) {
        arr[i] = customers[i][0];
        dep[i] = customers[i][1];
    }

    // Sort the arrival and departure time in ascending
    // order
    sort(arr, arr + N);
    sort(dep, dep + N);

    int i = 0, j = 0;
    // Variables to store the number of customers in the
    // shop and the maximum customers so far
    int currentCustomers = 0, maxCustomers = 0;
    while (i < N && j < N) {
        // If the arrival time is less than the departure
        // time
        if (arr[i] < dep[j]) {
            currentCustomers++;
            maxCustomers
                = max(maxCustomers, currentCustomers);
            i++;
        }
        // If the arrival time is greater than the departure
        // time
        else {
            j++;
            currentCustomers--;
        }
    }
    return maxCustomers;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> arr;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vector<int> x = {a, b};
		arr.push_back(x);
	}
	int res = solve(arr, n);
	cout << res << '\n';

}
