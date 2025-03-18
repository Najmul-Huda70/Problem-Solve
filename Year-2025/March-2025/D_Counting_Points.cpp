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
        int n, m;
        cin >> n >> m;
        ll ans = m * 1LL;
        ll sumx = 0LL;
        vi x(n);
        FOR(i, 0, n - 1)
        {
            cin >> x[i];
            sumx += x[i];
        }
        vi r(n);
        FOR(i, 0, n - 1)
        {
            cin >> r[i];
        }

        for (int i = 0; i < n; i++)
        {
            int X = x[i] + 1;
            int Y = 1;
            while (X * X + Y * Y <= r[i] * r[i])
            {
                sumx++;
                X++;
                Y++;
            }
        }
        cout << sumx << endl;
    }
    return 0;
}