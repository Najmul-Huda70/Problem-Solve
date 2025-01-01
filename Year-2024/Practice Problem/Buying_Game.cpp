#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vl = vector<ll>;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vl A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        // Pairs to store cost and type (0 for normal, 1 for promotional)
        vector<pair<ll, int>> items;
        for (int i = 0; i < n; i++) {
            items.push_back({A[i], 0}); // Normal cost
            items.push_back({B[i], 1}); // Promotional cost
        }

        // Sort by cost, lower costs come first
        sort(items.begin(), items.end());

        ll total_cost = 0;
        set<int> bought; // Keeps track of items we have already bought
        for (auto [cost, type] : items) {
            if (bought.size() == n) break; // Stop if we have bought all items
            int idx = &type - &items[0]; // Find index of item in the original arrays
            if (bought.find(idx) == bought.end()) {
                total_cost += cost;
                bought.insert(idx);
            }
        }
        cout << total_cost << "\n";
    }
    return 0;
}
