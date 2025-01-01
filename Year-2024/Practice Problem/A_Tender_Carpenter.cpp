// Najmul Huda
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isStable(vector<int> &segment) {
    if (segment.size() < 3) return true; // Any segment with fewer than 3 elements is stable
    sort(segment.begin(), segment.end()); // Sort to check the triangle condition
    int n = segment.size();
    return segment[n - 3] + segment[n - 2] > segment[n - 1]; // Check the triangle inequality
}

bool canPartition(vector<int> &a) {
    int n = a.size();

    // Case 1: Single partition with all elements
    if (!isStable(a)) return false;

    // Case 2: Check for a second valid partition
    // Partition into two segments
    for (int i = 1; i < n; i++) {
        vector<int> left(a.begin(), a.begin() + i);
        vector<int> right(a.begin() + i, a.end());
        if (isStable(left) && isStable(right)) return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (canPartition(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
