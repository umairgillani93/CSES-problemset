#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int k) {
    int lo = 0;
    int hi = arr.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == k) {
            return mid; 
        }

        if (arr[lo] <= arr[mid]) {
            if (k >= arr[lo] && k < arr[mid]) {
                hi = mid - 1; 
            } else {
                lo = mid + 1; 
            }
        } 
        else {
            if (k > arr[mid] && k <= arr[hi]) {
                lo = mid + 1; 
            } else {
                hi = mid - 1; 
            }
        }
    }
    return -1; 
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2}; 
    int k = 0; 
    int idx = binarySearch(arr, k);
    cout << idx << '\n'; 
    return 0;
}

