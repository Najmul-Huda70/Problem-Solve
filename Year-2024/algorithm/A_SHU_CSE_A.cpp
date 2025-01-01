#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& S, int k) {
     vector<int> v(k, 0);
     for (int num : S) {
        v[num % k]++;
    }

   int result = 0;

    if (v[0] > 0) {
        result += 1;
    }

    for (int r = 1; r <= k / 2; ++r) {
        if (r == k - r) {
           result += 1;
        } else {
            result += max(v[r], v[k - r]);
        }
    }

    return result;
}

int main() {
   int n, k;
   cin >> n >> k;
    vector<int> S(n);
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }
    cout << solve(S, k) << endl;

    return 0;
}
