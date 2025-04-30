// Najmul Huda
#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define FOR(i, a, b) for (int i = a; i <= b; ++i)

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    FOR(i, 1, n)
    cin >> a[i];

    set<pii> s; // global set to store all (value, index) pairs seen so far

    FOR(i, 1, n)
    {
        s.insert({a[i], i}); // insert current value and index

        cout << "index - " << i << endl;
        for (auto [val, idx] : s)
        {
            cout << "{" << val << "," << idx << "}, ";
        }
        cout << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
