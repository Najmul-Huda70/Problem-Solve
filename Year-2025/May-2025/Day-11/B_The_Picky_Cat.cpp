// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define condition(flag) cout << (flag ? "YES" : "NO") << '\n';
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

void solve()
{
    int n;
    cin >> n;
    vi arr(n + 1);
    FOR(i, 1, n)
    cin >> arr[i];

    ll pos_Mid = abs(arr[1]);
    int small = 0, big = 0;
    FOR(i, 2, n)
    {
        ll pos_val = abs(arr[i]);
        if (pos_val < pos_Mid)
            small++;
        if (pos_val > pos_Mid)
            big++;
    }
    int mid = (n + 1) / 2;
    int need = mid - 1;
    condition(small <= need || big >= need);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
