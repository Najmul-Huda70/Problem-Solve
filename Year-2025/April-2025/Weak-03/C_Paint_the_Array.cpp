// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e5 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}

ll solve()
{
    int n;
    cin >> n;
    vl arr(n);
    FOR(i, 0, n - 1)
    cin >> arr[i];
    if (n == 1)
        return arr[0];

    // gcd even and odd index
    ll gcd_even_idx = arr[0], gcd_odd_idx = arr[1];
    FOR(i, 0, n - 1)
    {
        if (i % 2 == 0)
            gcd_even_idx = __gcd(gcd_even_idx, arr[i]);
        else
            gcd_odd_idx = __gcd(gcd_odd_idx, arr[i]);
    }

    // check gcd_even_idx red
    bool flag = true;
    FOR(i, 0, n - 1)
    {
        if (i % 2 == 1 && arr[i] % gcd_even_idx == 0)
            flag = false;
    }
    if (flag)
        return gcd_even_idx;

    // check gcd_odd_idx red

    flag = true;
    FOR(i, 0, n - 1)
    {
        if (i % 2 == 0 && arr[i] % gcd_odd_idx == 0)
            flag = false;
    }
    if (flag)
        return gcd_odd_idx;
    return 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}