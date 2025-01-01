#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> S(m);
        for (int i = 0; i < m; i++) {
            cin >> S[i];
        }

        // If the set has only one element and n > 1, no solution exists
        if (m == 1 && n > 1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> a(n + 1, -1); // Result array (1-indexed)
        bool valid = true;

        for (int i = 1; i <= n; i++) {
            // Assign the largest value possible from S to maximize lexicographical order
            a[i] = S[(i - 1) % m];
        }

        // Validate the solution
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (__gcd(i, j) == __gcd(a[i], a[j])) {
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }

        if (valid) {
            for (int i = 1; i <= n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
