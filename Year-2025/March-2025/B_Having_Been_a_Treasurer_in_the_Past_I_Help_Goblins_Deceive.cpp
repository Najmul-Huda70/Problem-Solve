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
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = count(all(s), '_'); // 5
        int cnt2 = count(all(s), '-'); // 5
        ll ans = 0;
        int div = cnt2 / 2; // 2
        int x = cnt2 / 2;   // 2
        if (cnt2 % 2 != 0)
            x++;                            // x =3
        ans += 1LL * x * (cnt2 - x) * cnt1; // 3 * 2 * 5

        cout << ans << endl;
    }
    return 0;
}