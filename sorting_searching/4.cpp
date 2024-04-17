#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ns(n);  // Ticket prices
    vector<int> ms(m);  // Maximum prices for customers
    vector<int> result(m, -1);  // Resultant vector, initialized with -1

    // Input ticket prices
    for (int i = 0; i < n; i++) {
        cin >> ns[i];
    }

    // Input maximum prices for customers
    for (int i = 0; i < m; i++) {
        cin >> ms[i];
    }

    // Sort the ticket prices in ascending order
    sort(ns.begin(), ns.end());

    // New vector to store remaining tickets
    vector<int> remainingTickets(ns);

    // Loop through each customer's maximum price
    for (int i = 0; i < m; i++) {
        int min_diff = INT_MAX;  // Initialize minimum difference to a large value
        int idx = -1;  // Index of the chosen ticket in ns vector

        // Iterate over available tickets to find the nearest price
        for (int j = 0; j < remainingTickets.size(); j++) {
            if (ms[i] >= remainingTickets[j]) {
                int diff = ms[i] - remainingTickets[j];
                if (diff < min_diff) {
                    min_diff = diff;
                    idx = j;
                }
            } else {
                // Since tickets are sorted, if ms[i] < ns[j], further tickets will also be > ms[i]
                break;
            }
        }

        // If a ticket was found, update the result and remove it from remaining tickets
        if (idx != -1) {
            result[i] = remainingTickets[idx];
            remainingTickets.erase(remainingTickets.begin() + idx);
        }
    }

    // Output the result
    for (int i = 0; i < m; i++) {
        cout << result[i] << "\n";
    }

    return 0;
}

