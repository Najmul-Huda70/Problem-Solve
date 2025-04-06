// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vl arr(n);
        ll mn = LLONG_MAX;
        FOR(i, 0, n - 1)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }
        int mn_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mn)
                mn_cnt++;
        }

        if (mn_cnt >= 2)
        {
            cout << "Yes" << endl;
            continue;
        }

        vl divisible;
        for (auto x : arr)
        {
            if (x % mn == 0 && x != mn)
                divisible.push_back(x);
        }

        if (divisible.empty())
        {
            cout << "No" << endl;
            continue;
        }
        ll gc = 0;
        for (auto x : divisible)
        {
            ll k = x / mn;
            gc = __gcd(gc, k);
        }

        cout << (gc == 1 ? "Yes" : "No") << '\n';
    }
    return 0;
}
