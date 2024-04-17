#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

// Function to recursively find the minimum difference between the weights of two groups
int min_difference_helper(int idx, int sum1, int sum2, const vector<long long>& weights, map<pair<int, pair<int, int>>, int>& memo) {
    // Base case: if all apples are considered
    if (idx == weights.size()) {
        return abs(sum1 - sum2);
    }

    // If the result for the current state is already calculated, return it
    if (memo.count({idx, {sum1, sum2}})) {
        return memo[{idx, {sum1, sum2}}];
    }

    // Include the current apple in group 1 and group 2
    int diff1 = min_difference_helper(idx + 1, sum1 + weights[idx], sum2, weights, memo);
    int diff2 = min_difference_helper(idx + 1, sum1, sum2 + weights[idx], weights, memo);

    // Update the memoization table with the minimum difference
    memo[{idx, {sum1, sum2}}] = min(diff1, diff2);

    return memo[{idx, {sum1, sum2}}];
}

// Function to find the minimum difference between the weights of the two groups
int min_difference(const vector<long long>& weights) {
    // Initialize memoization table
    map<pair<int, pair<int, int>>, int> memo;

    // Call the recursive helper function
    return min_difference_helper(0, 0, 0, weights, memo);
}

int main() {
    // Read input
    int n;
    cin >> n;
    vector<long long> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    // Output the result
    cout << min_difference(weights) << '\n';

    return 0;
}

