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
void solve()
{
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
        int n;
        cin >> n;      // 1
        int k = n;     // 1
        int x = n;     // 1
        int y = n - x; // 0
        ll ans = 0;
        while (k--)
        {
            x = k;     // 1
            y = n - k; // 0
            if (x < y)
                break;
            ll multi = x * 1LL * y;
            ans += multi + 1; // 1
        }
        cout << ans + 1 << endl;
    }
    return 0;
}