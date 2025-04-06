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
ll solve(int n, int k, int p)
{
    if (k == 0)
        return 0;
    ll ans;
    if (k > 0)
    {
        ans = k / p;
        if (k % p != 0)
            ans++;
        return ans <= n ? ans : -1;
    }
    else
    {
        k *= (-1);
        ans = k / p;
        if (k % p != 0)
            ans++;
        return ans <= n ? ans : -1;
    }
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
        int n, k, p;
        cin >> n >> k >> p;

        cout << solve(n, k, p) << endl;
    }
    return 0;
}