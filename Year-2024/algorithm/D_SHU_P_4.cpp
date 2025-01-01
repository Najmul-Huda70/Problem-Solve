#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

     sort(arr2.begin(), arr2.end());

     unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) {
        pos[arr1[i]] = i;
    }

    vector<bool> vis(n, false);

    int cnt = 0;

     for (int i = 0; i < n; i++) {
        if (vis[i] || pos[arr2[i]] == i) {
            continue;
        }

       int cycle_size = 0;
        int j = i;

        while (!vis[j]) {
            vis[j] = true;
            j = pos[arr2[j]];
            cycle_size++;
        }

       if (cycle_size > 1) {
            cnt += (cycle_size - 1);
        }
    }

    cout << cnt << endl;
    return 0;
}